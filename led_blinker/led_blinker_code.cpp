// C++ code

// initialising all the required variables.

int led1=2,led2=3,led3=4;
int led1time=500,led2time=1000,led3time=1500;
long oldmillis1=0,oldmillis2=0,oldmillis3=0;
int led1state=LOW,led2state=LOW,led3state=LOW;
// red-led3 green-led2 blue-led1

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  long currentmillis=millis();//this returns the time for which program was running
  if (currentmillis-oldmillis1>=led1time){
    oldmillis1=currentmillis;
    if (led1state==LOW){
      led1state=HIGH;
    }
    else{
      led1state=LOW;
    }
    digitalWrite(led1,led1state);
  }
  
  if (currentmillis-oldmillis2>=led2time){
    oldmillis2=currentmillis;
    if (led2state==LOW){
      led2state=HIGH;
    }
    else{
      led2state=LOW;
    }
    digitalWrite(led2,led2state);
  }
  if (currentmillis-oldmillis3>=led3time){
    oldmillis3=currentmillis;
    if (led3state==LOW){
      led3state=HIGH;
    }
    else{
      led3state=LOW;
    }
    digitalWrite(led3,led3state);
  }
    
}
