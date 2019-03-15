#ifndef ETUDIANTH
#define ETUDIANTH
#include "Personne.h"

class Etudiant:public Personne {
  private:
    string school;
    string program;

	public:
    Etudiant(string prenom, string nom, string place, long long number, string scool, string prog);
    string getSchool();
    void setSchool(string scool);
    string getProgram();
    void setProgram(string prog);
    string statut_d_emploi();
		~Etudiant();
};
#endif
