#ifndef CLIENTH
#define CLIENTH

#include "Date.h"
using namespace std;

class Client {
	protected:
		string firstName, lastName, address;
		long long phoneNumber;
		Date birthDate;

	public://TODO est-ce qu'il faut déclarer les constructeur.
		void print_date();
		void print_name();
		Client();
		Client(string prenom, string nom, string place, long long number, Date birth);
		string getFirstName();
		string getLastName();
		string getAddress();
		Date getBirthDate();
		long long getPhoneNumber();
};
#endif
