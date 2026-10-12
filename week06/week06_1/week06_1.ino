//week06_1
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
  tone(8,523,100);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==LOW){
    tone(8,523,100);
    delay(100);
    }
}
