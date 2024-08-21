#include <iostream>
using namespace std;



int somar(int x, int y){
    return x + y;
}
int somarFloat(int x, float y){
    return x + y;
}
void imprime(void){
    cout << "imprimindo!" << endl;
}


int executar(int x, int y, int(*func)(int, int)){
    cout << "executou somar normal" << endl;
    
    return func(x,y);
}
int executar(int x, int y, int(*func)(int, float)){
    cout << "executou somar float" << endl;
    return func(x,y);
}
void executar(void(*func)()){
   for(int i = 0; i < 10; i++){
       func();
   }
   
}

int main(void){
    executar(&imprime); 
    return 0;
}


