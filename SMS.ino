int trigPin = 9;
int echoPin = 10;
int led = 13;
int ir1=8;
int ir2=7;

int val1=0;
int val2=0;
void setup() {
  Serial.begin(9600); 
   pinMode(led, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 val1=digitalRead(ir1);
 val2=digitalRead(ir2);
 if((distance<=20)) 
  {
    digitalWrite(led, HIGH);
}
   else if(distance>20)
 {
     digitalWrite(led, LOW);
   }
if(val1==1)
{
       digitalWrite(led, HIGH);
}
if(val2==1)
{
       digitalWrite(led, HIGH);
}
else
{
  digitalWrite(led,LOW);
}
}
