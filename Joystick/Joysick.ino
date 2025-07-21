#include <LiquidCrystal.h>


#define VRX_PIN  A1 // Arduino pin connected to VRX pin
#define VRY_PIN  A0 // Arduino pin connected to VRY pin

int x = 0; // To store value of the X axis
int y = 0; // To store value of the Y axis
int Sc = 0;
int Sr = 0;

LiquidCrystal lcd(12, 11, 6, 5, 4, 3);

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  // read analog X and Y analog values
  x = analogRead(VRX_PIN);
  y = analogRead(VRY_PIN);

  Serial.print("x = ");
  Serial.print(x);
  Serial.print(", y = ");
  Serial.println(y);
  Serial.println(Sc);
  Serial.println(Sr);
  delay(200);
}
