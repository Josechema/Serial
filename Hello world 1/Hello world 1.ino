/*****************************************************************
**                                                              **
**                       TÍTOL: Serial_1                        **
**         Titol: Imprimir Hello World al monitor               **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:30/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup()                // Executa una vegada 
{
  Serial.begin(9600);       // fem servir la llibraria serial de  9600 bps
  Serial.println("Hello world!"); // copia Hello world! al monitor
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa

}



//*********************** FUNCIONS *******************************
