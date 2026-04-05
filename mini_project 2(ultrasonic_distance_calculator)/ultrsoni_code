#include <Adafruit_LiquidCrystal.h>
int pingpin=3,ledpin=4;
float time;
Adafruit_LiquidCrystal lcd(0); 

void setup() 
{
  lcd.begin(16, 2);              
  lcd.print("DISTANCE in cm");
  pinMode(ledpin,OUTPUT);
}

void loop() 
{
  pinMode(pingpin,OUTPUT);
  digitalWrite(pingpin,LOW);
  delayMicroseconds(2);
  digitalWrite(pingpin,HIGH);
  delayMicroseconds(5);
  digitalWrite(pingpin,LOW);
  pinMode(pingpin,INPUT);
  time=pulseIn(pingpin,HIGH);
  lcd.setCursor(0,1);
  lcd.print(time/2/29);
  if(time/2/29<50) digitalWrite(ledpin,HIGH);
  else digitalWrite(ledpin,LOW);
  delay(100);
}
