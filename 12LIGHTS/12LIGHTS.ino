const uint8_t LED_PIN1 = 25U ;
const uint8_t LED_PIN2 = 24U ;
const uint8_t LED_PIN3 = 26U ;
const uint8_t LED_PIN4 = 28U ;
const uint8_t LED_PIN5 = 30U ;
const uint8_t LED_PIN6 = 32U ;
const uint8_t LED_PIN7 = 34U ;
const uint8_t LED_PIN8 = 36U ;
const uint8_t LED_PIN9 = 38U ;
const uint8_t LED_PIN10 = 42U ;
const uint8_t LED_PIN11 = 46U ;
const uint8_t LED_PIN12 = 50U ;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
  pinMode(LED_PIN5, OUTPUT);
  pinMode(LED_PIN6, OUTPUT);
  pinMode(LED_PIN7, OUTPUT);
  pinMode(LED_PIN8, OUTPUT);
  pinMode(LED_PIN9, OUTPUT);
  pinMode(LED_PIN10, OUTPUT);
  pinMode(LED_PIN11, OUTPUT);
  pinMode(LED_PIN12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN1, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN1, LOW);

  digitalWrite(LED_PIN2, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN2, LOW);

  digitalWrite(LED_PIN3, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN3, LOW);

  digitalWrite(LED_PIN4, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN4, LOW);

  digitalWrite(LED_PIN5, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN5, LOW);

  digitalWrite(LED_PIN6, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN6, LOW);
  
  digitalWrite(LED_PIN7, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN7, LOW);

  digitalWrite(LED_PIN8, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN8, LOW);

  digitalWrite(LED_PIN9, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN9, LOW);

  digitalWrite(LED_PIN10, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN10, LOW);

  digitalWrite(LED_PIN11, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN11, LOW);

  digitalWrite(LED_PIN12, HIGH);
  delay(250UL);
  digitalWrite(LED_PIN12, LOW);

}

