/*****************************************************************
**                                                              **
**                       TÍTOL: Serial 3                        **
**  Copiar Hello world al monitor serie casa segon seguit       **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:30/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup()                // executa una vegada 
{
  Serial.begin(9600);// fem servir la llibraria serial de  9600 bps
}


//*********************** LOOP ***********************************


void loop () {                      // inicia el bucle del programa
Serial.print("Hello world!");     // copia Hello world! al monitor seguit
delay(1000);      //la copia de "Hello world" és realitza cada segon
}



//*********************** FUNCIONS *******************************
