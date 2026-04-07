// C++ code
int readpin=A2;
int ledpin=5;
long randomtime,oldmillis=0;
int val;
long reactiontime=0;
void setup()
{
  pinMode(ledpin,OUTPUT);
  pinMode(readpin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  while(digitalRead(readpin) == 0){ }// to wait till the user lets go the button
  Serial.println("NEW ROUND\n\n");
  oldmillis=millis();
  randomtime=random(0,3000);
  while(millis()<oldmillis+randomtime){  // to check if the user presses before the led
    if (digitalRead(readpin)==0){
      Serial.println("false start : you started before the led blink");
      Serial.println("ROUND OVER\n\n");
      return;
    }
  }
  
  digitalWrite(ledpin,HIGH);
  val=digitalRead(readpin);
  oldmillis=millis();
  while(val==1){
    val=digitalRead(readpin);
  }
  reactiontime=millis()-(oldmillis);
  Serial.print("Reaction time : ");
  Serial.println(reactiontime);
  Serial.println();
  digitalWrite(ledpin,LOW);
  Serial.println("ROUND OVER\n\n");
  delay(2000);
}
