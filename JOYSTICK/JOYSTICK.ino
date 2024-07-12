const uint8_t SERVO_PIN {9};
const uint8_t JOYSTICK {A8};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200UL);
  pinMode(SERVO_PIN, OUTPUT);
  pinMode(JOYSTICK, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int position_value = analogRead(JOYSTICK);
  Serial.print(F("VALUE: "));
  Serial.println(position_value);
  delay(500UL);
}
