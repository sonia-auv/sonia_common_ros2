// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for sonia_common_ros2/ObstacleArray
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
#include "sonia_common_ros2/msg/obstacle_array.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_ObstacleArray_common : public MATLABROS2MsgInterface<sonia_common_ros2::msg::ObstacleArray> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_ObstacleArray_common(){}
    virtual void copy_from_struct(sonia_common_ros2::msg::ObstacleArray* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::ObstacleArray* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_ObstacleArray_common::copy_from_struct(sonia_common_ros2::msg::ObstacleArray* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["header"];
        auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //obstacles
        const matlab::data::StructArray obstacles_arr = arr["obstacles"];
        for (auto _obstaclesarr : obstacles_arr) {
        	sonia_common_ros2::msg::ObstacleInfo _val;
        auto msgClassPtr_obstacles = getCommonObject<sonia_common_ros2::msg::ObstacleInfo>("ros2_sonia_common_ros2_msg_ObstacleInfo_common",loader);
        msgClassPtr_obstacles->copy_from_struct(&_val,_obstaclesarr,loader);
        	msg->obstacles.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'obstacles' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'obstacles' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_ObstacleArray_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::ObstacleArray* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","obstacles"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/ObstacleArray");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // obstacles
    auto currentElement_obstacles = (msg + ctr)->obstacles;
    auto msgClassPtr_obstacles = getCommonObject<sonia_common_ros2::msg::ObstacleInfo>("ros2_sonia_common_ros2_msg_ObstacleInfo_common",loader);
    outArray[ctr]["obstacles"] = msgClassPtr_obstacles->get_arr(factory,&currentElement_obstacles[0],loader,currentElement_obstacles.size());
    }
    return std::move(outArray);
  } 
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_ObstacleArray_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_sonia_common_ros2_ObstacleArray_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_sonia_common_ros2_ObstacleArray_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::msg::ObstacleArray,ros2_sonia_common_ros2_msg_ObstacleArray_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_sonia_common_ros2_ObstacleArray_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::msg::ObstacleArray,ros2_sonia_common_ros2_msg_ObstacleArray_common>>();
  }
  std::shared_ptr<void> ros2_sonia_common_ros2_ObstacleArray_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<sonia_common_ros2::msg::ObstacleArray>();
    ros2_sonia_common_ros2_msg_ObstacleArray_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_sonia_common_ros2_ObstacleArray_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_sonia_common_ros2_msg_ObstacleArray_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (sonia_common_ros2::msg::ObstacleArray*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_ObstacleArray_common, MATLABROS2MsgInterface<sonia_common_ros2::msg::ObstacleArray>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_ObstacleArray_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER