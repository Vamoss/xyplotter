#include <AFMotor.h>                      // Inclui a Biblioteca AFMotor.h
 
const int stepsPerRevolution = 48;        // Número de etapas por volta
 
AF_Stepper motor(stepsPerRevolution, 2);  // Define M3 e M4 como local de instalação
 
void setup() {
motor.setSpeed(100);                    // Define a velocidade do Motor
}
 
void loop() {
motor.step(648, FORWARD, SINGLE);       // Movimenta o Motor para uma Direção
motor.step(648, BACKWARD, SINGLE);      // Inverte a direção do Motor
 
motor.step(648, FORWARD, MICROSTEP);    // Movimenta o Motor em uma Direção
motor.step(648, BACKWARD, MICROSTEP);   // Inverte a direção do Motor
}
