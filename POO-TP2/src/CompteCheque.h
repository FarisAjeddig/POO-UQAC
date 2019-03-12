/*
 * CompteCheque.h
 *
 *  Created on: 11 févr. 2019
 *      Author: faris
 */

#ifndef SRC_COMPTECHEQUE_H_
#define SRC_COMPTECHEQUE_H_
#include "Compte.h"

class CompteCheque:public Compte {
	private:
		long long overdraft;

	public:
		CompteCheque(Client client, long long solde, long long decouvert);
		long long getOverdraft();
		void printAccount();
		~CompteCheque();
};



#endif /* SRC_COMPTECHEQUE_H_ */
