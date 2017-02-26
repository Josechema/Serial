/*****************************************************************
**                                                              **
**            TÍTOL: Estrucutra de control swich case           **
**                Titol: Exemple de Swich case                  **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:26/02/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************
int sensorReading = 2 ; // tenim la variable 2


//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);     // activem serie a 9600 bauds
  Serial.print ("the day is"); // sempre imprimirem( "the dayis")

  switch (sensorReading)// casos valor de la variable sensorReading
  {
    case 0:           // cas que sensorReading = 0
      Serial.println("dark"); // Mostrara en pantalla "dark"
      break;
    case 1:     // cas en que sensorReading = 1
      Serial.println("dim"); // mostrara en pantalla "dim"
      break;
    case 2: // en cas que sensorReading = 2
      Serial.println("medium"); // mostrara en pantalla "medium"
      break;
  }
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
