int RE;
float volt;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {

   RE = analogRead(A0);
   volt=30*RE/1024.0;
   Serial.println(volt);
   delay(200);
}
