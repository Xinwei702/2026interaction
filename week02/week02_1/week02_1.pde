//week02_1
void setup(){
  size(500,500);
}
void draw(){
  if (mousePressed) background(#F58A8A);
  else background(#D6F074);
  fill(0,0,255);
  textSize(80);
  text("key:"+key,200,300);
}
