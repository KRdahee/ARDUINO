#include <DHT.h>  //온습도센서 라이브러리 사용
#define RELAY 8             //릴레이와 연결된 8번 핀
#define DHTPIN 5          //습도센서와 연결된 6번 핀
#define DHTTYPE DHT22 //습도센서 종류 DHT22
#define TRIG 2 // 초음파센서 TRIG 2번핀 할당
#define ECHO 3 // 초음파센서 ECHO 3번핀 할당
 
DHT dht(DHTPIN, DHTTYPE);
float hum;
float temp;
    
void setup()
{
  Serial.begin(9600);
  pinMode(RELAY, OUTPUT);
  pinMode(TRIG,OUTPUT); // 초음파센서로 아두이노가 송신
  pinMode(ECHO,INPUT);  // 초음파센서를 아두이노가 수신
  dht.begin();
  delay(2000);
}
 
void loop()
{
  hum = dht.readHumidity();//(온습도)온도값 읽기
  temp= dht.readTemperature();//(온습도)습도값 읽기
  digitalWrite(TRIG,LOW); //(초음파)
  delayMicroseconds(2); //(초음파)
  digitalWrite(TRIG,HIGH); //(초음파)
  delayMicroseconds(5); //(초음파)
  digitalWrite(TRIG,LOW); //(초음파)
 
  long distance = pulseIn(ECHO,HIGH)/58; // 초음파 간격   
 
//릴레이 동작. 1)물건이 들어오면 5초간 릴레이 동작, 2) 5초뒤에 습도가 50이상이면 계속 동작, 3)습도가 50이하면 정지
   
  if(distance < 10 && hum > 50){
    digitalWrite(RELAY, HIGH);
  } else if(distance < 10 && hum < 50){
    digitalWrite(RELAY, HIGH);
    delay(5000);
    digitalWrite(RELAY, LOW);
  } else if(distance > 10){
    digitalWrite(RELAY, LOW);
  }
}