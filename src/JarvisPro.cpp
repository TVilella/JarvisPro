#include "JarvisPro.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"

JarvisPro::JarvisPro (byte qtdRele, bool ligar){
	
	_qtdRele = qtdRele;
	_ligar = ligar;
	
	for( byte nP = 0 ; np < _qtdRele ; np++){
		
		pinMode (portasRele[nP], OUTPUT);
		
		digitalWrite (portasRele[nP], !_ligar);
		
	}
	
	
}

void JarvisPro::begin(){
	
	delay(10);
	
	while(!Serial){
		
		for (byte i=0; i<5 ; i++){
			
			digitalWrite(13,HIGH);
			delay(200);
			digitalWrite(13,LOW);
			delay(200);
		}
		
		for (byte i=0; i<5 ; i++){
			
			digitalWrite(13,HIGH);
			delay(1000);
			digitalWrite(13,LOW);
			delay(1000);
		}
		
		delay(5000);		
		
	}
	
}

void JarvisPro::loopRele(){
	if (Serial.available()) {

    char  comando = Serial.read();
    

    if (comando >= 65 && comando <= 127) {

      if ( comando >=  97  && comando < 97 + _qtdRele ) {

        if ( comando == 'a' ) digitalWrite(portasRele[0], !_ligar);
        if ( comando == 'b' ) digitalWrite(portasRele[1], !_ligar);
        if ( comando == 'c' ) digitalWrite(portasRele[2], !_ligar);
        if ( comando == 'd' ) digitalWrite(portasRele[3], !_ligar);
        if ( comando == 'e' ) digitalWrite(portasRele[4], !_ligar);
        if ( comando == 'f' ) digitalWrite(portasRele[5], !_ligar);
        if ( comando == 'g' ) digitalWrite(portasRele[6], !_ligar);
        if ( comando == 'h' ) digitalWrite(portasRele[7], !_ligar);
        if ( comando == 'i' ) digitalWrite(portasRele[8], !_ligar);
        if ( comando == 'j' ) digitalWrite(portasRele[9], !_ligar);
        if ( comando == 'k' ) digitalWrite(portasRele[10], !_ligar);
        if ( comando == 'l' ) digitalWrite(portasRele[11], !_ligar);
        if ( comando == 'm' ) digitalWrite(portasRele[12], !_ligar);
        if ( comando == 'n' ) digitalWrite(portasRele[13], !_ligar);
        if ( comando == 'o' ) digitalWrite(portasRele[14], !_ligar);
        if ( comando == 'p' ) digitalWrite(portasRele[15], !_ligar);
        if ( comando == 'q' ) digitalWrite(portasRele[16], !_ligar);
        if ( comando == 'r' ) digitalWrite(portasRele[17], !_ligar);

      } else if ( comando >=  65  && comando < 65 + _qtdRele ) {

        if ( comando == 'A' ) digitalWrite(portasRele[0], _ligar);
        if ( comando == 'B' ) digitalWrite(portasRele[1], _ligar);
        if ( comando == 'C' ) digitalWrite(portasRele[2], _ligar);
        if ( comando == 'D' ) digitalWrite(portasRele[3], _ligar);
        if ( comando == 'E' ) digitalWrite(portasRele[4], _ligar);
        if ( comando == 'F' ) digitalWrite(portasRele[5], _ligar);
        if ( comando == 'G' ) digitalWrite(portasRele[6], _ligar);
        if ( comando == 'H' ) digitalWrite(portasRele[7], _ligar);
        if ( comando == 'I' ) digitalWrite(portasRele[8], _ligar);
        if ( comando == 'J' ) digitalWrite(portasRele[9], _ligar);
        if ( comando == 'K' ) digitalWrite(portasRele[10], _ligar);
        if ( comando == 'L' ) digitalWrite(portasRele[11], _ligar);
        if ( comando == 'M' ) digitalWrite(portasRele[12], _ligar);
        if ( comando == 'N' ) digitalWrite(portasRele[13], _ligar);
        if ( comando == 'O' ) digitalWrite(portasRele[14], _ligar);
        if ( comando == 'P' ) digitalWrite(portasRele[15], _ligar);
        if ( comando == 'Q' ) digitalWrite(portasRele[16], _ligar);
        if ( comando == 'R' ) digitalWrite(portasRele[17], _ligar);

      } else if (comando == 'z') {
		  
		  for( byte nR = 0 ; nR < _qtdRele ; nR++){
			        digitalWrite(portasRele[nR], !_ligar);
		  }  

      } else if (comando == 'Z') {
		  
		  for( byte nR = 0 ; nR < _qtdRele ; nR++){
			        digitalWrite(portasRele[nR], _ligar);
		  }

      } else {
        Serial.println("Comando recebido fora da faixa programada1");
        delay(500);
        
      }

    }else {
        Serial.println("Comando recebido fora da faixa programada2");
        Serial.println(comando,DEC);
        delay(500);
    }
    
  }