/*
 * Compte.cpp
 *
 *  Created on: 10 févr. 2019
 *      Author: faris
 */

#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Client.h"
#include "Compte.h"
using namespace std;

Compte::Compte(Client client, long long solde, string typ){
	holder = client;
	amount = solde;
	type = typ;
}

void Compte::print_amount(){
	cout << "Montant disponible sur le compte : " << amount << " \n";
}

void Compte::make_deposit(long long depot){
	amount = amount + depot;
	print_amount();
}

void Compte::make_withdraw(long long withdraw){
	amount = amount - withdraw;
	print_amount();
}

long long Compte::getAmount(){
	return amount;
}

Client Compte::getClient(){
	return holder;
}

string Compte::getType(){
	return type;
}

void Compte::setType(string ty){
	type = ty;
}

void Compte::printAccount(){
	cout << "Montant disponible : " << amount;
}

Compte::~Compte(){
	cout << "Appel du destructeur du compte " << holder.getFirstName();
}
