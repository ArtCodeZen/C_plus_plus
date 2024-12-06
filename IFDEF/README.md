
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

## Usando o #ifdef e o if com #parâmetro
* #ifdef apenas verifica define existe sim ou não
* #if verifica o valor parâmetro e compara
* modo compilação
  > $ g++ -o ifdef  -D DEBUG_MODE= -D ABCD=10 ifdef.cpp
```cpp
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

``` 

* Saida
    > ABCD está definida com valor: 10
    >ABCD é definida e seu valor é 10

  




