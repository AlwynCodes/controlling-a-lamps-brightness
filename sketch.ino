#include <Arduino.h>

int lampBrightness;

int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  }

  return 0;
}

void setup() {
  Serial.begin(115200);
  // Give the Wokwi Serial Monitor time to attach before the one-time tests.
  delay(3000);

  int brightnessSetting;
  bool switchOn;
  const int settings[] = {0, 50, 100};

  // Test brightness settings while the lamp is switched on.
  switchOn = true;
  for (int setting : settings) {
    brightnessSetting = setting;
    lampBrightness = getLampBrightness(switchOn, brightnessSetting);
    Serial.print("brightnessSetting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | switchOn: ");
    Serial.print(switchOn);
    Serial.print(" | lampBrightness: ");
    Serial.println(lampBrightness);
  }

  // Test the same brightness settings while the lamp is switched off.
  switchOn = false;
  for (int setting : settings) {
    brightnessSetting = setting;
    lampBrightness = getLampBrightness(switchOn, brightnessSetting);
    Serial.print("brightnessSetting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | switchOn: ");
    Serial.print(switchOn);
    Serial.print(" | lampBrightness: ");
    Serial.println(lampBrightness);
  }

  Serial.flush();
}

void loop() {
  // Nothing to do here — all tests run once in setup()
}
