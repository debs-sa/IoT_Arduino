int greenLED = 7;
int redLED = 6;
int yellowLED = 9;
int whiteLED = 5;
int blueLED = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  Serial.begin(4800);
}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(7, HIGH);
delay(1000);
digitalWrite(7, LOW);
delay(1000);

digitalWrite(6, HIGH);
delay(1000);
digitalWrite(6, LOW);
delay(1000);
  
digitalWrite(9, HIGH);
delay(1000);
digitalWrite(9, LOW);
delay(1000);

digitalWrite(5, HIGH);
delay(1000);
digitalWrite(5, LOW);
delay(1000);

digitalWrite(8, HIGH);
delay(1000);
digitalWrite(8, LOW);
delay(1000);
}
