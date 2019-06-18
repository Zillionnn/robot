var robot = require("robotjs");

setInterval(()=>{
    let mousePOs = robot.getMousePos()
    console.log(mousePOs)
},20)

robot.moveMouseSmooth(124, 1058)
robot.mouseClick('left',false)
robot.moveMouseSmooth(601,449)

robot.keyToggle('a','down')
setTimeout(()=>{
    robot.keyToggle('a','up')
},5000)

// robot.mouseToggle("down", "right");

// setTimeout(function () {
//     robot.mouseToggle("up", 'right');

// }, 2000);

// 124, 1058

// 601,449