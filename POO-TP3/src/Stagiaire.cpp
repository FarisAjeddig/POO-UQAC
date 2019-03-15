#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Stagiaire.h"

using namespace std;

Stagiaire::Stagiaire(string prenom, string nom, string place, long long number, string scool, string prog, string post, string salar, Employe tutor)
:Etudiant(prenom, nom, place, number, scool, prog){
  internshipTutor = tutor;
  salary=salar;
  position=post;
}

Employe Stagiaire::getIntershipTutor(){
  return internshipTutor;
}

void Stagiaire::setInternshipTutor(Employe tutor){
  internshipTutor = tutor
}

string Stagiaire::statut_d_emploi(){
  return Personne::INTERSHIP;
}

Stagiaire::~Stagiaire(){
  return Personne::WORKER;
}
