  
/*
 예제 7.2
 서보모터 구동
*/
 
// 서보모터 라이브러리 불러오기
#include <Servo.h> 

// 서보모터 이름 설정
Servo motor1; 

// 서보 모터 신호핀 설정
int servoMotorPin = 9;

int leftButton = 2;
int rightButton = 3;

boolean ar19lb = false;
boolean ar19rb = false;

void setup() {
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(leftButton, INPUT_PULLUP);
  // 서보모터 설정. 0.6ms 부터 2.4ms 범위로 설정
  motor1.attach(servoMotorPin, 600, 2400);
  // 시리얼 통신 설정  
  Serial.begin(9600);
}

void loop(){
  int ar19rb2 = digitalRead(rightButton);
  int ar19lb2 = digitalRead(leftButton);
  
  if(ar19rb2==LOW) {
    ar19rb = true;
    ar19lb = false;
  }
  else if(ar19lb2==LOW) {
    ar19rb = false;
    ar19lb = true;
  }

  if(ar19rb == true) {
    motor1.write(0);
  } else if(ar19lb == true) {
    motor1.write(270);
  }
  delay(20);
}
