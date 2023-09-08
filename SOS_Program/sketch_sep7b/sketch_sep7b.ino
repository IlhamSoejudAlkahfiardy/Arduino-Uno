int ledPin = 10;
int ledPin2 = 9;
int ledPin3 = 8;
int button = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void speedUp(int value){
  if(value == 0){
    for (int x=0; x<3; x++) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      delay(75);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      delay(50);
    }

    delay(100);

    for (int x = 0; x < 3; x++) {
      digitalWrite(ledPin, HIGH); // sets the LED on
      digitalWrite(ledPin2, HIGH); // sets the LED on
      digitalWrite(ledPin3, HIGH); // sets the LED on
      delay(200); // waits for 400ms
      digitalWrite(ledPin, LOW); // sets the LED off
      digitalWrite(ledPin2, LOW); // sets the LED off
      digitalWrite(ledPin3, LOW); // sets the LED off
      delay(50); // waits for 100ms
    }

    delay(50);

    for (int x = 0; x < 3; x++) {
      digitalWrite(ledPin, HIGH); // sets the LED on
      digitalWrite(ledPin2, HIGH); // sets the LED on
      digitalWrite(ledPin3, HIGH); // sets the LED on
      delay(75); // waits for 150ms

      digitalWrite(ledPin, LOW); // sets the LED off
      digitalWrite(ledPin2, LOW); // sets the LED off
      digitalWrite(ledPin3, LOW); // sets the LED off
      delay(50); // waits for 100ms
    }
  }else{
    for (int x=0; x<3; x++) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      delay(150);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      delay(100);
    }

    delay(100);

    for (int x = 0; x < 3; x++) {
      digitalWrite(ledPin, HIGH); // sets the LED on
      digitalWrite(ledPin2, HIGH); // sets the LED on
      digitalWrite(ledPin3, HIGH); // sets the LED on
      delay(400); // waits for 400ms
      digitalWrite(ledPin, LOW); // sets the LED off
      digitalWrite(ledPin2, LOW); // sets the LED off
      digitalWrite(ledPin3, LOW); // sets the LED off
      delay(100); // waits for 100ms
    }

    delay(100);

    for (int x = 0; x < 3; x++) {
      digitalWrite(ledPin, HIGH); // sets the LED on
      digitalWrite(ledPin2, HIGH); // sets the LED on
      digitalWrite(ledPin3, HIGH); // sets the LED on
      delay(150); // waits for 150ms

      digitalWrite(ledPin, LOW); // sets the LED off
      digitalWrite(ledPin2, LOW); // sets the LED off
      digitalWrite(ledPin3, LOW); // sets the LED off
      delay(100); // waits for 100ms
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int isButtonPressed = digitalRead(button);

  if(isButtonPressed == 0){
    speedUp(0);
  } else {
    speedUp(1);
  }

  

  //   // wait 5 seconds before repeating the SOS signal

  // for (int x=0; x<3; x++) {
  //     digitalWrite(ledPin2, HIGH);
  //     delay(150);
  //     digitalWrite(ledPin2, LOW);
  //     delay(100);
  // }

  // delay(100);

  // for (int x = 0; x < 3; x++) {
  //   digitalWrite(ledPin2, HIGH); // sets the LED on
  //   delay(400); // waits for 400ms
  //   digitalWrite(ledPin2, LOW); // sets the LED off
  //   delay(100); // waits for 100ms
  // }

  // delay(100);

  // for (int x = 0; x < 3; x++) {
  //   digitalWrite(ledPin2, HIGH); // sets the LED on
  //   delay(150); // waits for 150ms

  //   digitalWrite(ledPin2, LOW); // sets the LED off
  //   delay(100); // waits for 100ms
  // }

  // for (int x=0; x<3; x++) {
  //     digitalWrite(ledPin3, HIGH);
  //     delay(150);
  //     digitalWrite(ledPin3, LOW);
  //     delay(100);
  // }

  // delay(100);

  // for (int x = 0; x < 3; x++) {
  //   digitalWrite(ledPin3, HIGH); // sets the LED on
  //   delay(400); // waits for 400ms
  //   digitalWrite(ledPin3, LOW); // sets the LED off
  //   delay(100); // waits for 100ms
  // }

  // delay(100);

  // for (int x = 0; x < 3; x++) {
  //   digitalWrite(ledPin3, HIGH); // sets the LED on
  //   delay(150); // waits for 150ms

  //   digitalWrite(ledPin3, LOW); // sets the LED off
  //   delay(100); // waits for 100ms
  // }
}
