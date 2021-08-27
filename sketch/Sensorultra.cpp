#include <Arduino.h>
#include "Sensorultra.h"


Sensorultra::Sensorultra(int epin, int tpin)
{
    pinMode(tpin, OUTPUT);
    _tpin = tpin;
    pinMode(epin, INPUT);
    _epin = epin;
}

boolean Sensorultra::ultrasonico(int distancia){
    long duration, distance;
    boolean trigger=LOW;
    delay(50);
    trigger=LOW;
    digitalWrite(_tpin, LOW);
    delayMicroseconds(2);

    digitalWrite(_tpin, HIGH);
    delayMicroseconds(10);

    digitalWrite(_tpin, LOW);
    duration = pulseIn(_epin, HIGH);

    distance = duration/58.2;
    if(distance<=distancia){
        trigger=HIGH;
    }
    return trigger;
}
int Sensorultra::ultradistancia(){
  long duration;
  int distance;
  delay(50);
  digitalWrite(_tpin, LOW);
  delayMicroseconds(2);

  digitalWrite(_tpin, HIGH);
  delayMicroseconds(10);

  digitalWrite(_tpin, LOW);
  duration = pulseIn(_epin, HIGH);

  distance = duration/58.2;

  return distance;
}
