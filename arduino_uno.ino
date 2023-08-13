#include <Keypad.h>

const byte ROWS = 3;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
};
byte rowPins[ROWS] = {9, 8, 7};
byte colPins[COLS] = {6, 5, 4, 3};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
char code[] = "1234";
char enteredCode[5] = "";
int index = 0;

void setup() {
  Serial.begin(9600);
  keypad.addEventListener(keypadEvent);
}

void loop() {
  keypad.getKey();
}

void keypadEvent(KeypadEvent eKey) {
  if (eKey == '#') {
    if (strcmp(code, enteredCode) == 0) {
      Serial.println("Correct Code");
      delay(1000);
      index = 0;
      enteredCode[0] = '\0';
    } else {
      Serial.println("Incorrect Code");
      delay(1000);
      index = 0;
      enteredCode[0] = '\0';
    }
  } else if (eKey == '*') {
    index = 0;
    enteredCode[0] = '\0';
  } else if (eKey >= '0' && eKey <= '9') {
    if (index < 4) {
      enteredCode[index] = eKey;
      enteredCode[index + 1] = '\0';
      index++;
    }
  }
}
