function [data, info] = serialServiceResponse
%SerialService gives an empty data for sonia_common_ros2/SerialServiceResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'sonia_common_ros2/SerialServiceResponse';
[data.SUCCESS, info.SUCCESS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.FAILED, info.FAILED] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.NO_RESPONSE, info.NO_RESPONSE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.CONNECTION_FAILED, info.CONNECTION_FAILED] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.status, info.status] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.data, info.data] = ros.internal.ros2.custommessages.sonia_common_ros2.serialMessage;
info.data.MLdataType = 'struct';
info.MessageType = 'sonia_common_ros2/SerialServiceResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'SUCCESS';
info.MatPath{2} = 'FAILED';
info.MatPath{3} = 'NO_RESPONSE';
info.MatPath{4} = 'CONNECTION_FAILED';
info.MatPath{5} = 'status';
info.MatPath{6} = 'data';
info.MatPath{7} = 'data.id';
info.MatPath{8} = 'data.size';
info.MatPath{9} = 'data.msg';
