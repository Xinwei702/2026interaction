//week07_1
// Sketch - Library - Manage Libraries... 網路通的話，可下載
// 或者用 google: processing sound library download
// Moodle 的「上課用軟體」也有一份 sound.zip
// 把「有個資料夾」的目錄放在 文件-Processing-Libraries 目錄裡
// 成功後，便可在 File-Examples-Libraries 核心函式庫-Sound-SoundFile-JumbleSoundfile
import processing.sound.*;

SoundFile sound;

void setup() {
  size(300, 300);
  sound = new SoundFile(this, "music.mp3");
  sound.play();
}

void draw() {

}
