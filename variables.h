int buzzer = 11 ;
boolean DEBUG = false;
boolean confirm = false;


//buttons leftest being 1
//button pin
const int PbutI = 6;
const int PbutII = 5;
const int PbutIII = 4;
const int PbutIV = 3;
const int PbutV = 2;

//RGB LED
const int redPin = 9;
const int greenPin = 8;
const int bluePin = 7;

//security code to make the buzzer go
const int securCode[] = {5, 3, 5, 4, 2, 1};
const int digits = 6;
int stepCounter = 0;
int intruCounter = 2;
boolean Intrusion = false;
int confirmBut = 10;
