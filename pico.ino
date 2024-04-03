
int x[10]={192,249,164,176,153,146,131,248,128,152};
void setup() {
  DDRD=255;
  PORTD=0;
}

void loop() {
 presi1();
 presi2();
}
void presi1(){
  PORTD=x[1];delay(100);
  PORTD=x[2];delay(100);
  PORTD=x[3];delay(100);
  PORTD=x[4];delay(100);
  PORTD=x[5];delay(100);
  PORTD=x[6];delay(100);
  PORTD=x[7];delay(100);
  PORTD=x[8];delay(100);
  PORTD=x[9];delay(100);
}
void presi2(){
  PORTD=x[9];delay(100);
  PORTD=x[8];delay(100);
  PORTD=x[7];delay(100);
  PORTD=x[6];delay(100);
  PORTD=x[5];delay(100);
  PORTD=x[4];delay(100);
  PORTD=x[3];delay(100);
  PORTD=x[2];delay(100);
  PORTD=x[1];delay(100);
}
