// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for sonia_common_ros2/DropperServiceRequest
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
#include "sonia_common_ros2/srv/dropper_service.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ServiceTemplates.hpp"
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_DropperServiceRequest_common : public MATLABROS2MsgInterface<sonia_common_ros2::srv::DropperService::Request> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_DropperServiceRequest_common(){}
    virtual void copy_from_struct(sonia_common_ros2::srv::DropperService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::srv::DropperService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_DropperServiceRequest_common::copy_from_struct(sonia_common_ros2::srv::DropperService::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //side
        const matlab::data::TypedArray<uint8_t> side_arr = arr["side"];
        msg->side = side_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'side' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'side' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_DropperServiceRequest_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::srv::DropperService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","PORT_SIDE","STARBOARD","side"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/DropperServiceRequest");
    // PORT_SIDE
    auto currentElement_PORT_SIDE = (msg + ctr)->PORT_SIDE;
    outArray[ctr]["PORT_SIDE"] = factory.createScalar(currentElement_PORT_SIDE);
    // STARBOARD
    auto currentElement_STARBOARD = (msg + ctr)->STARBOARD;
    outArray[ctr]["STARBOARD"] = factory.createScalar(currentElement_STARBOARD);
    // side
    auto currentElement_side = (msg + ctr)->side;
    outArray[ctr]["side"] = factory.createScalar(currentElement_side);
    }
    return std::move(outArray);
  }
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_msg_DropperServiceResponse_common : public MATLABROS2MsgInterface<sonia_common_ros2::srv::DropperService::Response> {
  public:
    virtual ~ros2_sonia_common_ros2_msg_DropperServiceResponse_common(){}
    virtual void copy_from_struct(sonia_common_ros2::srv::DropperService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const sonia_common_ros2::srv::DropperService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_sonia_common_ros2_msg_DropperServiceResponse_common::copy_from_struct(sonia_common_ros2::srv::DropperService::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //result
        const matlab::data::TypedArray<uint8_t> result_arr = arr["result"];
        msg->result = result_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'result' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'result' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_sonia_common_ros2_msg_DropperServiceResponse_common::get_arr(MDFactory_T& factory, const sonia_common_ros2::srv::DropperService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("sonia_common_ros2/DropperServiceResponse");
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class SONIA_COMMON_ROS2_EXPORT ros2_sonia_common_ros2_DropperService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_sonia_common_ros2_DropperService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_sonia_common_ros2_DropperService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::srv::DropperService::Request,ros2_sonia_common_ros2_msg_DropperServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<sonia_common_ros2::srv::DropperService::Response,ros2_sonia_common_ros2_msg_DropperServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_sonia_common_ros2_DropperService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::srv::DropperService::Request,ros2_sonia_common_ros2_msg_DropperServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<sonia_common_ros2::srv::DropperService::Response,ros2_sonia_common_ros2_msg_DropperServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_sonia_common_ros2_DropperService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<sonia_common_ros2::srv::DropperService::Request>();
        ros2_sonia_common_ros2_msg_DropperServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<sonia_common_ros2::srv::DropperService::Response>();
        ros2_sonia_common_ros2_msg_DropperServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_sonia_common_ros2_DropperService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<sonia_common_ros2::srv::DropperService,sonia_common_ros2::srv::DropperService::Request,sonia_common_ros2::srv::DropperService::Response,ros2_sonia_common_ros2_msg_DropperServiceRequest_common,ros2_sonia_common_ros2_msg_DropperServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_sonia_common_ros2_DropperService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<sonia_common_ros2::srv::DropperService,sonia_common_ros2::srv::DropperService::Request,sonia_common_ros2::srv::DropperService::Response,ros2_sonia_common_ros2_msg_DropperServiceRequest_common,ros2_sonia_common_ros2_msg_DropperServiceResponse_common,rclcpp::Client<sonia_common_ros2::srv::DropperService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_sonia_common_ros2_DropperService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_sonia_common_ros2_msg_DropperServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (sonia_common_ros2::srv::DropperService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_sonia_common_ros2_msg_DropperServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (sonia_common_ros2::srv::DropperService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_DropperServiceRequest_common, MATLABROS2MsgInterface<sonia_common_ros2::srv::DropperService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_msg_DropperServiceResponse_common, MATLABROS2MsgInterface<sonia_common_ros2::srv::DropperService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_sonia_common_ros2_DropperService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
