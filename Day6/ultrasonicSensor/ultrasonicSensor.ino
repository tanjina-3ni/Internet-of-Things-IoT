 int trig = 12;
 int echo = 13;
float t,s,v=0.034;
int distance;
void setup() {
pinMode(trig, OUTPUT); // Sets the trigPin as an Output
pinMode(echo, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trig, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
t = pulseIn(echo, HIGH)/2;
// Calculating the distance
  s= v*t;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(s);
}
