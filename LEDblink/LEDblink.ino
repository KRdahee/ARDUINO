#include <Arduino.h> //안쓰면 자동으로 해준다.
const uint8_t LED_PIN = 13U; //음수만. 양수는 불가. 핀번호 설정했음.

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT); //13번 LED PIN을 출력하겠다. (전류를 내보내겠다.)

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(500UL); 
  digitalWrite(LED_PIN, LOW);
  delay(500UL); //1초 1000UL 0.5초 500UL 0.2초 250UL
  digitalWrite(LED_PIN, HIGH);
  delay(500UL);
  digitalWrite(LED_PIN, HIGH);
  
  }
  