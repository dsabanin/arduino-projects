#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char msg[] = "Listening";

void setup() {
  lcd.begin(16, 2);
  lcd.print(msg);
  delay(1000);
  Serial.begin(115200);
}

void loop() {
  String r;
  char *text;
  char substr[256];
  if (Serial.available()) {
    delay(100);
    lcd.clear();
    r = Serial.readStringUntil("\n");
    text = rtrim(r.c_str());
    if (strlen(text) > 16) {
      lcd.setCursor(0, 0);
      strncpy(substr, text, 16);
      substr[16] = '\0';
      lcd.write(substr);
      lcd.setCursor(0, 1);
//      lcd.write(substr);
      strncpy(substr, text+16, 16);
      substr[strlen(substr)] = '\0';
      lcd.write(substr);
    } else {
      lcd.setCursor(0, 0);
      lcd.write(text);
    }
  }
}

char *ltrim(char *s)
{
    while(isspace(*s)) s++;
    return s;
}

char *rtrim(char *s)
{
    char* back = s + strlen(s);
    while(isspace(*--back));
    *(back+1) = '\0';
    return s;
}

char *trim(char *s)
{
    return rtrim(ltrim(s)); 
}


