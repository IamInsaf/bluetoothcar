int state;

void setup() {

  pinMode(2,OUTPUT);//LEFT MOTOR P
  pinMode(3,OUTPUT);//LEFT MOTR N
  pinMode(4,OUTPUT);//RIGHT  MTR P
  pinMode(5,OUTPUT);//RIGHTB M NN
  
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() { // moveF ();
  if(Serial.available() > 0){
    state = Serial.read();
  }
  Serial.println(state);

  if (state == 'F') {
    moveF();
    delay(1);

    
  }
   if (state == 'B') {
    moveB();
    delay(1);

    
  }
   if (state == 'L') {
    moveL();
    delay(1);

    
  }
   if (state == 'R') {
    moveR();
    delay(1);

    
  }
   if (state == 'S') {
    moveS();
  }

if (state == 'D'){
  dance();
}

   if ('F','B','L','R','D' == false){moveS();}
 
 
}
void moveF(){
  
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  
  }

  void moveB(){
  
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  
  }
  void moveR(){
  
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  
  }
  void moveL(){
  
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  
  }

void moveS(){
  
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  
  }

void dance(){
  moveF(); 
  delay(100);
  moveR();
  delay(100);
   moveB(); 
  delay(100);
  moveL();
  delay(100);
  
}