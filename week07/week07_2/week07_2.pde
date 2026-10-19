//week07_2
import processing.sound.*;

SoundFile sound;
SoundFile sound2;

void setup() {
  size(300, 300);
  sound = new SoundFile(this, "music.mp3");
  sound2 = new SoundFile(this, "ni.wav");

  sound.play();
}

void draw() {

}

void mousePressed() {
  sound2.play();
}
