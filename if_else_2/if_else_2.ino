/*****************************************************************
**                                                              **
**                       TÍTOL: if / else                       **
**                Titol: Control amb if / else                  **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:22/02/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************

int tempAigua = 100;        // temperatura aigua 

//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600); // activa el monitor serie a 9600 baudis

  if ( tempAigua >= 100)   // cuan la tempAigua inferior a 100
  {
    Serial.print("Aigua bullint"); // en monitor
  }
 else                               // sino, 
  {
    Serial.print("Aigua encara no bull"); // en monitor aigua bull
  }
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
