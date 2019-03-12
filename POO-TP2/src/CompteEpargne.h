/*
 * CompteEpargne.h
 *
 *  Created on: 11 févr. 2019
 *      Author: faris
 */

#ifndef SRC_COMPTEEPARGNE_H_
#define SRC_COMPTEEPARGNE_H_
#include "Compte.h"

class CompteEpargne:public Compte {
	private:
		float interestRate;

	public:
		CompteEpargne(Client client, long long solde, float tauxInteret);
		float getInterestRate();
		void printAccount();
		~CompteEpargne();
};


#endif /* SRC_COMPTEEPARGNE_H_ */
