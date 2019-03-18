#ifndef STAGIAIREH
#define STAGIAIREH
#include "Etudiant.h"
#include "Employe.h"
#include "Personne.h"

using namespace std;


class Stagiaire : public Employe, public Etudiant {
  private:
    Employe internshipTutor;
  public:
    Stagiaire(string prenom, string nom, string place, long long number, string scool, string prog, float salar, string post, Employe tutor);
    Employe getInternshipTutor();
    void setInternshipTutor(Employe tutor);
    string statut_d_emploi();
    void print();
    virtual ~Stagiaire();
};
#endif
