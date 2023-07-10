# RZButton - Arduino button handler library
Arduino button handler library

Class constructor takes a microcontroller pin and optional [pinMode](https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/) as parameters.

Available methods:

`isPressed()` - returns actual status

`uniquePress()` - button has been pressed

`longPress()` - button has been pressed for a longer period of time (it could be set thanks to `setLongPressTimeThreshold(milliseconds)`)

`multiclick()` - counts presses over a period of time (it could be set thanks to `setMulticlickTimeThreshold(milliseconds)`)

`wasPressed()` - returns the last known status, without checking the current one

`stateChanged()`
