//============================================================================
// Name        : helloWorld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : instance in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class B{
private:

public:
	B(int value){
		cout << "valor da classe B:" << value << endl;
	}
	void hello(){
		cout << "Hello my friend class B!" << endl;
	}
};
class C{
public:
	C(int value){
		cout << "valor da classe C:" << value << endl;
	}
	void hello(){
		cout << "Hello my friend class C!" << endl;
	}
};
class A{
private:

	int value;
	B *b;
	C c;
public:
	A(int value) : value(value), c(value){
		cout << "Iniciado o contrutor" << endl;
		b = new B(200);
		b->hello();

	}
};
;
int main() {
	A a(100);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
