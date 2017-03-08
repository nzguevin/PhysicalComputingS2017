void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int redButtonState = digitalRead(11);
  int yellowButtonState = digitalRead(10);
  int lightSensorValue = analogRead(A1);
  int turnSensorValue = analogRead(A0);
  Serial.print ("Light sensor value: ");
  Serial.print (lightSensorValue);
  Serial.print (" // ");
  Serial.print ("Turn sensor value: ");
  Serial.print (turnSensorValue);
  Serial.print (" // ");
  if (redButtonState == 1)
  {
    Serial.print ("Red button state: ON // ");
  }
  else
  {
    Serial.print ("Red button state: OFF // ");
  }
  if (yellowButtonState == 1)
  {
    Serial.println ("Yellow button state: ON // ");
  }
  else
  {
    Serial.println ("Yellow button state: OFF // ");
  }
  delay (1000);
}
