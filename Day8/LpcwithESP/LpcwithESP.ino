int RE;
float volt; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial3.begin(115200);
  pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
 RE = analogRead(A0);  
 float volt=30*RE/1024.0;
 Serial.println(volt);
 Serial3.println(volt);
 delay(1000);
}
