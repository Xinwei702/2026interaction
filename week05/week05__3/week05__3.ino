//week05__3
void setup() {
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600);

  tone(8, 523, 100);
  delay(200);
  tone(8, 587, 100);
  delay(200);
  tone(8, 659, 100);
  delay(200);
  tone(8, 587, 100);
  delay(200);
  tone(8, 523, 100);
  delay(200);
}

char c = '0';

void loop() {
  if (Serial.available()) {
    c = Serial.read();
  }

  for (int i=10; i<=13; i++) digitalWrite(i, LOW);

  if (c>='0' && c<='3') digitalWrite(c-'0'+10, HIGH);

  if (c=='0') noTone(8);
  if (c=='1') tone(8, 523);
  if (c=='2') tone(8, 587);
  if (c=='3') tone(8, 659);
}
