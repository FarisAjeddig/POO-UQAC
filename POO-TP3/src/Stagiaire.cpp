#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Stagiaire.h"
#include "Etudiant.h"
#include "Employe.h"
#include "Personne.h"

using namespace std;

Stagiaire::Stagiaire(string prenom, string nom, string place, long long number, string scool, string prog, float salar, string post, Employe tutor)
:Personne(prenom, nom, place, number),
Etudiant(prenom, nom, place, number, scool, prog),
Employe(prenom, nom, place, number, salar, post), internshipTutor(tutor){
	// this->firstName = prenom;
	// this->lastName = nom;
	// this->address = place;
	// this->phoneNumber = number;
	// this->school = scool;
	// this->program = prog;
	// this->position = post;
	// this->salary = salar;
	// this->internshipTutor = tutor;
}

Employe Stagiaire::getInternshipTutor(){
	 return internshipTutor;
}

void Stagiaire::setInternshipTutor(Employe tutor){
  this->internshipTutor = tutor;
}

string Stagiaire::statut_d_emploi(){
  return this->WORKER;
}

void Stagiaire::print(){
	this->Personne::print();
	cout << this->school << " " << this->program << " " << this->position << " " << this->salary << "€ , Tutor:" << internshipTutor.getFirstName() << endl;
}

Stagiaire::~Stagiaire(){
	// cout << "Appel du destructeur pour le stagiaire " << this->firstName << " " << this->lastName << endl;
}
