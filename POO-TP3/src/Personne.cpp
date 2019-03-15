#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Personne.h"
using namespace std;

Personne::Personne(){
			firstName="";
			lastName="";
			address="";
			phoneNumber=0000000000;
}

Personne::Personne(string prenom, string nom, string place, long long number){
	firstName = prenom;
	lastName = nom;
	address = place;
	phoneNumber = number;
}

string Personne::getAddress(){
	return address;
}

void Personne::setAddress(string address) {
	this->address = address;
}

string Personne::getFirstName(){
	return firstName;
}

void Personne::setFirstName(string firstName) {
	this->firstName = firstName;
}

string Personne::getLastName(){
	return lastName;
}

void Personne::setLastName(string lastName) {
	this->lastName = lastName;
}

long long Personne::getPhoneNumber(){
	return phoneNumber;
}

void Personne::setPhoneNumber(long long phoneNumber) {
	this->phoneNumber = phoneNumber;
}

Personne::~Personne(){
	cout << "Appel du destructeur pour " << this->lastName << " " << this->firstName << endl;
}
