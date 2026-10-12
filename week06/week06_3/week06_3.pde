//week06_3
void setup() {
  size(500, 500);
}

void draw() {
  background(0);
  translate(250, 250);
  rotate(radians(frameCount));
  rect(-200, -200, 400, 400);
}
