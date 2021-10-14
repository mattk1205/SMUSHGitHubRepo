#include <conductivity.h>
#include <LiquidCrystal_I2C.h>

int lcdAddress = 0x27; //or 0x3F
int loopCount = 0;

LiquidCrystal_I2C *lcd;

void setup() {
  Serial.begin(9600);
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("Salinity Testing"); // Print a welcome message
  delay(3000);                       // Let the message show for 3 seconds
}

void loop() {
int adc,i;
// int salinity;
double mean;
adc = 0;

for(i = 0; i < 5; i++) {
  adc+=getConductivity();
}
mean = ((double) adc)/5.0;
//salinity = mean function
//Display on LDC
//lcd->print(salinity)
Serial.println(mean);

delay(1000);
}
