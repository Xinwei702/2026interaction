//week05_1

void setup() {
  Serial.begin(9600);
  tone(8,523,100);
  delay(200);
  tone(8,587,100);
  delay(200);
  tone(8,659,100);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();

    if (c=='1') tone(8, 523, 1000);
    if (c=='2') tone(8, 587, 1000);
    if (c=='3') tone(8, 659, 1000);
  }
}
