//============================================================================
// Name        : FunctionPointer.cpp
// Author      : artcodezen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

// Definindo um tipo de ponteiro para função
typedef void (*FunctionPointer)();

// Funções que serão usadas como callbacks
void sayHello() {
    std::cout << "Olá!" << std::endl;
}

void sayGoodbye() {
    std::cout << "Tchau!" << std::endl;
}

// Função que recebe um ponteiro para função como argumento e o chama
void callFunction(FunctionPointer func) {
    func();  // Chama a função apontada pelo ponteiro
}

int main() {
    FunctionPointer funcPtr;

    funcPtr = sayHello;
    callFunction(funcPtr);  // Chama sayHello()

    funcPtr = sayGoodbye;
    callFunction(funcPtr);  // Chama sayGoodbye()

    return 0;
}
