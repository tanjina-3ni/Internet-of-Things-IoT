void setup() {
  Serial.begin(115200);
 

}

void loop() {
  if(Serial.available()>0)
 {  
  Serial.print(char(Serial.read()));
  delay(200);
  }
} 
