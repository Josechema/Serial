/*****************************************************************
**                                                              **
**                       TÍTOL: Estructura de control if        **
**                 Titol: Estrucutra de control if              **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:21/02/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************

int tempAigua = 101;            // Dada variable 

//*********************** SETUP **********************************

void setup() {           // configura el final de la salida
Serial.begin(9600);     // Monitor serie a 9600 badis

if ( tempAigua > 100)  // si la vaiable tempAigua es superior a 100
  {
  Serial.print("Aigua supera els 100C, esta bullint!"); 
                                         // imprimeix en pantalla
  }
}

//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
