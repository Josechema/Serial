/*****************************************************************
**                                                              **
**                       TÍTOL: Serial 2                        **
**  Copiar Hello world al monitor serie casa segon per liniea   **
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
Serial.println("Hello World!");     // Indica el text a mostrar en linia
delay(1000);           // Indica que es mostrara una linia cada segon
}



//*********************** FUNCIONS *******************************
