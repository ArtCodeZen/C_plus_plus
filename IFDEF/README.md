
# USANDO IFDEF C ou C++

## Exemplo do ifdef com o uso do define

* Com o uso de define o debug está setado ou configurado, sendo assim obrigado a executar como debug ativo
```c++
#include <iostream>
#include <stdio.h>

#define DEBUG_MODE          // debug ativo via código

using namespace std;


int main(void){

        #ifdef DEBUG_MODE
                printf("Modo debug ativado\n");
        #else
                printf("Modo debug desabilitado\n");
        #endif  
        return 0;
}

```

## Exemplo do ifdef ativar no modo compilação

* Com o uso de define comentado não funcionará dando o aviso debug desabilitado
* Para ativar no modo compilação use o seguinte parâmetro 
    > $ g++ -o ifdef -D DEBUG_MODE ifdef.cpp
* Execute o arquivo compilado
    > $ ./ifdef
* Saida da execução
* * 'Modo debug ativado'
```c++
#include <iostream>
#include <stdio.h>

//#define DEBUG_MODE          // debug ativo via código

using namespace std;


int main(void){

        #ifdef DEBUG_MODE
                printf("Modo debug ativado\n");
        #else
                printf("Modo debug desabilitado\n");
        #endif  
        return 0;
}

```




