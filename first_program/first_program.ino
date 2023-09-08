#define ledRed 2
#define ledGreen 3
#define ledYellow 4
#define button 5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(button, INPUT);

  digitalWrite(button, HIGH);

  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void speedMode(int option){
  if(option == 1){
    digitalWrite(ledRed, HIGH);
    delay(100);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, HIGH);
    delay(100);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
  } else {
    digitalWrite(ledRed, HIGH);
    delay(500);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(500);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, HIGH);
    delay(500);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(500);
    digitalWrite(ledGreen, LOW);

  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int isButtonPressed = digitalRead(button);

  if (isButtonPressed == 0){
    speedMode(1);
  } else {
    speedMode(0);
  }
}
