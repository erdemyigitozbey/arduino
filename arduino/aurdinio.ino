int buttonPin= 12;
long randNumber;

void setup(){
  pinMode(buttonPin, INPUT);
}


void loop(){
  
  int buttonState = digitalRead(buttonPin);

  if (buttonState == 1){

      randNumber = random(100, 1000);
      tone(8, randNumber, 500);
      delay(500);
      noTone(8);
  }
}
