// C++ code
//
int colourval,timeval,colourpin=A0,timepin=A1,red=3,blue=5,green=6;
int redval,greenval,blueval;
void setup()
{
  pinMode (colourpin,INPUT);
  pinMode (timepin,INPUT);
  pinMode (green,OUTPUT);
  pinMode (red,OUTPUT);
  pinMode (blue,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  colourval=analogRead(colourpin);
  timeval=analogRead(timepin);
  Serial.print("colour val : ");
  Serial.println(colourval);
  Serial.print("time val : ");
  Serial.println(timeval);
  
  if(colourval<=341){
    redval=map(colourval,0,341,0,255);
    greenval=map(colourval,0,341,255,0);
    blueval=0;
  }
  else if(colourval<=682){
    redval=0;
    greenval=map(colourval,342,682,255,0);
    blueval=map(colourval,342,682,0,255);
  }
  else {
    redval=map(colourval,683,1023,0,255);
    greenval=0;
    blueval=map(colourval,683,1023,255,0);
  }
  
  
  analogWrite(blue,blueval);
  analogWrite(red,redval);
  analogWrite(green,greenval);
  
  delay(map(timeval,0,1023,200,1000));
        
  analogWrite(blue,0);
  analogWrite(red,0);
  analogWrite(green,0);
  delay(map(timeval,0,1023,200,1000));
}
