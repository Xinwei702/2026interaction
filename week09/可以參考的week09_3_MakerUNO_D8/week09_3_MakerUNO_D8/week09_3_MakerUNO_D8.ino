
// week09_3_MakerUNO_D8
// Arduino Uno + MakerUNO Pin 8 Buzzer
// Processing 2048 -> USB Serial -> Arduino

const byte BUZZER = 8;

const byte QUEUE_CAP = 48;
char events[QUEUE_CAP];

byte qHead = 0;
byte qTail = 0;

bool playing = false;
unsigned long soundEnd = 0;

void enqueue(char ch) {
  byte next = (qTail + 1) % QUEUE_CAP;

  if (next == qHead) return;

  events[qTail] = ch;
  qTail = next;
}

// Play different sounds for game events
void playEvent(char ch) {

  int frequency = 0;
  int duration = 0;

  if (ch == 'M') {
    frequency = 660;
    duration = 80;
  }
  else if (ch == 'C') {
    frequency = 988;
    duration = 200;
  }
  else if (ch == 'N') {
    frequency = 523;
    duration = 120;
  }

  if (frequency == 0) return;

  tone(BUZZER, frequency);

  soundEnd = millis() + duration;
  playing = true;
}

void setup() {
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);

  Serial.begin(115200);
}

void loop() {

  // Receive events from Processing
  while (Serial.available() > 0) {

    char ch = (char)Serial.read();

    if (ch == 'M' || ch == 'C' || ch == 'N') {
      enqueue(ch);
    }
  }

  // Stop sound when time is up
  if (playing && (long)(millis() - soundEnd) >= 0) {
    noTone(BUZZER);
    playing = false;
  }

  // Play next queued event
  if (!playing && qHead != qTail) {

    char ch = events[qHead];

    qHead = (qHead + 1) % QUEUE_CAP;

    playEvent(ch);
  }
}
