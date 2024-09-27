#define TRIG 2  
#define ECHO 3

long duration;

int distance; 
void setup(){
  pinMode(TRIG, OUTPUT);
  
  pinMode(ECHO,INPUT);
  Serial.begin(115200);
}
void loop()
{
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delay(10);
  digitalWrite(TRIG,LOW);
  duration=pulseIn(ECHO,HIGH); 
  distance=duration * (0.034 / 2.0); 
  Serial.print(distance);
  Serial.println(" cm");
}
