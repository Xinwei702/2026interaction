//week06_4
void setup() {
  size(500, 500);
}

int now = 0;
int dd = 1;

void draw() {
  background(0);
  translate(250, 250);
  now += dd;
  rotate(radians(now));
  rect(-200, -200, 400, 400);
}

void mousePressed() {
  if (dd == 1) dd = -1;
  else dd = 1;
}
