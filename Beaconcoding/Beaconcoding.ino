  #include <infraredsensor.h>
void loop() {
  int IRSensorPin = 20;
  int numCharsReadFromIR = scanIR(IRSensorPin);
  myRobot->printLCD("Chars read: ");
  myRobot->printLCD(charactersReadFromIR);
  
  // Now print the reading on the next line of the LCD
  char* IRCharacters = getIR();
  myRobot->moveCursor(0, 1);
  myRobot->printLCD(IRCharacters);
}
