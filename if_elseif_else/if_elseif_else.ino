/*****************************************************************
**                                                              **
**                       TÍTOL: if/ else if/ else               **
**                 Titol: utilitzar funcions de control         **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:20/02/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************
int tempAigua = 5;

//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);

  if ( tempAigua < 90)
  {
    Serial.print("No bull");
  }
  else if ( tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  }
  else if ( tempAigua == 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if ( tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  }
  else
  {
    Serial.print("Aigua encara no bull");
  }
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
