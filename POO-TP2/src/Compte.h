#ifndef COMPTEH
#define COMPTEH
#include "Client.h"

class Compte {
	protected:
		Client holder;
		long long amount;
		string type; // Vaut soit EPARGNE soit CHEQUE

	public://TODO est-ce qu'il faut déclarer les constructeurs et destructeur.
		Compte(Client client, long long solde, string typ);
		void print_amount();
		void make_deposit(long long depot);
		void make_withdraw(long long withdraw);
		Client getClient();
		long long getAmount();
		string getType();
		void setType(string type);
		void printAccount();
		~Compte();
};
#endif
