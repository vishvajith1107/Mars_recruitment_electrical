// C++ code

// we can create a list that has morse values of all alphabets in order

char* alpha[]={ ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
// this list has morse code of all numbers in order (0 to 9)
char* num[]={"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

int dot=200;
int dash=dot*3;
int element=200; // gap between 2 dots or dashes or dot and dash
int letter=dot*5;
int words = dot*7; // ising dot*x will help us to change the code by just changing dot value
int ledpin=5;
int buzzpin=7;

// for ease of understanding i wrote the variables 1 below the other

void morse(char*list){ //user defined function that blinks the led asper morse
  for(int i=0;list[i]!='\0'  ;i++){
    digitalWrite(ledpin,HIGH);
    tone(buzzpin,1000);
    if (list[i]=='.'){
      delay(dot);
    }
    else{
      delay(dash);
    }
    digitalWrite(ledpin,LOW);
    noTone(buzzpin);
    delay(element);
  }
  delay(letter);
}

void setup()
{
  pinMode(ledpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
  Serial.print("Enter the message to encrypt :");
  
}

void loop()
{
  
  while(Serial.available()==0){}
  if(Serial.available()){
    char ch=Serial.read();
    ch=toupper(ch);//coverts it into uppercase
    if(ch>='A'&&ch<='Z'){
      morse(alpha[ch-'A']);
    }
    else if (ch>='0'&&ch<='9'){
		morse(num[ch-'0']);
    }
    else if (ch==' '){
      delay(words);
    }
  }
    
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
