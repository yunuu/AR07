/*
Diy
*/

//start number
int number = 0;


// 문자열 tp가지를 설정한다.
String stringValue[]={"Binary:","Hexadecimal:", "ASCII:"}; // array

void setup() {
  // 9600bps로 시리얼 통신 설정
  Serial.begin(9600);
}

void loop() {

//
Serial.print("number =");
Serial.print(number);
Serial.print(", ");
Serial.print(stringValue[0]);
Serial.print(number,BIN);
Serial.print(", ");
Serial.print(stringValue[1]);
Serial.print(number,HEX);

Serial.println();

number++;

if(number > 15) {
  Serial.print("Mission completed!");
  delay(1000);
  exit(0);
 }

 delay(1000);
}
