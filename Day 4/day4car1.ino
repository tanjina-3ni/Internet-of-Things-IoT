char data;

int ENA=6;
int IN1=7;
int IN2=8;
int IN3=9;
int IN4=10;
int ENB=11;

int SPEED=150;
void setup() {
  Serial.begin(9600); //the speed in which we are getting the data from  smartphone 

  pinMode(ENA,OUTPUT);
   pinMode(IN1,OUTPUT);
   pinMode(IN2,OUTPUT);
   pinMode(IN3,OUTPUT);
   pinMode(IN4,OUTPUT);
   pinMode(ENB,OUTPUT);
  
}
void loop() {

if(Serial.available()>1){   //if we only get6 valid only then we will read
 
data=Serial.read();
}

if(data=='F'){FORWARD();}
else if(data=='B'){BACKWARD();}
else if(data=='L'){LEFT();}
else if(data=='R'){RIGHT();}
else if (data=='S'){STOP();}
else{STOP();}

}
void FORWARD()
{
  //2 pins will be used for PW generation 
  analogWrite(ENA,SPEED);
  digitalWrite(IN1,HIGH);
   digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
     digitalWrite(IN4,LOW);
     analogWrite(ENB,SPEED);
  }
void BACKWARD()
{
  //2 pins will be used for PW generation 
  analogWrite(ENA,SPEED);
  digitalWrite(IN1,LOW);
   digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
     digitalWrite(IN4,HIGH);
     analogWrite(ENB,SPEED);
  }
void LEFT()
{analogWrite(ENA,SPEED);
  digitalWrite(IN1,LOW);
   digitalWrite(IN2,HIGH);
   digitalWrite(IN3,HIGH);
     digitalWrite(IN4,LOW);
     analogWrite(ENB,SPEED);
  }

void RIGHT()
{analogWrite(ENA,SPEED);
  digitalWrite(IN1,HIGH);
   digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
     digitalWrite(IN4,HIGH);
     analogWrite(ENB,SPEED);
  }
  void STOP()
{
  //2 pins will be used for PW generation 
  analogWrite(ENA,0);
  digitalWrite(IN1,LOW);
   digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
     digitalWrite(IN4,LOW);
     analogWrite(ENB,0);
  }

