char x;
void setup() {
  Serial.begin(115200);
  Serial3.begin(115200);

}

void loop() {
  if(Serial.available()>0)
 {
  char x=Serial.read();
  Serial3.print(x);
  }
  if(Serial3.available()>0)
 {
  char x=Serial3.read();
  Serial.print(x);
  }
} 
