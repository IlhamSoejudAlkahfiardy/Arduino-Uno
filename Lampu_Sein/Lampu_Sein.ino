#define seinKanan 2
#define seinKiri 3
#define buttonKanan 8
#define buttonKiri 9
#define buttonHazard 10
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonHazard, INPUT);
  pinMode(buttonKanan, INPUT);
  pinMode(buttonKiri, INPUT);
  pinMode(seinKanan, OUTPUT);
  pinMode(seinKiri, OUTPUT);

}

void loop() {
  
  int isKananPressed = digitalRead(buttonKanan);
  int isKiriPressed = digitalRead(buttonKiri);
  int isHazardPressed = digitalRead(buttonHazard);

  if(isKananPressed == 0){
      digitalWrite(seinKanan, HIGH);
      delay(450);
      digitalWrite(seinKanan, LOW);  
      delay(150);
  }

  if(isKiriPressed == 0){
      digitalWrite(seinKiri, HIGH);
      delay(450);
      digitalWrite(seinKiri, LOW);  
      delay(150);
  }

  if(isHazardPressed == 0){
      digitalWrite(seinKiri, HIGH);
      digitalWrite(seinKanan, HIGH);
      delay(450);
      digitalWrite(seinKiri, LOW);  
      digitalWrite(seinKanan, LOW);  
      delay(150);
  }
}
