#define redLight 9
#define greenLight 7
#define redLightUser 6
#define greenLightUser 5
#define button 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(redLightUser, OUTPUT);
  pinMode(greenLightUser, OUTPUT);
}

void trafficLight(int options){
  if (options == 0) {
    digitalWrite(greenLight, LOW);
    digitalWrite(redLight, HIGH);
    digitalWrite(redLightUser, LOW);
    digitalWrite(greenLightUser, HIGH);
  } else {
    digitalWrite(redLight, LOW);
    digitalWrite(greenLight, HIGH);
    digitalWrite(redLightUser, HIGH);
    digitalWrite(greenLightUser, LOW);
  }
}

void loop() {
  int isButtonPressed = digitalRead(button);
  // put your main code here, to run repeatedly:

  if(isButtonPressed == 0){
    trafficLight(isButtonPressed);
  } else {
    trafficLight(1);
  }

}
