/*  ----------------------------------------------------------------
    http://www.prometec.net/nrf2401
    Prog_79_1_Emisor
    
    Programa para transmitir strings mediante radios NRF2401
--------------------------------------------------------------------  
*/

#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <SPI.h>



char msg[55]="Prometec.net.\n" ;                             // Array a transmitir
RF24 radio(9,10);                        // Creamos un objeto radio del tipo RF2$
const uint64_t pipe = 0xE8E8F0F0E1LL;    // Usamos este canal

void setup(void){
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(pipe);}          // Abrir para escribir
 
void loop(void)
{
    radio.write(msg, 55);
    
}
