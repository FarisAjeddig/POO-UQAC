#ifndef EMPLOYEH
#define EMPLOYEH
#include "Personne.h"

class Employe: public virtual Personne {
	protected:
		float salary;
		string position;

	public:
		Employe(string prenom, string nom, string place, long long number, float salar, string post);
		float getSalary();
		void setSalary(float salar);
		string getPosition();
		void setPosition(string post);
		Employe operator=(Employe);
		virtual string statut_d_emploi();
		virtual void print();
		virtual ~Employe();
};



#endif
