# Arduino Lamp Brightness Logic — Lab Submission

## 1. Arduino Sketch (`sketch.ino`)

```cpp
#include <Arduino.h>

// Variables for testing
bool switchOn = true;         // Change to true or false to test
int brightnessSetting = 50;   // Change to 0, 50, or 100 to test
int lampBrightness;           // Variable to store the final output

// Function prototype
int getLampBrightness(bool switchOn, int brightnessSetting);

void setup() {
  Serial.begin(115200);
  delay(2000); // Allow time for Serial Monitor connection

  // Call function, store result, and print
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  
  Serial.print("Switch: ");
  Serial.print(switchOn ? "ON" : "OFF");
  Serial.print(" | Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(" | Actual Brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
  // Not used for simulation
}

// Function definition
int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}
```

---

## 2. Completed Test Table

| Brightness setting | Switch state | Expected lamp brightness | Observed output |
| :--- | :--- | :--- | :--- |
| 0 | On | 0 | 0 |
| 50 | On | 50 | 50 |
| 100 | On | 100 | 100 |
| 0 | Off | 0 | 0 |
| 50 | Off | 0 | 0 |
| 100 | Off | 0 | 0 |

---

## 3. Explanation of Parameters & Return Value

* **Parameters (`bool switchOn, int brightnessSetting`)**: 
  - `switchOn`: A boolean parameter representing the status of the switch (`true` for ON, `false` for OFF).
  - `brightnessSetting`: An integer parameter representing the targeted brightness level (ranging from `0` to `100`).
* **Return Value (`int`)**: 
  - The function returns an integer representing the calculated lamp brightness. If `switchOn` is `true`, it returns the value passed into `brightnessSetting`. If `switchOn` is `false`, it returns `0` regardless of the setting.
