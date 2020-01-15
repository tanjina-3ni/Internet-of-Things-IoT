
int pin=6;


void setup() {
  Serial3.begin(115200);
  Serial.begin(115200);
  pinMode(pin,INPUT_PULLUP);
 
}

void loop() {

 char x = digitalRead(pin);
 if(x==HIGH)
 {
  Serial3.print("A");
 }
 else
 {
   Serial3.print("a");
 }
 

}
