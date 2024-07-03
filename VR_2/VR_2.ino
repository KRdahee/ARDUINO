const uint8_t VR_PIN {A0};
const uint8_t LEDS[] {25U, 24U, 26U, 28U, 30U, 32U, 34U, 36U, 38U, 42U, 46U, 50U};

void setup() {
  // put your setup code here, to run once:
  pinMode(VR_PIN, INPUT);
  
  for(auto PIN : LEDS){
    pinMode(PIN,OUTPUT);
  }
  Serial.begin(115200UL);
}

void loop() {
  //초기화
  // put your main code here, to run repeatedly:  int vr_value = analogRead(A0);
 for(auto PIN : LEDS){
  digitalWrite(PIN,LOW);
 }
 int vr_value = analogRead(VR_PIN);
 int mapped_value = map(vr_value,0,1023,0,12);
 Serial.print("MAPPED VALUE : ");
 Serial.println(mapped_value);
 delay(5000ul);

 for(int i=0 ; i<mapped_value; ++i){
  digitalWrite(LEDS[i],HIGH);
  delay(1000UL);
 }
  }