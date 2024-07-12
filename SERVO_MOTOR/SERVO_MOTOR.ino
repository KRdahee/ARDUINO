const uint8_t SERVO_PIN {9, 5, 4, 3}; //도라애몽 코드임

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200UL);
  pinMode(SERVO_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 256; i += 10){
    analogWrite(SERVO_PIN, i);
    delay(100UL);
  }
  delay(1000UL);
  for(int i = 255; i >= 0; i -= 10){
    analogWrite(SERVO_PIN, i);
    delay(100UL);
  }
  delay(1000UL);
}
