/*
 *  AUTOR:      Thiago Vilella
 *  YOUTUBE:    https://www.youtube.com/channel/UCpg7_v1Wtvp-XPj-vjh8igQ/featured?view_as=subscriber
 *  CURSO ARDUINO:  https://go.hotmart.com/W8213658G
 *  CURSO ROBOTICA: https://go.hotmart.com/C11197650W
 *  COMPRE:     https://www.arducore.com.br/
 *  SKETCH:     JarvisPro Exemplo
 *  DATA:     09/06/2015
*/

// INCLUSÃO DE BIBLIOTECAS
#include <JarvisPro.h>

// DEFINIÇÕES DE PINOS


// DEFINIÇÕES


#define DEBUG

// INSTANCIANDO OBJETOS

JarvisPro Jarvis(5); // PARA CONTROLE DE 5 RELES E HIGH PARA LIGAR O RELAY
//JarvisPro Jarvis(10,LOW); // PARA CONTROLE DE 10 RELES E LOW PARA LIGAR O RELAY


// DECLARAÇÃO DE FUNÇÕES


// DECLARAÇÃO DE VARIÁVEIS  


void setup() {
  Serial.begin(9600);
  
  Serial.println("Exemplo JarvisPro acionanado relay");  
  Jarvis.begin();
  
  #ifdef DEBUG
    Serial.println("Fim Setup");
  #endif  
}

void loop() {

  Jarvis.loopRele();
  
}

// IMPLEMENTO DE FUNÇÕES