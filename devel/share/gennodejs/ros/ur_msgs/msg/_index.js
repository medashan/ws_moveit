
"use strict";

let MasterboardDataMsg = require('./MasterboardDataMsg.js');
let RobotStateRTMsg = require('./RobotStateRTMsg.js');
let RobotModeDataMsg = require('./RobotModeDataMsg.js');
let IOStates = require('./IOStates.js');
let Digital = require('./Digital.js');
let Analog = require('./Analog.js');
let ToolDataMsg = require('./ToolDataMsg.js');

module.exports = {
  MasterboardDataMsg: MasterboardDataMsg,
  RobotStateRTMsg: RobotStateRTMsg,
  RobotModeDataMsg: RobotModeDataMsg,
  IOStates: IOStates,
  Digital: Digital,
  Analog: Analog,
  ToolDataMsg: ToolDataMsg,
};
