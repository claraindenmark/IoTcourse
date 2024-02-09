const int led1 = 12;
const int led2 = 10;
const int led3 = 8;  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void bit0(){
  pinMode(led1, OUTPUT);
  digitalWrite(led1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
}    

void bit1(){
  pinMode(led2, OUTPUT);
  digitalWrite(led2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
}

void bit2(){
  pinMode(led3, OUTPUT);
  digitalWrite(led3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // dash duration

}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("0");
  delay(1000);
  Serial.println("1");
  bit0();
  digitalWrite(led1, LOW);
  Serial.println("2");
  bit1();
  Serial.println("3");
  bit0();
  digitalWrite(led2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(led1, LOW); 
  Serial.println("4");
  bit2();
  Serial.println("5");
  bit0();
  digitalWrite(led1, LOW);
  Serial.println("6");
  bit1();
  Serial.println("7");
  bit0();
  digitalWrite(led2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);

}
