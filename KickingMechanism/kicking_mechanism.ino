#define ir1 12
#define ir2 10
/*#define s1 2
#define s2 3
#define s3 4*/
#define h1 2
#define h2 4
#define pwm 3
#define p0 100
#define p1 35
#define p2 40
#define p3 50

void setup()
{
 /* pinMode(s1,INPUT_PULLUP);
  pinMode(s2,INPUT_PULLUP);
  pinMode(s3,INPUT_PULLUP);*/
  pinMode(ir1,INPUT_PULLUP);
  pinMode(ir2,INPUT_PULLUP);
  pinMode(h1,OUTPUT);
  pinMode(h2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 // if(digitalRead(s1)==HIGH)
  { 
//    int r=digitalRead(s1);
//    Serial.println("btn");
//    Serial.print(r);
    int sv1= digitalRead(ir1);
    Serial.println("ir1");
    Serial.println(sv1);
    int sv2= digitalRead(ir2);
    Serial.println("ir2");
    Serial.println(sv2);


    while(digitalRead(ir1)==LOW){
    Serial.println("First Move");
    analogWrite(pwm,p0);
    digitalWrite(h1,HIGH);
    digitalWrite(h2,LOW);
    
    if(digitalRead(ir1)==HIGH)
    {
    Serial.println("second Move");  
    analogWrite(pwm,0);
    digitalWrite(h1,LOW);
    digitalWrite(h2,LOW);
    
    break;  
    
    }
    }

    Serial.print(sv1);
    

    while(digitalRead(ir2)==LOW){
      
    Serial.println("third Move");
    analogWrite(pwm,p1);
    digitalWrite(h2,HIGH);
    digitalWrite(h1,LOW);
    
    if(digitalRead(ir2)==HIGH)
    {
    Serial.println("fourth Move");  
    analogWrite(pwm,0);
    digitalWrite(h1,LOW);
    digitalWrite(h2,LOW);  
    
    break;
    }
    }
    delay(1000);
/*
    digitalWrite(pwm,p1);
    digitalWrite(h1,HIGH);
    digitalWrite(h2,LOW);

    while(digitalRead(ir1)==LOW)
    {
    digitalWrite(pwm,0);
    digitalWrite(h1,LOW);
    digitalWrite(h2,LOW);  
    break;
    }*/
}
}
