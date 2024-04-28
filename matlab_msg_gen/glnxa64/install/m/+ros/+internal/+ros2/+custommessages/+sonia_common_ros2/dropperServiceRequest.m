function [data, info] = dropperServiceRequest
%DropperService gives an empty data for sonia_common_ros2/DropperServiceRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'sonia_common_ros2/DropperServiceRequest';
[data.PORT_SIDE, info.PORT_SIDE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.STARBOARD, info.STARBOARD] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.side, info.side] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'sonia_common_ros2/DropperServiceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'PORT_SIDE';
info.MatPath{2} = 'STARBOARD';
info.MatPath{3} = 'side';
