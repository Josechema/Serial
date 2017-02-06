/*****************************************************************
**                                                              **
**                       TÍTOL: Math is fun                     **
**         Titol: Operacions matematiques amb arduino           **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:06/02/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************

int a = 5;
int b = 10;
int c = 20;

//*********************** SETUP **********************************

void setup() {             // configura la sortida
  Serial.begin(9600);       //
  Serial.println("Here is some math: "); //
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // suma
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplica
  Serial.println(a * c);

  Serial.print("c / b = ");       // divideix
  Serial.println(c / b);

  Serial.print("c % b = ");       // modul
  Serial.println(c % b);

  Serial.print("b - c = ");       // resta
  Serial.println(b - c);

}


//*********************** LOOP ***********************************




//*********************** FUNCIONS *******************************
