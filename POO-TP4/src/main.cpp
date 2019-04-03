//============================================================================
// Name        : main.cpp
// Author      : Faris Ajeddig
// Version     :
// Copyright   :
// Description : TP4 POO UQAC
//============================================================================

#include <iostream>
#include <vector>
#include "Liste.h"

using namespace std;

int main() {

	int element[9] = {1, 2, 3,4};
	Liste<int> liste(3);
	Liste<int> L2(liste);

	Liste<int>& L3 = L2;
	liste.addElements(1);
	liste.addElements(3);
	liste.printNbElements();
	cout << "Hello World TP4" << endl;
	L2.printNbElements();
	L3.printNbElements();
	liste.printElements();
	liste.removeElements();

	// int test = liste.getElements(0);
	// cout << test << endl;

	int test = liste[0];
	// cout << liste[1];
	return 0;
}
