  #include <infraredsensor.h>
  #include <LiquidCrystal_I2C.h>

int lcdAddress = 0x27; //or 0x3F
int loopCount = 0;

LiquidCrystal_I2C *lcd;

void setup() {
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("IR Sensing"); // Print a welcome message
  delay(3000);                       // Let the message show for 3 seconds
  bool sucess;
  int IRSensorId;
  int IRSensorPin;

   // Assuming an IR sensor is wired and connected to digital pin 10
  IRSensorId = 10;
  IRSensorPin = 11;
  success = setupIR(IRSensorId, IRSensorPin;);

void loop() {
  if (success) {
  // Now ready to use the IR sensor with scanIR and getIR

  int IRSensorPin = 20;
  int numCharsReadFromIR = scanIR(IRSensorPin);
  myRobot->printLCD("Chars read: ");
  myRobot->printLCD(charactersReadFromIR);
  
  // Now print the reading on the next line of the LCD
  char* IRCharacters = getIR();
  myRobot->moveCursor(0, 1);
  myRobot->printLCD(IRCharacters);
  }
}
