//week03_6
int [] floorX = new int[20];

void setup() {
  size(600, 600);

  for (int i=0; i<20; i++) {
    floorX[i] = int(random(25, 600-140-25));
  }
}

void draw() {
  background(0, 5, 95);

  fill(47, 105, 190);

  for (int i=0; i<=10; i++) {
    rect(0, i*60, 25, 60);
    rect(600-25, i*60, 25, 60);
  }

  fill(208, 216, 189);

  for (int i=0; i<20; i++) {
    float y = 75 + i * 75 - frameCount % 1500;

    if (y < -25) y += 1500;

    rect(floorX[i], y, 140, 25);
  }

  fill(255);

  for (int i=0; i<24; i++) {
    float x = i * 23 + 27;
    triangle(x, 0, x+9, 30, x+18, 0);
  }
}
