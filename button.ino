int const led = 1;
int const button = 2;

int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 buttonState = digitalRead(button);
 if (buttonState == HIGH) 
{
 digitalWrite(led, HIGH);
 } 
else 
{
 digitalWrite(led, LOW);

}
}
