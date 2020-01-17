
int trig=12;
int echo=13;
float Tt,s,v=0.034,t;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  Tt=pulseIn(echo,HIGH);
  t=(float)Tt/2;
  s=v*t;
  
}
