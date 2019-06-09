#ifndef JARVISPRO_h
	#define JARVISPRO_h
	
	#include "Arduino.h"
	
	class JarvisPro{
  
	  public:
	  
		JarvisPro(byte qtdRele, bool ligar = HIGH );
		void begin();
		void loopRele();

	  private:
		byte _qtdRele;
		bool _ligar;
		byte portasRele[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

	  
	};
	
#endif