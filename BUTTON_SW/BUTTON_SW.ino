const uint8_t LED_PIN {13U}; //초기화 uniform initializer 
const uint8_t BUTTON_SW1 {6U};
const uint8_t BUTTON_SW2 {7U};

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT); //불 약하게 나옴
  pinMode(BUTTON_SW1, INPUT);// option, 기본이 input


}

void loop() {
  // put your main code here, to run repeatedly:
  boolean button1 = digitalRead(BUTTON_SW1); //버튼 누르면 high
  if(button1 == HIGH){
    digitalWrite(LED_PIN, HIGH);
  }else{
    digitalWrite(LED_PIN,LOW);
  }


}
