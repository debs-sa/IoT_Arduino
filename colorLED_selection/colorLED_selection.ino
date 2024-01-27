int greenLED = 7;
int redLED = 6;
int yellowLED = 9;
int whiteLED = 5;
int blueLED = 8;
String color;


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
Serial.println("Enter a color: ");
while (Serial.available() == 0){
}

color = Serial.readStringUntil('\n');

if(color == "GREEN"){
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(whiteLED, LOW);
  digitalWrite(blueLED, LOW);
}

if(color == "RED"){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(whiteLED, LOW);
  digitalWrite(blueLED, LOW);
}

if(color == "YELLOW"){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(whiteLED, LOW);
  digitalWrite(blueLED, LOW);
}

if(color == "WHITE"){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(whiteLED, HIGH);
  digitalWrite(blueLED, LOW);
}

if(color == "BLUE"){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(whiteLED, LOW);
  digitalWrite(blueLED, HIGH);
}
}
