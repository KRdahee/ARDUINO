enum RGB {
  RED = 2,
  GREEN, //자동 3번
  BLUE //자동 4번
};

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  Serial.begin(115200UL); // 시리얼 통신 baud 115200

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0) { // desktop에서 값을 보내면 메모리 버퍼
    uint8_t red_value {Serial.parseInt()};
    uint8_t green_value {Serial.parseInt()};
    uint8_t blue_value {Serial.parseInt()};
    if(Serial.read() == '\n') {
      analogWrite(RED, red_value);
      analogWrite(GREEN, green_value);
      analogWrite(BLUE, blue_value);
    } 
 }delay(500UL);

}

