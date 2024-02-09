const int led1 = 12;
const int led2 = 10;
const int led3 = 8;  
void setup() {
  // put your setup code here, to run once:

}

void red(){
  pinMode(led1, OUTPUT);
  digitalWrite(led1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // dot duration
}    

void orange(){
  pinMode(led2, OUTPUT);
  digitalWrite(led2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // dash duration
}

void green(){
  pinMode(led3, OUTPUT);
  digitalWrite(led3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // dash duration

}
void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  red();
  orange();
  digitalWrite(led2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(led1, LOW);   // turn the LED off by making the voltage LOW
  green();
  delay(1000); 
  digitalWrite(led3, LOW);
}
