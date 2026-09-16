#include <Arduino.h>

bool switchOn = true;         
int brightnessSetting = 50;   
int lampBrightness;          

int getLampBrightness(bool switchOn, int brightnessSetting);

void setup() {
  Serial.begin(115200);
  delay(2000);

  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  
  Serial.print("Switch: ");
  Serial.print(switchOn ? "ON" : "OFF");
  Serial.print(" | Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(" | Actual Brightness: ");
  Serial.println(lampBrightness);
}

void loop() {

}

int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}
