int motor1 = D0;
int motor2 = D1;
int motor3 = D2;
int motor4 = D3;
int motor5 = D4;
int motor6 = D5;

const bool motorValuea [6] = {true, false, false, false, false, false};
const bool motorValueb [6] = {true, true, false, false, false, false};
const bool motorValuec [6] = {true, false, false, true, false, false};
const bool motorValued [6] = {true, false, false, true, true, false};
const bool motorValuee [6] = {true, false, false, false, true, false};
const bool motorValuef [6] = {true, true, false, true, false, false};
const bool motorValueg [6] = {true, true, false, true, true, false};
const bool motorValueh [6] = {true, true, false, false, true, false};
const bool motorValuei [6] = {false, true, false, true, false, false};
const bool motorValuej [6] = {false, true, false, true, true, false};
const bool motorValuek [6] = {true, false, true, false, false, false};
const bool motorValuel [6] = {true, true, true, false, false, false};
const bool motorValuem [6] = {true, false, true, true, false, false};
const bool motorValuen [6] = {true, false, true, true, true, false};
const bool motorValueo [6] = {true, false, true, false, true, false};
const bool motorValuep [6] = {true, true, true, true, false, false};
const bool motorValueq [6] = {true, true, true, true, true, false};
const bool motorValuer [6] = {true, true, true, false, true, false};
const bool motorValues [6] = {false, true, true, true, false, false};
const bool motorValuet [6] = {false, true, true, true, true, false};
const bool motorValueu [6] = {true, false, true, false, false, true};
const bool motorValuev [6] = {true, true, true, false, false, true};
const bool motorValuew [6] = {false, true, false, true, true, true};
const bool motorValuex [6] = {true, false, true, true, false, true};
const bool motorValuey [6] = {true, false, true, true, true, true};
const bool motorValuez [6] = {true, false, true, false, true, true};

const bool motorValue1 [6] = {true, false, false, false, false, false};
const bool motorValue2 [6] = {true, true, false, false, false, false};
const bool motorValue3 [6] = {true, false, false, true, false, false};
const bool motorValue4 [6] = {true, false, false, true, true, false};
const bool motorValue5 [6] = {true, false, false, false, true, false};
const bool motorValue6 [6] = {true, true, false, true, false, false};
const bool motorValue7 [6] = {true, true, false, true, true, false};
const bool motorValue8 [6] = {true, true, false, false, true, false};
const bool motorValue9 [6] = {false, true, false, true, false, false};
const bool motorValue0 [6] = {false, true, false, true, true, false};

const bool motorValueComma [6] = {false, true, false, false, false, false};
const bool motorValueSemiColon [6] = {false, true, true, false, false, false};
const bool motorValueColon [6] = {false, true, false, false, true, false};
const bool motorValuePeriod [6] = {false, true, false, false, true, false};
const bool motorValueQuestion [6] = {false, true, true, false, false, true};
const bool motorValueExclamation [6] = {false, true, true, false, true, false};
const bool motorValueHyphen [6] = {false, false, true, false, false, true};

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
   
   delay(2000);

   digitalWrite(motor1, LOW);
   digitalWrite(motor2, LOW);
   digitalWrite(motor3, LOW);
   digitalWrite(motor4, LOW);
   digitalWrite(motor5, LOW);
   digitalWrite(motor6, LOW);

   for(int c = 0; c < word.length(); c++) {
      bool motors [6] = {false, false, false, false, false, false};

      switch (word[c]) {
         case 'a':
         case 'A':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuea[i];}
            break;
         case 'b':
         case 'B':
            for(int i = 0; i < 6; i++) { motors[i] = motorValueb[i];}
            break;
         case 'c':
         case 'C':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuec[i];}
            break;
         case 'd':
         case 'D':
            for(int i = 0; i < 6; i++) { motors[i] = motorValued[i];}
            break;
         case 'e':
         case 'E':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuee[i];}
            break;
         case 'f':
         case 'F':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuef[i];}
            break;
         case 'g':
         case 'G':
            for(int i = 0; i < 6; i++) { motors[i] = motorValueg[i];}
            break;
         case 'h':
         case 'H':
            for(int i = 0; i < 6; i++) { motors[i] = motorValueh[i];}
            break;
         case 'i':
         case 'I':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuei[i];}
            break;
         case 'j':
         case 'J':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuej[i];}
            break;
         case 'k':
         case 'K':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuek[i];}
            break;
         case 'l':
         case 'L':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuel[i];}
            break;
         case 'm':
         case 'M':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuem[i];}
            break;
         case 'n':
         case 'N':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuen[i];}
            break;
         case 'o':
         case 'O':
            for(int i = 0; i < 6; i++) { motors[i] = motorValueo[i];}
            break;
         case 'p':
         case 'P':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuep[i];}
            break;
         case 'q':
         case 'Q':
            for(int i = 0; i < 6; i++) { motors[i] = motorValueq[i];}
            break;
         case 'r':
         case 'R':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuer[i];}
            break;
         case 's':
         case 'S':
            for(int i = 0; i < 6; i++) { motors[i] = motorValues[i];}
            break;
         case 't':
         case 'T':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuet[i];}
            break;
         case 'u':
         case 'U':
            for(int i = 0; i < 6; i++) { motors[i] = motorValueu[i];}
            break;
         case 'v':
         case 'V':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuev[i];}
            break;
         case 'w':
         case 'W':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuew[i];}
            break;
         case 'x':
         case 'X':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuex[i];}
            break;
         case 'y':
         case 'Y':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuey[i];}
            break;
         case 'z':
         case 'Z':
            for(int i = 0; i < 6; i++) { motors[i] = motorValuez[i];}
            break;
         default:
            for(int i = 0; i < 6; i++) { motors[i] = true;}
            break;
         }

      if(motors[0]) {
         digitalWrite(motor1, HIGH);   
      }

      if(motors[1]) {
         digitalWrite(motor2, HIGH);   
      }

      if(motors[2]) {
         digitalWrite(motor3, HIGH);   
      }

      if(motors[3]) {
         digitalWrite(motor4, HIGH);   
      }

      if(motors[4]) {
         digitalWrite(motor5, HIGH);   
      }

      if(motors[5]) {
         digitalWrite(motor6, HIGH);   
      }
      
      delay(1000);

     digitalWrite(motor1, LOW);
     digitalWrite(motor2, LOW);
     digitalWrite(motor3, LOW);
     digitalWrite(motor4, LOW);
     digitalWrite(motor5, LOW);
     digitalWrite(motor6, LOW);
     
     delay(1000);
   }
   
   return 0;
}