//week03_4
void setup() {
  size(600, 600);
}

void draw() {
  background(0, 5, 95);
  fill(47, 105, 190);
  for (int i = 0; i < 10; i++) {
    rect(0, i * 60, 25, 60);
    rect(600 - 25, i * 60, 25, 60);
  }
}
