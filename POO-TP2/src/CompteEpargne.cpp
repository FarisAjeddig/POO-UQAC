/*
 * CompteEpargne.cpp
 *
 *  Created on: 11 févr. 2019
 *      Author: faris
 */

#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Compte.h"
#include "CompteEpargne.h"
using namespace std;

CompteEpargne::CompteEpargne(Client client, long long solde, float tauxInteret): Compte(client,solde, "EPARGNE"){
	interestRate = tauxInteret;
}

float CompteEpargne::getInterestRate(){
	return interestRate;
}

void CompteEpargne::printAccount(){
	cout << "Montant disponible : " << amount << "\n";
	cout << "Taux d'intérêt : " << interestRate << "\n";
}

CompteEpargne::~CompteEpargne(){
	cout << "Destructeur du Compte Epargne appelé.\n";
}
