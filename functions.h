#include "starwars_stuff.h"

void checkingCode(int pin) {
  pin--;
  if (securCode[stepCounter] == pin) {
  } else {
    Intrusion = true;
  }
  stepCounter++;

}

void confirmInput() {

  if (stepCounter != digits) {
    Intrusion = true;
  }

  if (Intrusion) {
    for (int i = 3; i > 0; i--) {
      digitalWrite(redPin, 255);
      delay(200);
      digitalWrite(redPin, 0);
      digitalWrite(bluePin, 255);
      delay(200);
      digitalWrite(bluePin, 0);
      tone(buzzer, 400, 100);
    }
    if (intruCounter <= 0) {
      int penalty = (intruCounter * 10) - 10;
      penalty = abs(penalty);
      for (int i = penalty; i > 0; i--) {
        digitalWrite(redPin, 255);
        delay(200);
        digitalWrite(redPin, 0);
        tone(buzzer, 400, 150);
        digitalWrite(bluePin, 255);
        delay(200);
        digitalWrite(bluePin, 0);
        tone(buzzer, 600, 150);
      }
    }
    stepCounter = 0;
    Intrusion = false;
    intruCounter--;
  } else {
    digitalWrite(greenPin, 255);

    playMelody("Star Wars - Imperial March", imperialMarchTuneTpt1, imperialMarchTempoTpt1, tuneLength, buzzer);

  }

}

void whenButtonPressed() {
  for (int i = 6; i > 1; i--) {

    int state = digitalRead(i);
    if ( state == 0 ) {
      int Time = millis();        //first time stamp
      tone(buzzer, 400, 100);      // have the buzzer beep for 200 millis
      digitalWrite(bluePin, 255);
      delay(300);
      digitalWrite(bluePin, 0);
      checkingCode(i);
      //      Serial.println(digitalRead(confirmBut));
    }
    if (digitalRead(confirmBut) == 0) {
      tone(buzzer, 400, 100);      // have the buzzer beep for 200 millis
      digitalWrite(bluePin, 255);
      delay(300);
      digitalWrite(bluePin, 0);
      confirmInput();
    }
  }
}
