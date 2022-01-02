#include <Arduino.h>
#include "Motor.h"
#include "analogWrite.h"

/** analogWrite functions examples
TIMER RESOLUTION
analogWriteResolution(10); // set resolution to 10 bits for all pins
analogWriteResolution(LED_BUILTIN, 10); // set resolution to 10 bits for LED pin
PWM FREQUENCY
analogWriteFrequency(10000); // set frequency to 10 KHz for all pins
analogWriteFrequency(LED_BUILTIN, 10000); // set frequency to 10 KHz for LED pin
**/

Motor::Motor(int enpin, int inlpin, int inrpin)
{
    pinMode(enpin, OUTPUT);
    _enpin = enpin;
    pinMode(inlpin, OUTPUT);
    _inlpin = inlpin;
    pinMode(inrpin, OUTPUT);
    _inrpin = inrpin;
}

void Motor::avancar(int vel){
  digitalWrite(_inlpin,HIGH);
  digitalWrite(_inrpin,LOW);
  analogWrite(_enpin,vel);
}

void Motor::recuar(int vel){
  digitalWrite(_inlpin,LOW);
  digitalWrite(_inrpin,HIGH);
  analogWrite(_enpin,vel);
}

void Motor::parar(){
  digitalWrite(_inlpin,HIGH);
  digitalWrite(_inrpin,HIGH);
  analogWrite(_enpin,0);
}
