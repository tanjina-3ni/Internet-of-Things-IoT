char x;
int led=13;
void setup() {
  Serial.begin(115200);
  Serial3.begin(115200);
  pinMode(led,HIGH);

}

void loop() {
  if(Serial.available()>0){
        char x=Serial3.read();
        if(x=="A")
           { 
            //Serial.println(x);
            digitalWrite(led,HIGH);
            }
        else
        {
           digitalWrite(led,LOW);
        }
  
} 
}
