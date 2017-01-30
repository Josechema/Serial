/*****************************************************************
**                                                              **
**                       TÍTOL: Serial 4                        **
**      Mostrar en pantalla les operacions a realitzar          **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:30/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup()                // executa una vegada 
{
  Serial.begin(9600);// fem servir la llibraria serial de  9600 bps
  Serial.println("Escull el numero de l'operacio que vols relaitzar"); 
  Serial.println("  1.  Comprovar numero de tarjeta de credit");
  Serial.println("  2.  Comprovar numero de compte bancari");
  Serial.println("  3.  Buscar un digit perdut de tarjeta de credit");
}


//*********************** LOOP ***********************************


void loop () {                      // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
