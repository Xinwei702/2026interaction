//week05_2
import processing.serial.*;
Serial myPort;
void setup() {
  size(300, 200);
  myPort = new Serial(this, "COM4", 9600);
}
void draw() {
}
int p1 = 0, p2 = 0, p3 = 0;
void keyPressed() {
  if (p1 == 0 && key == '1') myPort.write('1');
  if (p2 == 0 && key == '2') myPort.write('2');
  if (p3 == 0 && key == '3') myPort.write('3');
  if (p1 == 0 && key == '1') p1 = 1;
  if (p2 == 0 && key == '2') p2 = 1;
  if (p3 == 0 && key == '3') p3 = 1;
}
void keyReleased(){
  if(key==1) p1=0;
  if(key==2) p2=0;
  if(key==3) p3=0;
  myPort.write("0");
}
