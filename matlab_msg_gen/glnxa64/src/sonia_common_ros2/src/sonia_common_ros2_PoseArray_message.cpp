// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for sonia_common_ros2/PoseArray
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "sonia_common_ros2/msg/pose_array.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_PoseArray_common : public MATLABROS2MsgInterface<sonia_common_ros2::msg::PoseArray> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_PoseArray_common(){}
    virtual void copy_from_struct(sonia_common_ros2::msg::PoseArray* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::PoseArray* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_PoseArray_common::copy_from_struct(sonia_common_ros2::msg::PoseArray* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //interpolation_method
        const matlab::data::TypedArray<uint8_t> interpolation_method_arr = arr["interpolation_method"];
        msg->interpolation_method = interpolation_method_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'interpolation_method' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'interpolation_method' is wrong type; expected a uint8.");
    }
    try {
        //poses
        const matlab::data::StructArray poses_arr = arr["poses"];
        for (auto _posesarr : poses_arr) {
        	sonia_common_ros2::msg::Pose _val;
        auto msgClassPtr_poses = getCommonObject<sonia_common_ros2::msg::Pose>("ros2_sonia_common_ros2_msg_Pose_common",loader);
        msgClassPtr_poses->copy_from_struct(&_val,_posesarr,loader);
        	msg->poses.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'poses' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'poses' is wrong type; expected a struct.");
    }
    try {
        //time_sent
        const matlab::data::StructArray time_sent_arr = arr["time_sent"];
        auto msgClassPtr_time_sent = getCommonObject<builtin_interfaces::msg::Duration>("ros2_builtin_interfaces_msg_Duration_common",loader);
        msgClassPtr_time_sent->copy_from_struct(&msg->time_sent,time_sent_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_sent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_sent' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_PoseArray_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::PoseArray* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","INTERPOLATION_HERMITE","INTERPOLATION_V5CUBIC","INTERPOLATION_SPLINE","interpolation_method","poses","time_sent"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/PoseArray");
    // INTERPOLATION_HERMITE
    auto currentElement_INTERPOLATION_HERMITE = (msg + ctr)->INTERPOLATION_HERMITE;
    outArray[ctr]["INTERPOLATION_HERMITE"] = factory.createScalar(currentElement_INTERPOLATION_HERMITE);
    // INTERPOLATION_V5CUBIC
    auto currentElement_INTERPOLATION_V5CUBIC = (msg + ctr)->INTERPOLATION_V5CUBIC;
    outArray[ctr]["INTERPOLATION_V5CUBIC"] = factory.createScalar(currentElement_INTERPOLATION_V5CUBIC);
    // INTERPOLATION_SPLINE
    auto currentElement_INTERPOLATION_SPLINE = (msg + ctr)->INTERPOLATION_SPLINE;
    outArray[ctr]["INTERPOLATION_SPLINE"] = factory.createScalar(currentElement_INTERPOLATION_SPLINE);
    // interpolation_method
    auto currentElement_interpolation_method = (msg + ctr)->interpolation_method;
    outArray[ctr]["interpolation_method"] = factory.createScalar(currentElement_interpolation_method);
    // poses
    auto currentElement_poses = (msg + ctr)->poses;
    auto msgClassPtr_poses = getCommonObject<sonia_common_ros2::msg::Pose>("ros2_sonia_common_ros2_msg_Pose_common",loader);
    outArray[ctr]["poses"] = msgClassPtr_poses->get_arr(factory,&currentElement_poses[0],loader,currentElement_poses.size());
    // time_sent
    auto currentElement_time_sent = (msg + ctr)->time_sent;
    auto msgClassPtr_time_sent = getCommonObject<builtin_interfaces::msg::Duration>("ros2_builtin_interfaces_msg_Duration_common",loader);
    outArray[ctr]["time_sent"] = msgClassPtr_time_sent->get_arr(factory, &currentElement_time_sent, loader);
    }
    return std::move(outArray);
  } 
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_PoseArray_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_sonia_common_ros2_PoseArray_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_sonia_common_ros2_PoseArray_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::msg::PoseArray,ros2_sonia_common_ros2_msg_PoseArray_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_sonia_common_ros2_PoseArray_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::msg::PoseArray,ros2_sonia_common_ros2_msg_PoseArray_common>>();
  }
  std::shared_ptr<void> ros2_sonia_common_ros2_PoseArray_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<sonia_common_ros2::msg::PoseArray>();
    ros2_sonia_common_ros2_msg_PoseArray_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_sonia_common_ros2_PoseArray_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_sonia_common_ros2_msg_PoseArray_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (sonia_common_ros2::msg::PoseArray*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_PoseArray_common, MATLABROS2MsgInterface<sonia_common_ros2::msg::PoseArray>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_PoseArray_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER