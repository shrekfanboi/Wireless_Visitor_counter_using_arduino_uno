#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

#define in 14
#define out 19
#define relay 2

int count=0;

void IN()
{
    count++;
    lcd.clear();
    lcd.print("Person In Room:");
    lcd.setCursor(0,1);
    lcd.print(count);
    delay(200);
}

void OUT()
{
  if(count>0){
    count--;
  }
    lcd.clear();
    lcd.print("Person In Room:");
    lcd.setCursor(0,1);
    lcd.print(count);
    delay(200);
}

void setup()
{
  lcd.begin(16,2);
  lcd.print("Visitor Counter");
  pinMode(in, INPUT);
  pinMode(out, INPUT);
  pinMode(relay,OUTPUT);
  delay(200);
  lcd.clear();
  lcd.print("Person In Room: ");
  lcd.setCursor(0,1);
  lcd.print(count);
  delay(200);
}

void loop()
{  
  
  if(digitalRead(in)==1)
  IN();
  if(digitalRead(out)==1)
  OUT();

  if(count<=0)
  {
    lcd.clear();
    lcd.print("Nobody In Room");
    digitalWrite(relay,LOW);
    delay(200);
  }
  else{
    digitalWrite(relay,HIGH);
  }
  
}
