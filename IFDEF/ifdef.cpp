#include <iostream>
#include <stdio.h>

//#define DEBUG_MODE 0 

using namespace std;


int main(void){
    #ifdef ABCD
        std::cout << "ABCD está definida com valor: " << ABCD << std::endl;
    #else
        std::cout << "ABCD não está definida" << std::endl;
    #endif

    #if defined(DEBUG_MODE) && ABCD == 10
        std::cout << "ABCD é definida e seu valor é 10" << std::endl;
    #elif defined(ABCD) && ABCD == 20
        std::cout << "ABCD é definida e seu valor é 20" << std::endl;
    #else
        std::cout << "ABCD tem valor diferente de 10 ou 20" << std::endl;
    #endif
	
	return 0;
}
