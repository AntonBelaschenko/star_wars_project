//Starwars music found @:https://github.com/robsoncouto/arduino-songs/blob/master/starwars/starwars.ino
#include "variables.h"
#include "functions.h"

//variables defined in liabries


void setup(){ 
  Serial.begin(9600);
  Serial.println(sizeof(securCode));
  pinMode(buzzer, OUTPUT);

// buttons pin
  pinMode(PbutI, INPUT_PULLUP);
  pinMode(PbutII, INPUT_PULLUP);
  pinMode(PbutIII, INPUT_PULLUP);
  pinMode(PbutIV, INPUT_PULLUP);
  pinMode(PbutV, INPUT_PULLUP);

//confirm button
  pinMode(confirmBut, INPUT_PULLUP);

//RGB LED
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  

}

void loop()
{
  whenButtonPressed();
  //Serial.println(digitalRead(PbutI));
  }
