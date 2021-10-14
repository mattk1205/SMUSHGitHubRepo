  #include <LiquidCrystal_I2C.h>

int lcdAddress = 0x27; //or 0x3F
int loopCount = 0;

LiquidCrystal_I2C *lcd;

  bool sucess;

void setup() 
{
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("Inclination Testing"); // Print a welcome message
  delay(3000);                       // Let the message show for 3 seconds
  // Assuming your inclinometer is wired and connected to analog pin 6
success = setupIncline(6);
}


if (success) {
  int inclineReading = getIncline();
 
// This is NOT a good interpolating function. Your function will need to be more
// precise & accurate than this. This is just an example to show converting from
// a raw sensor reading to an angle before printing to the LCD screen.
// requires testing 
double angle = inclineReading / 6;
Serial.println(angle);
//lcd->print(angle);
}
