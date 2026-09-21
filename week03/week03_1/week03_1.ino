//week03_1
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  for (int i=3;i<=13;i++) pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)==HIGH){
    for (int i=3;i<=7;i++) digitalWrite(i,HIGH);
    for (int i=8;i<=13;i++) digitalWrite(i,LOW);
    }
    else{
      for (int i=3;i<=7;i++) digitalWrite(i,LOW);
      for (int i=8;i<=13;i++) digitalWrite(i,HIGH);






      
      }
}
