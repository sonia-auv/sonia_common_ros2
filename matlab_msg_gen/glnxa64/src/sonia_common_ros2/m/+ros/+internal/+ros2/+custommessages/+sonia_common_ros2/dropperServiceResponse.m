function [data, info] = dropperServiceResponse
%DropperService gives an empty data for sonia_common_ros2/DropperServiceResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'sonia_common_ros2/DropperServiceResponse';
[data.result, info.result] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'sonia_common_ros2/DropperServiceResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'result';
