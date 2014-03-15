const int GM = 6; //connect Pin 6 to a Geigercounter's OUT Pin
const int SSR = 13; //13 Pin to the SSR
int null;

void setup()
{
  pinMode(GM, INPUT);
  pinMode(LED,OUTPUT);
}

void loop()
{
  /* everytime a Geigercounter detects radiation */
  while(digitalRead(GM) == null) {} 
  digitalWrite(LED, LOW);
  delay(200);
  digitalWrite(LED, HIGH);
} 
