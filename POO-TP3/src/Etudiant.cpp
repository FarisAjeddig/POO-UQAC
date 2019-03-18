#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Etudiant.h"
using namespace std;

Etudiant::Etudiant(string prenom, string nom, string place, long long number, string scool, string prog):Personne(prenom, nom, place, number){
  school = scool;
  program = prog;
}

string Etudiant::getSchool(){
  return school;
}

void Etudiant::setSchool(string scool){
  school = scool;
}

string Etudiant::getProgram(){
  return program;
}

void Etudiant::setProgram(string prog){
  program = prog;
}

string Etudiant::statut_d_emploi(){
    return Personne::UNEMPLOYED;
}

void Etudiant::print(){
  this->Personne::print();
  cout << this->school << ", " << this->program << endl;
}

Etudiant::~Etudiant(){
  // cout << "Appel du destructeur pour " << this->lastName << " " << this->firstName << endl;
}
