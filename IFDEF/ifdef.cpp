#include <iostream>
#include <stdio.h>

//#define DEBUG_MODE 
using namespace std;


int main(void){

	#ifdef DEBUG_MODE
		printf("Modo debug ativado\n");
	#else
		printf("Modo debug desabilitado\n");
	#endif	
	return 0;
}
