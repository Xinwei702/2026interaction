//week03_3
void setup() {
  // put your setup code here, to run once:
  for (int i=2;i<=13;i++) pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=2;i<=13;i++){
    for (int k=2;k<=13;k++) digitalWrite(k,LOW);
    digitalWrite(i,HIGH);
    delay(100);
    }
}
