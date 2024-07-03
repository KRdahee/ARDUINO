const uint8_t VR_PIN {A0};
const uint8_t LEDS[] {25U, 24U, 26U, 28U, 30U, 32U, 34U, 36U, 38U, 42U, 46U, 50U};

void setup() {
  // put your setup code here, to run once:
  //블루투스 --> 9600UL 
  //시리얼 통신을 하겠다.
   //유선115200UL
  pinMode(VR_PIN, INPUT);
  for(auto PIN : LEDS){
  pinMode(PIN, OUTPUT);
  }
  Serial.begin(115200UL);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 0 ~ 1023
  
  int vr_value = analogRead(VR_PIN);
  int mapped_value = map(vr_value, 0 , 1023, 0, 8);
  Serial.print("MAPPED VALUE : ");
  Serial.println(mapped_value);
  delay(100UL);
}
