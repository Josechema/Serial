/*****************************************************************
**                                                              **
**                       TÍTOL: Hipotenusa                      **
**              Calcula la hipotenusa d'un triangle             **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:06/02/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************

int a = 3;     //Donem el valor la variabe a
int b = 4;     //Donem el valor a variable b
int h;         // Valor hipotenusa desconegut 

//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);
  Serial.println("lets calculate a hypoteneuse");

  Serial.print("a = ");
  Serial.println(a);          // Imprimim en pantalla el valor de a
  Serial.print("b = ");
  Serial.println(b);          // Imprimim en pantalla el valor de b
  Serial.print("h = ");
  h = sqrt(pow (a,2) + pow (b,2)); //Fem operacio hipotenusa 
  Serial.print (h);
  

}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
