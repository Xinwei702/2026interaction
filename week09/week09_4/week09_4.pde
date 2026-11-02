//week09_4
void setup() {
  size(550, 550);
}

void draw() {
  background(250, 248, 239);
  noStroke();

  fill(187, 173, 160);
  rect(40, 40, 450, 450);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int x = 50 + i * (100 + 10);
      int y = 50 + j * (100 + 10);

      fill(238, 228, 218);
      rect(x, y, 100, 100, 6);
    }
  }
}
