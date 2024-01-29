void setup(){
// put ypour setup code here, to run once:
pinMode(7, OUTPUT);
}

id loop(){
// put your main cdode here, to run repeatedly
digitalWrite(7, HIGH);
delay(2000);
digitalWrite(7, LOW);
delay(2000);
}
