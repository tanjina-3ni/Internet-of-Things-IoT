int pin=12;
int AD;
void setup() {
 // pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
 AD = analogRead(A1);
 Serial.println(AD);

}
