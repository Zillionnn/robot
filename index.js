const robot = require('robotjs')
const fs = require('fs')
// robot.setMouseDelay(2);

// const twoPI = Math.PI * 2.0;
// const screenSize = robot.getScreenSize();
// const height = (screenSize.height/2) - 10;
// const width = screenSize.width;


// for(let x = 0;x<width;x++){
//     y=height*Math.sin((twoPI*x)/width)+height;
//     robot.moveMouse(x,y)
// }

// let mouse = robot.getMousePos();

// let hex = robot.getPixelColor(mouse.x, mouse.y);
// let siz = robot.getScreenSize()

// let size = 10;
// let img = robot.screen.capture(0,0,10,10);
// let multi = img.width/size;
// let color= img.colorAt(2*multi, 3*multi)
// console.log(img)


// console.log(`#${hex} at x: ${mouse.x}  y :  ${mouse.y}`)

// Type "Hello World".
robot.typeString("Hello World");
// robot.setKeyboardDelay(500)
// Press enter.
// robot.keyTap("enter");

robot.keyToggle('j', 'down')
setTimeout(()=>{
    robot.keyToggle('j','up')
},5000)