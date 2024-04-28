// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for sonia_common_ros2/SerialMessage
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
#include "sonia_common_ros2/msg/serial_message.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_SerialMessage_common : public MATLABROS2MsgInterface<sonia_common_ros2::msg::SerialMessage> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_SerialMessage_common(){}
    virtual void copy_from_struct(sonia_common_ros2::msg::SerialMessage* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::SerialMessage* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_SerialMessage_common::copy_from_struct(sonia_common_ros2::msg::SerialMessage* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //id
        const matlab::data::TypedArray<int8_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int8.");
    }
    try {
        //size
        const matlab::data::TypedArray<int32_t> size_arr = arr["size"];
        msg->size = size_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'size' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'size' is wrong type; expected a int32.");
    }
    try {
        //msg
        const matlab::data::TypedArray<uint8_t> msg_arr = arr["msg"];
        size_t nelem = msg_arr.getNumberOfElements();
        	msg->msg.resize(nelem);
        	std::copy(msg_arr.begin(), msg_arr.begin()+nelem, msg->msg.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'msg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'msg' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_SerialMessage_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::msg::SerialMessage* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","id","size","msg"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/SerialMessage");
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // size
    auto currentElement_size = (msg + ctr)->size;
    outArray[ctr]["size"] = factory.createScalar(currentElement_size);
    // msg
    auto currentElement_msg = (msg + ctr)->msg;
    outArray[ctr]["msg"] = factory.createArray<sonia_common_ros2::msg::SerialMessage::_msg_type::const_iterator, uint8_t>({currentElement_msg.size(), 1}, currentElement_msg.begin(), currentElement_msg.end());
    }
    return std::move(outArray);
  } 
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_SerialMessage_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_sonia_common_ros2_SerialMessage_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_sonia_common_ros2_SerialMessage_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::msg::SerialMessage,ros2_sonia_common_ros2_msg_SerialMessage_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_sonia_common_ros2_SerialMessage_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::msg::SerialMessage,ros2_sonia_common_ros2_msg_SerialMessage_common>>();
  }
  std::shared_ptr<void> ros2_sonia_common_ros2_SerialMessage_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<sonia_common_ros2::msg::SerialMessage>();
    ros2_sonia_common_ros2_msg_SerialMessage_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_sonia_common_ros2_SerialMessage_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_sonia_common_ros2_msg_SerialMessage_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (sonia_common_ros2::msg::SerialMessage*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_SerialMessage_common, MATLABROS2MsgInterface<sonia_common_ros2::msg::SerialMessage>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_SerialMessage_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER