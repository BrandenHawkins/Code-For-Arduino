int leds[8] = {2,3,4,5,6,7,8,9};
int e = 50;

void setup(){
  for (int jj; jj<sizeof(leds)/sizeof(int);jj++){
    pinMode(leds[jj],OUTPUT);
    delay(e);
  }
}

void loop(){
  digitalWrite(leds[random(0,sizeof(leds)/sizeof(int))],HIGH);
  delay(e);
  digitalWrite(leds[random(0,sizeof(leds)/sizeof(int))],LOW);
  }
