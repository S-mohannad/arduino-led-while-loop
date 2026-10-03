void setup() 
{pinMode (13,OUTPUT);}

void loop()
{int c=0;
while(c<10){
digitalWrite(13, HIGH);
delay (250);
digitalWrite(13,LOW);
delay (250);
c=c+1;}
delay(5000);
}