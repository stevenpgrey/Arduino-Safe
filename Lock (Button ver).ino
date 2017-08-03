// This code will use arduino pins 2 ~ 11 for numbers.
// Pin 12 will be used for enter.
// Pin 13 will be used for the buzzer.
// Pin A0 will be used for operating the servo.

#include <Servo.h>

char PASSWORD[5] = "14235"; // You can change the password here
char Str[5];
int Pos = 0;
Servo servo;
void setup() {
  Serial.begin(9600);
  servo.attach(A0);
  servo.write(0);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    Str[Pos] = '1';
    Serial.println(Str[Pos]);
    Pos++;
    Str[Pos] = '\0';
    delay(250); 
  }
  else if (digitalRead(3) == HIGH) {
    Str[Pos] = '2';
    Serial.println(Str[Pos]);
    Pos++;
    Str[Pos] = '\0';
    delay(250);
  }
  else if (digitalRead(4) == HIGH) {
    Str[Pos] = '3';
    Serial.println(Str[Pos]);
    Pos++;
    Str[Pos] = '\0';
    delay(250);
  }
  else if (digitalRead(5) == HIGH) {
    Str[Pos] = '4';
    Serial.println(Str[Pos]);
    Pos++;
    Str[Pos] = '\0';
    delay(250);
  }
  else if (digitalRead(6) == HIGH) {
    Str[Pos] = '5';
    Serial.println(Str[Pos]);
    Pos++;
    Str[Pos] = '\0';
    delay(250);
  }
  
  else if (digitalRead(12) == HIGH) {
    if(strcmp (Str, PASSWORD) == 0) {
      Serial.print("Unlocking");
      delay(500);
      servo.write(90);
    }
    else {
      tone(13, 500, 300);
    }
  }
}
