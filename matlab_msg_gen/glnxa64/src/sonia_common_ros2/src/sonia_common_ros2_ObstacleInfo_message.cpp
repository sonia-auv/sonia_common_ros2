// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for sonia_common_ros2/ObstacleInfo
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
#include "sonia_common_ros2/msg/obstacle_info.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_ObstacleInfo_common : public MATLABROS2MsgInterface<sonia_common_ros2::msg::ObstacleInfo> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_ObstacleInfo_common(){}
    virtual void copy_from_struct(sonia_common_ros2::msg::ObstacleInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::ObstacleInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_ObstacleInfo_common::copy_from_struct(sonia_common_ros2::msg::ObstacleInfo* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //name
        const matlab::data::CharArray name_arr = arr["name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //is_valid
        const matlab::data::TypedArray<bool> is_valid_arr = arr["is_valid"];
        msg->is_valid = is_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_valid' is wrong type; expected a logical.");
    }
    try {
        //confidence
        const matlab::data::TypedArray<float> confidence_arr = arr["confidence"];
        msg->confidence = confidence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'confidence' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'confidence' is wrong type; expected a single.");
    }
    try {
        //pose
        const matlab::data::StructArray pose_arr = arr["pose"];
        auto msgClassPtr_pose = getCommonObject<geometry_msgs::msg::Pose>("ros2_geometry_msgs_msg_Pose_common",loader);
        msgClassPtr_pose->copy_from_struct(&msg->pose,pose_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pose' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_ObstacleInfo_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::ObstacleInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","name","is_valid","confidence","pose"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/ObstacleInfo");
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(currentElement_name);
    // is_valid
    auto currentElement_is_valid = (msg + ctr)->is_valid;
    outArray[ctr]["is_valid"] = factory.createScalar(currentElement_is_valid);
    // confidence
    auto currentElement_confidence = (msg + ctr)->confidence;
    outArray[ctr]["confidence"] = factory.createScalar(currentElement_confidence);
    // pose
    auto currentElement_pose = (msg + ctr)->pose;
    auto msgClassPtr_pose = getCommonObject<geometry_msgs::msg::Pose>("ros2_geometry_msgs_msg_Pose_common",loader);
    outArray[ctr]["pose"] = msgClassPtr_pose->get_arr(factory, &currentElement_pose, loader);
    }
    return std::move(outArray);
  } 
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_ObstacleInfo_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_sonia_common_ros2_ObstacleInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_sonia_common_ros2_ObstacleInfo_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::msg::ObstacleInfo,ros2_sonia_common_ros2_msg_ObstacleInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_sonia_common_ros2_ObstacleInfo_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::msg::ObstacleInfo,ros2_sonia_common_ros2_msg_ObstacleInfo_common>>();
  }
  std::shared_ptr<void> ros2_sonia_common_ros2_ObstacleInfo_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<sonia_common_ros2::msg::ObstacleInfo>();
    ros2_sonia_common_ros2_msg_ObstacleInfo_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_sonia_common_ros2_ObstacleInfo_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_sonia_common_ros2_msg_ObstacleInfo_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (sonia_common_ros2::msg::ObstacleInfo*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_ObstacleInfo_common, MATLABROS2MsgInterface<sonia_common_ros2::msg::ObstacleInfo>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_ObstacleInfo_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER