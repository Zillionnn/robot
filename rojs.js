var robot = require("robot-js");

var keyboard = robot.Keyboard();
// Type a capital H character
setTimeout(() => {
    keyboard.press(robot.KEY_J);
    // keyboard.click   (robot.KEY_H    );
    // keyboard.release (robot.KEY_SHIFT);

    // Change default auto delay
    keyboard.autoDelay.min = 100;
    keyboard.autoDelay.max = 200;

    // Finish typing the fancy "Hello ROBOT!"
    // keyboard.click ("ELLO +Robo<<<+(obot)+1");
}, 5000)

