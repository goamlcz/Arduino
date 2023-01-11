#include <Servo.h>

int led1 = 13;
int tlacitko1 = 12;
int led2 = 11;
int tlacitko2 = 10;
int led3 = 9;

int servo = 8;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(tlacitko1, INPUT);

  pinMode(led2, OUTPUT);
  pinMode(tlacitko2, INPUT);

  pinMode(led3, OUTPUT);

  myservo.attach(servo);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int stisknuto1 = digitalRead(tlacitko1);
  int stisknuto2 = digitalRead(tlacitko2);

  if(stisknuto1 == HIGH) 
  {
    digitalWrite(led1, HIGH);  
    digitalWrite(led2, LOW);  
    digitalWrite(led3, LOW); 
    myservo.write(0);
  }
  else if(stisknuto2 == HIGH) 
  {
    digitalWrite(led3, HIGH);
    digitalWrite(led1, LOW);  
    digitalWrite(led2, LOW); 
    myservo.write(180);
  }
  else 
  {
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);  
    digitalWrite(led3, LOW); 
    myservo.write(90);
  } 

}
