//============================================================================
// Name        : main.cpp
// Author      : Faris Ajeddig
// Version     :
// Copyright   :
// Description : TP3 POO UQAC
//============================================================================

#include <iostream>
#include <vector>
#include "Personne.h"
#include "Personne.cpp"
#include "Employe.h"
#include "Employe.cpp"
#include "Etudiant.h"
#include "Etudiant.cpp"
#include "Stagiaire.h"
#include "Stagiaire.cpp"

using namespace std;

int main() {
	vector <Personne*> personnes;

	personnes.push_back(new Etudiant("Jane", "Doe", "Paris", 7486468751, "CEGEP", "Kiné"));
	personnes.push_back(new Etudiant("Pierre", "Pbl", "Chicoutimi", 5467845315, "Laval", "Langues étrangères"));
	personnes.push_back(new Etudiant("Victor", "Thr", "Quebec", 4584632798, "UQAM", "MathInfo"));
	personnes.push_back(new Etudiant("Pierre", "Jean", "France", 8794654987, "UQAC", "Psycho"));
	personnes.push_back(new Employe("Faris", "Ajeddig", "Evry", 4987213879, 4215, "Chef de projet"));
	personnes.push_back(new Employe("Bapt", "Sald", "Jonquière", 5648787951, 1650, "Vendeur"));
	personnes.push_back(new Employe("Michael", "Porter", "Montréal", 6580801907, 1498, "Commercial"));
	personnes.push_back(new Employe("Raphy", "Drut", "Rosny", 6580801909, 12475, "Directeur commercial"));
	personnes.push_back(new Stagiaire("Thomas", "Levdi", "NY", 7896578894, "ENSIIE", "Diplôme d'ingénieur", 1250, "Stagiaire webdesign", Employe("Fabien", "1", "Evry", 4987213879, 4215, "Chef de projet")));
	personnes.push_back(new Stagiaire("Sam", "Muel", "SF", 7845147854, "X", "Diplôme d'ingénieur", 1250, "Stagiaire marketing", Employe("Cyril", "1", "Evry", 4987213879, 4215, "Lead Developper")));

	for(int i=0 ; i<personnes.size() ;i++){
		personnes[i]->print();
		// cout << personnes[i]->statut_d_emploi() << endl;
		delete personnes[i];
		personnes[i]=0 ;
	}

	return 0;
}
