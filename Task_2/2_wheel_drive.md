# 2-Wheel Drive using W, A, S, D Keys

## Objectives
Create a 2-wheel drive robot that takes input from the Serial Monitor. The keys W, A, S, and D control the movement: 
* **W:** Move forward
* **A:** Turn left
* **S:** Move backward
* **D:** Turn right

## Components Required 
* 1x Arduino UNO R3
* 1x 12V Battery
* 2x DC Motors
* 1x L298N Motor Driver Module
* Jumper wires

## Wiring
<img width="567" height="510" alt="Wiring Diagram" src="https://github.com/user-attachments/assets/c9a112d6-93b2-4839-ad34-55bc9ad3222f" />

### Connection Details
| L298N Pin | Arduino Pin | Function |
| :--- | :--- | :--- |
| IN1 | Pin 2 | Right Motor Forward |
| IN2 | Pin 3 | Right Motor Backward |
| IN3 | Pin 4 | Left Motor Forward |
| IN4 | Pin 5 | Left Motor Backward |
| ENA | Pin 9 | Right Motor Speed (PWM) |
| ENB | Pin 6 | Left Motor Speed (PWM) |

## Code Logic
Input is taken from the user as a string via the Serial Monitor. The string is then processed to remove the string terminator or `\n` characters, if any. The program then checks if the input is W, A, S, or D:

* **For W (Forward):** Both motors spin forward. 
* **For A (Left):** The left motor spins backward while the right motor spins forward. 
* **For S (Backward):** Both motors spin backward. 
* **For D (Right):** The right motor spins backward while the left motor spins forward.
