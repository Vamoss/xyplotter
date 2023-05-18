#include <AFMotor.h>                      // Inclui a Biblioteca AFMotor.h
 
const int stepsPerRevolution = 200;        // Número de etapas por volta
 
AF_Stepper motor1(stepsPerRevolution, 1);  // Define M1 e M2 como local de instalação
AF_Stepper motor2(stepsPerRevolution, 2);  // Define M3 e M4 como local de instalação
 
void setup() {
motor1.setSpeed(100);                    // Define a velocidade do Motor
motor2.setSpeed(100);                    // Define a velocidade do Motor
}
 
void loop() {
motor1.step(648, FORWARD, SINGLE);       // Movimenta o Motor para uma Direção
motor1.step(648, BACKWARD, SINGLE);      // Inverte a direção do Motor

motor2.step(648, FORWARD, SINGLE);       // Movimenta o Motor para uma Direção
motor2.step(648, BACKWARD, SINGLE);      // Inverte a direção do Motor
 
motor1.step(648, FORWARD, MICROSTEP);    // Movimenta o Motor em uma Direção
motor1.step(648, BACKWARD, MICROSTEP);   // Inverte a direção do Motor

motor2.step(648, FORWARD, MICROSTEP);    // Movimenta o Motor em uma Direção
motor2.step(648, BACKWARD, MICROSTEP);   // Inverte a direção do Motor
}
