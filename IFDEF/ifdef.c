#include <stdio.h>

#define DEBUG_MODE 1


#ifdef DEBUG_MODE
        printf("Modo debug ativado!\n");
#else
        printf("Modo debug desabilitado!\n");
#endif

int main(void){
     
        return 0;
}
