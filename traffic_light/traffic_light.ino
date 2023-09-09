#define redLight 9
#define yellowLight 8
#define greenLight 10
void setup() {
  // put your setup code here, to run once:
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLight, HIGH);
  delay(5000);
  digitalWrite(yellowLight, HIGH);
  delay(3000);
  digitalWrite(yellowLight, LOW);
  digitalWrite(redLight, LOW);
  digitalWrite(greenLight, HIGH);
  delay(5000);
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  delay(3000);
  digitalWrite(yellowLight, LOW);
}
