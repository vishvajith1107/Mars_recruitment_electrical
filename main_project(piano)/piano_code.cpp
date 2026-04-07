// C++ code
int buzzpin=5;
//all the readpins are in a list.
int rp[]={A0,A1,A2,A3,A4,A5};
// all the frequencies are in a list.
int note[]={262,294,330,349,392,440};
//the notes of keys that are pressed
int activetone[6];
void setup()
{
  pinMode(buzzpin,OUTPUT);
  for(int i=0;i<6;i++){
    pinMode(rp[i],INPUT);
  }
}

void loop()
{
  int activecount=0;//number of keys pressed;
  for (int i=0;i<6;i++){
    if(digitalRead(rp[i])==0){
      //the key rp[i] is pressed;
      //we append the note of the key to activetone
      activetone[activecount]=note[i];
      activecount++;
     }
   }
  // case 1 no keys are pressed;
  if (activecount==0){
    noTone(buzzpin);
  }
  // case 2 if only 1 key is pressed
  else if (activecount==1){
    tone(buzzpin,activetone[0]);
  }
  //case 3 multiple keys are pressed
  else {
    for(int i=0;i<activecount;i++){
      tone(buzzpin,activetone[i]);
      delay(50);
    }
  }
         
}
