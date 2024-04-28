function [data, info] = serialServiceRequest
%SerialService gives an empty data for sonia_common_ros2/SerialServiceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'sonia_common_ros2/SerialServiceRequest';
[data.data, info.data] = ros.internal.ros2.custommessages.sonia_common_ros2.serialMessage;
info.data.MLdataType = 'struct';
info.MessageType = 'sonia_common_ros2/SerialServiceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'data';
info.MatPath{2} = 'data.id';
info.MatPath{3} = 'data.size';
info.MatPath{4} = 'data.msg';
