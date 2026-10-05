//week05__2
void setup() {
  Serial.begin(9600);

  tone(8, 523, 100); delay(200);
  tone(8, 587, 100); delay(200);
  tone(8, 659, 100); delay(200);
  tone(8, 587, 100); delay(200);
  tone(8, 523, 100); delay(200);
}

char c = '0';

void loop() {
  if (Serial.available()) {
    c = Serial.read();
  }

  if (c=='0') noTone(8);
  if (c=='1') tone(8, 523, 100);
  if (c=='2') tone(8, 587, 100);
  if (c=='3') tone(8, 659, 100);
}
