// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for sonia_common_ros2/KillStatus
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
#include "sonia_common_ros2/msg/kill_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_KillStatus_common : public MATLABROS2MsgInterface<sonia_common_ros2::msg::KillStatus> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_KillStatus_common(){}
    virtual void copy_from_struct(sonia_common_ros2::msg::KillStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::KillStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_KillStatus_common::copy_from_struct(sonia_common_ros2::msg::KillStatus* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //status
        const matlab::data::TypedArray<bool> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_KillStatus_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::KillStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/KillStatus");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_KillStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_sonia_common_ros2_KillStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_sonia_common_ros2_KillStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::msg::KillStatus,ros2_sonia_common_ros2_msg_KillStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_sonia_common_ros2_KillStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::msg::KillStatus,ros2_sonia_common_ros2_msg_KillStatus_common>>();
  }
  std::shared_ptr<void> ros2_sonia_common_ros2_KillStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<sonia_common_ros2::msg::KillStatus>();
    ros2_sonia_common_ros2_msg_KillStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_sonia_common_ros2_KillStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_sonia_common_ros2_msg_KillStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (sonia_common_ros2::msg::KillStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_KillStatus_common, MATLABROS2MsgInterface<sonia_common_ros2::msg::KillStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_KillStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER