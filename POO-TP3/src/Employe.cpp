#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Employe.h"
using namespace std;

Employe::Employe(string prenom, string nom, string place, long long number, float salar, string post):Personne(prenom, nom, place, number){
  // Appel du constructeur de la classe Personne
  salary = salar;
  position = post;
}

float Employe::getSalary(){
  return salary;
}

void Employe::setSalary(float salar){
  salary = salar;
}

string Employe::getPosition(){
  return position;
}

void Employe::setPosition(string post){
  position = post;
}

Employe Employe::operator=(Employe tutor){
	return *this;
}

string Employe::statut_d_emploi(){
  return Personne::WORKER;
}

void Employe::print(){
  this->Personne::print();
  cout << this->salary << "€, " << this->position << endl;
}

Employe::~Employe(){
  // this->~Personne();
}
