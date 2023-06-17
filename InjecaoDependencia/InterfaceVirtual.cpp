// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base{
    public:
        virtual void funcaoVirtual() {
        // Implementação da função virtual na classe base
        cout << "Base";
    }
};

class Derivada : public Base {
public:
    void funcaoVirtual() override {
        cout << "Derivada";
    }
}; 
int main() {
    Base *base = new Derivada();
    base->funcaoVirtual();
    // Write C++ code here
    
}