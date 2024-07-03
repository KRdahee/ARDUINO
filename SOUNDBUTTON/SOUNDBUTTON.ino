/*
SparkFun Inventor’s Kit
실습 2-2: 디지털 트럼펫

부저에 음 재생을 위해 3개의 버튼을 사용하기


*/

//버튼과 부저를 사용할 핀 선언
int firstKeyPin = 2;
int secondKeyPin = 3;
int thirdKeyPin = 4;

int buzzerPin = 10;


void setup() {
  //버튼핀을 입력으로 설정
  pinMode(firstKeyPin, INPUT_PULLUP);
  pinMode(secondKeyPin, INPUT_PULLUP);
  pinMode(thirdKeyPin, INPUT_PULLUP);

  //부저핀을 출력으로 설정
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  if(digitalRead(firstKeyPin) == LOW){        //첫번째 키가 눌리면
    tone(buzzerPin, 262);                     //음계 '도'에 해당하는 음 재생 
  }
  else if(digitalRead(secondKeyPin) == LOW){  //두번째 키가 눌리면
    tone(buzzerPin, 330);                     //음계 '미'에 해당하는 음 재생 
  }
  else if(digitalRead(thirdKeyPin) == LOW){   //세번째 키가 눌리면
    tone(buzzerPin, 392);                     //음계 '솔'에 해당하는 음 재생
  }
  else{
    noTone(buzzerPin);                        //버튼이 안눌러면 음 재생 중지
  }
}

  /*
  note  frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz
  */

