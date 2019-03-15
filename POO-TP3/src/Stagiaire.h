#ifndef STAGIAIREH
#define STAGIAIREH
#include "Etudiant.h"
#include "Employe.h"

class Stagiaire : public Etudiant, public Employe {
  private:
    Employe internshipTutor;
  public:
    Stagiaire(string prenom, string nom, string place, long long number, string scool, string prog, string post, string salar, Employe tutor);
    Employe getIntershipTutor();
    void setInternshipTutor(Employe tutor);
    string statut_d_emploi();
    ~Stagiaire();
};
#endif
