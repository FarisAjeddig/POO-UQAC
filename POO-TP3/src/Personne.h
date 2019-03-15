#ifndef PERSONNEH
#define PERSONNEH

using namespace std;

class Personne {
	protected:
		string firstName, lastName, address;
		long long phoneNumber;
		const string WORKER = "Travailleur";
		const string UNEMPLOYED = "Sans emploi";

	public:
		void print_name();
		Personne();
		Personne(string prenom, string nom, string place, long long number);
		string getAddress();
		void setAddress(string address);
		string getFirstName();
		void setFirstName(string firstName);
		string getLastName();
		void setLastName(string lastName);
		long long getPhoneNumber();
		void setPhoneNumber(long long phoneNumber);
		virtual string statut_d_emploi() = 0;//TODO : rendre cette fonction virtuelle
		~Personne();
};

#endif
