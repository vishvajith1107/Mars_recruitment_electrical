# 2 wheel drive using W,A,S,D keys

## Objectives
Create a 2 wheel drive that takes input as W,A,S,D from the serial monitor, and W corresponds to moving forward, A for left, S for right, D for back.

## Components Required 
* Arduino UNO R3
* 12V battery
* 2 DC Motors
* L298N Driver Module
* jumper wires

## Wiring
<img width="567" height="510" alt="7d20b0ad-496b-4a90-80ce-669ec9db1fd2" src="https://github.com/user-attachments/assets/c9a112d6-93b2-4839-ad34-55bc9ad3222f" />

## Code Logic
Input is taken from the user as string. the string is then processed to remove the string terminator or \n charectors if any. now the string is checked if it is W or A or S or D. 

For W we need the bot to move forward. So both the motors spin forward. For A we need the bot to turn left. So the left motor spins backward while the right motor spins forward. For S we need the bot to move backwards so both the motors spin backwards. For D we need the bot to turn right so the right wheel turns backward while the left wheel turns forward. 


