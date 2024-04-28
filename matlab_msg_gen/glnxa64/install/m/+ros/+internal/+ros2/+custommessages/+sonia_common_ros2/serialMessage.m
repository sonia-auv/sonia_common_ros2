function [data, info] = serialMessage
%SerialMessage gives an empty data for sonia_common_ros2/SerialMessage
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'sonia_common_ros2/SerialMessage';
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.size, info.size] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.msg, info.msg] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
info.MessageType = 'sonia_common_ros2/SerialMessage';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'size';
info.MatPath{3} = 'msg';
