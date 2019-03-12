/*
 * CompteCheque.cpp
 *
 *  Created on: 11 févr. 2019
 *      Author: faris
 */



#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Compte.h"
#include "CompteCheque.h"

using namespace std;

CompteCheque::CompteCheque(Client client, long long solde, long long decouvert): Compte(client,solde, "CHEQUE"){
//	Compte(client, solde);
	overdraft = decouvert;
}

long long CompteCheque::getOverdraft(){
	return overdraft;
}

void CompteCheque::printAccount(){
	cout << "Montant disponible : " << this->amount << "\n";
	cout << "Découvert autorisé : " << overdraft << "\n";
}

CompteCheque::~CompteCheque(){
	cout << "Destructeur du Compte Chéque appelé.\n";
}
