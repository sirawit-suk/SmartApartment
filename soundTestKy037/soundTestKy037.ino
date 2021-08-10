int Led = D1 ;// define LED Interface
int buttonpin = A0; // define D0 Sensor Interface
int val = 0;// define numeric variables val
 
void setup ()
{
  Serial.begin(115200);
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (buttonpin, INPUT) ;// output interface D0 is defined sensor
  Serial.println("START");
}
 
void loop ()
{
  val = analogRead(buttonpin);// digital interface will be assigned a value of pin 3 to read val
  if (val >= 12) // When the sound detection module detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
  Serial.println(val);
}
