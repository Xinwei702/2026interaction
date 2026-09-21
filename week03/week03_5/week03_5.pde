//week03_5
void setup() {
  size(600, 600);
  for (int i=0; i<20; i++) floorY[i] = int(random(25, 600-140-25));
}

int [] floorY = new int[20];

void draw() {
  background(0, 5, 95);
  fill(47, 105, 190);
  for (int i = 0; i<=10; i++) {
    rect(0, i*60, 25, 60);
    rect(600-25, i*60, 25, 60);
  }

  fill(208, 216, 189);
  for (int i=0; i<20; i++) {
    rect(floorY[i], 75 + i * 75, 140, 25);
  }
}
