#include <M5Stack.h>

void setup() {
  M5.begin(); //M5Stackを初期化する

  M5.Lcd.fillRect(120, 140, 80, 30, WHITE); //四角形を塗りつぶす
  M5.Lcd.fillCircle(90, 80, 10, WHITE);     //円を塗りつぶす
  M5.Lcd.fillCircle(230, 80, 10, WHITE);    //円を塗りつぶす
}

void loop() {

}

//エラー発生
//このエラーは、setup() および loop() 関数が複数のファイルに定義されているために発生しています。
//Arduinoのスケッチでは、setup() と loop() はそれぞれ一度ずつしか定義できません。
//これを解決するために、setup() と loop() を一つのファイルにまとめ、
//他のファイルは補助的な関数や変数の定義のみを含めるように修正する必要があります。
//どういうこと？
