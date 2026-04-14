#include<Arduino.h>
int motor1pin1 =2;
int motor1pin2 =3;
int motor2pin1 =4;
int motor2pin2 =5;
int ena=9;
int enb=6;
String drive;


void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ena,200);
  analogWrite(enb,100);
  drive=Serial.readString();
  drive.trim();

  //Serialial.println(drive);
  if (drive=="w"){
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
    Serial.println("forward");

  }
  else if(drive=="s"){
    digitalWrite(motor1pin1,LOW);
    digitalWrite(motor1pin2, HIGH);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
    Serial.println("back");
  }
  else if(drive=="a"){
    digitalWrite(motor1pin1,LOW);
    digitalWrite(motor1pin2, HIGH);
    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
    Serial.println("left");
  }
  else if(drive=="d"){
    digitalWrite(motor1pin1,HIGH);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
    Serial.println("back");
  }
  else if(drive=="stop"){
    digitalWrite(motor1pin1,LOW);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, LOW);
    Serial.println("stop");
  }
}
