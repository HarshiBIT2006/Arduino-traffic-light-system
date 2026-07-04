//TRAFFIC LIGHT with buzzer
const int buzzer=5;
void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(buzzer, OUTPUT);

}

void loop() {
digitalWrite(2, HIGH); //GO {green light}
delay(20000);
digitalWrite(2, LOW); //green off

digitalWrite(3, HIGH); //wait {yellow light}
delay(5000);
tone(buzzer, 1000);
delay(1000);
noTone(buzzer);
digitalWrite(3, LOW); //blue off


digitalWrite(4, HIGH); //stop {red light}
delay(5000);
digitalWrite(4, LOW); //red off

}
