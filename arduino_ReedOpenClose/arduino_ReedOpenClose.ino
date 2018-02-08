int Led = 13 ;// define LED Interface
int buttonpin = 5; // define the Reed sensor interfaces
int val ;// define numeric variables val
void setup ()
{
  Serial.begin(9600);
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (buttonpin, INPUT) ;// output interface as defined Reed sensor
}
void loop ()
{
  val = digitalRead (buttonpin) ;// digital interface will be assigned a value of 3 to read val
  
  if (val == HIGH) // When the Reed sensor detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH);
    Serial.println(val);
    
  }
  else
  {
    digitalWrite (Led, LOW);
    Serial.println(val);
  }
}
