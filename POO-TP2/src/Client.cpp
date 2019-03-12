/*
 * Client.cpp
 *
 *  Created on: 9 févr. 2019
 *      Author: faris
 */

#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Client.h"
#include "Date.h"
using namespace std;

Client::Client(){ // Constructeur sans paramètre, on ne peut pas créer de client sans ces infos.
			firstName="";
			lastName="";
			address="";
			phoneNumber=0000000000;
			birthDate=Date();
		}

Client::Client(string prenom, string nom, string place, long long number, Date birth){ // Surcharge du constructeur avec paramètre
	firstName = prenom;
	lastName = nom;
	address = place;
	phoneNumber = number;
	birthDate = birth;
}

void Client::print_date(){
	birthDate.afficher();
}

void Client::print_name(){
	cout << firstName << " " << lastName;
}

string Client::getFirstName(){
	return firstName;
}
string Client::getLastName(){
	return lastName;
}
string Client::getAddress(){
	return address;
}
long long Client::getPhoneNumber(){
	return phoneNumber;
}

Date Client::getBirthDate(){
	return birthDate;
}
