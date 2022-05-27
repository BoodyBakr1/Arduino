const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;
int buzz = 7;
int D0 = 6;
int water = 8;
int flame;
int reading;
void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
pinMode(buzz, OUTPUT);
pinMode(D0, INPUT);

}

void loop() {
flame=digitalRead(D0);
Serial.println(flame);
if(flame==LOW) //high
{
digitalWrite(buzz, HIGH);
digitalWrite(water, LOW);
tone(7, 3000);
tone(7, 3000, 200);
}
else
{
digitalWrite(buzz, LOW);
digitalWrite(water, HIGH);

}
 if(Serial.available()>0)
{
 reading = Serial.read();
  switch(reading){
  case 'F': forward(); break;
  case 'B': back();    break;
  case 'L': left();    break;
  case 'R': right();   break;
  case 'S': stopp();   break;
  case 'V': horn();    break;
}
}
}

void forward(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void back(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void right(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void left(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW); 
}
void stopp(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void horn(){
  digitalWrite(7, HIGH);
  delay(1000);
   digitalWrite(7, LOW);
}




    







   
