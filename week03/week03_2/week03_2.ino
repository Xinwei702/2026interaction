//week03_2
void setup() {
  // put your setup code here, to run once:
  //pinMode(2,INPUT_PULLUP);
  for (int i=2;i<=13;i++) pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    for (int i=2;i<=7;i++) digitalWrite(i,HIGH);
    for (int i=8;i<=13;i++) digitalWrite(i,LOW);
    delay(1000);
    for (int i=2;i<=7;i++) digitalWrite(i,LOW);
    for (int i=8;i<=13;i++) digitalWrite(i,HIGH);
    delay(1000);
}
