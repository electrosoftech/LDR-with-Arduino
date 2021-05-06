#define yesilPin 7
void setup() {
  pinMode(1,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  int isik=analogRead(A0);
   Serial.println(isik);
   delay(50);
   
   if(isik<600 && isik>350){
    digitalWrite(3,HIGH);
    digitalWrite(yesilPin,LOW);
    digitalWrite(1,LOW);
    noTone(1);
   }
   else if(isik<350){
    digitalWrite(yesilPin,HIGH); 
    digitalWrite(1,HIGH);
    tone(1,440);
     }
   else if(isik>700){
    digitalWrite(3,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(1,LOW);
    noTone(1);
   }
   
   

  
}

int melodi(int dly)
{
  tone(7, 740);
  delay(dly);
  noTone(7);
  delay(dly);
}
