void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  String morse ="";
  while (Serial.available()>0)
  {
    morse +=char(Serial.read());
    delay(2);
    switch(morse)
    {
      case 'a':
        dot();dash();black();black();
      case 'b':
      dash();dot();dot();dot();
      case 'c':
      dash();dot();dash();dot();
      case 'd':
      dash();dot();dot();black();
      case 'e':
      dot();black();black();black();
      case 'f':
      dot();dot();dash();dot();
      case 'g':
      dash();dash();dot();black();
      case 'h':
      dot();dot();dot();dot();
      case 'i':
      dot();dot();black();black();
      case 'j':
      dot();dash();dash();dash();
      case 'k':
      dash();dot();dash();black();
      case 'l':
      dot();dash();dot();dot();
      case 'm':
      dash();dash();black();black();
      case 'n':
      dash();dot();black();black();
      case 'o':
      dash();dash();dash();black();
      case 'p':
      dot();dash();dash();dot();
      case 'q':
      dash();dash();dot();dash();
      case 'r':
      dot();dash();dot();black();
      case 's':
      dot();dot();dot();black();
      case 't':
      dash();black();black();black();
      case 'u':
      dot();dot();dash();black();
      case 'v':
      dot();dot();dot();dash();
      case 'w':
      dot();dash();dash();black();
      case 'x':
      dash();dot();dot();dash();
      case 'y':
      dash();dot();dash();dash();
      case 'z':
      dash();dash();dot();dot();
      case ' ':
        delay(1000);
    }
  } 
}

void dot()
{
  
  digitalWrite(4,HIGH);
  
  delay(250);
  
  digitalWrite(4,LOW);
  
  delay(250);
}


void dash()
{
  
  digitalWrite(4,HIGH);
  
  delay(1000);
  
  digitalWrite(4,LOW);
  
  delay(250);
}
void black()
{
  
  digitalWrite(5,HIGH);
    
    delay(250);
  
  digitalWrite(5,LOW);
  
  delay(250);
}
