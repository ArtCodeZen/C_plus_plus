//============================================================================
// Name        : PonteirConstructorCopy.cpp
// Author      : henrique
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

typedef struct Node{
	char *nome;
	int idade;
	Node(char* n = 0, int a = 0){
		nome = strdup(n);
		idade = a;
	}
	Node(const Node &n){
		nome = strdup(n.nome);
		idade = n.idade;

	}
}N, Nzinha;


int main() {


	Node node1("Henrique", 26);
	Node node2("Henry", 30);
	Nzinha node3(node2);
	cout << "!!!Hello World!!! - " << node3.nome<<endl; // prints !!!Hello World!!!


	char *myText = "Ola";
	char *myText2 = myText;
	int *x;
	int y = 100;
	x = &y;
	cout << *x << endl;

	return 0;
}
