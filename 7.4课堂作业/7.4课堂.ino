void setup()
{
  pinMode(5, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
  Serial.begin(9600);
      
  
}
int income;
void loop()
{if(Serial.available()>0)
{income=Serial.read();
}
 switch(income){
   case:'f':
   forward()；
  break;
   case:'r':
   right();
   break;
   case:'b':
   backwaed();
   break;
   case:'s':
   stop()；
     break;
   case:'l':
   left();
   break;
   defult;
   break;
   

}

void loop()
{
  void forward()
  {
  digitalWrite(5,HIGH);
  digitalWrit(3,LOW;
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
  void backward()
   {
  digitalWrite(3,HIGH);
  digitalWrit(5,LOW;
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}void left(){
  digitalWrite(5,HIGH);
  digitalWrit(3,LOW;
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
  void right(){
  digitalWrite(3,HIGH);
  digitalWrit(5,LOW;
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}void stop(){
  digitalWrite(6,LOW);
  digitalWrit(5,LOW;
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
}
