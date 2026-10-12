//week06_5
void setup() {
  size(500, 500);
}

void draw() {
  background(128);
  translate(250, 250);
  rotate(radians(frameCount));
  rect(-200, -200, 400, 400);

  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      if ((i+j)%2 == 1) fill(255);
      else fill(0);
      rect(j*50-200, i*50-200, 50, 50);
    }
  }
}
