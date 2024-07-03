const uint8_t BUTTON {31U};
const uint8_t BELL{39U};

void setup() {
  // put your setup code here, to run once:
  pinMode(BELL, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == LOW ){
    digitalWrite(BELL, HIGH);
  }else{
    digitalWrite(BELL, LOW);
  }
}
