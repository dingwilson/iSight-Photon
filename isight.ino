int motor1 = D0;
int motor2 = D1;
int motor3 = D2;
int motor4 = D3;
int motor5 = D4;
int motor6 = D5;

void setup() {
   pinMode(motor1, OUTPUT);
   pinMode(motor2, OUTPUT);
   pinMode(motor3, OUTPUT);
   pinMode(motor4, OUTPUT);
   pinMode(motor5, OUTPUT);
   pinMode(motor6, OUTPUT);

   Particle.function("word",wordFunction);

   digitalWrite(motor1, LOW);
   digitalWrite(motor2, LOW);
   digitalWrite(motor3, LOW);
   digitalWrite(motor4, LOW);
   digitalWrite(motor5, LOW);
   digitalWrite(motor6, LOW);
}

void loop() {

}

int wordFunction(String word) {
   digitalWrite(motor1, HIGH);
   digitalWrite(motor2, HIGH);
   digitalWrite(motor3, HIGH);
   digitalWrite(motor4, HIGH);
   digitalWrite(motor5, HIGH);
   digitalWrite(motor6, HIGH);
   
   delay(1000);
   
   digitalWrite(motor1, LOW);
   digitalWrite(motor2, LOW);
   digitalWrite(motor3, LOW);
   digitalWrite(motor4, LOW);
   digitalWrite(motor5, LOW);
   digitalWrite(motor6, LOW);
}



