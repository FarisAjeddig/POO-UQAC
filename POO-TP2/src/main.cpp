/*
 * main.cpp
 *
 *  Created on: 11 févr. 2019
 *      Author: faris
 */

#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include "Client.h"
#include "Client.cpp"
#include "Compte.h"
#include "Compte.cpp"
#include "CompteCheque.h"
#include "CompteCheque.cpp"
#include "CompteEpargne.h"
#include "CompteEpargne.cpp"
#include "Date.h"
#include "Date.cpp"
using namespace std;

/*
 * Fonction permettant de créer un client, on l'utilise lorsque l'on crée un compte.
 */

Client client(){
	string firstName;
	string lastName;
	string address;
	long long phoneNumber;
	cout << "Prénom ?\n";
	cin >> firstName;
	cout << "Nom ?\n";
	cin >> lastName;
	cout << "Adresse ?\n";
	cin >> address;
	cout << "Numéro de téléphone (xxxxxxxxxx, ne mettez ni espace, ni tiret, ni parenthèses.)\n";
	cin >> phoneNumber;
	cout << "Date de naissance : \n";
	int d, m, y;
	cout << "Jour (DD)\n";
	cin >> d;
	cout << "Mois (MM)\n";
	cin >> m;
	cout << "Jour (AAAA)\n";
	cin >> y;
	Date date = Date(d,m,y);
	return Client(firstName.c_str(), lastName.c_str(), address.c_str(), phoneNumber, date);
}

/*
 * Il y a un problème lors de l'affichage de l'ensemble des comptes que je n'ai pas réussi à résoudre, qui me crée un segmentation fault.
 */

int main(int argc, char** argv){
	vector <Compte*> comptes;

	while (true){
		int req = 0;
		while (req != 1 && req != 2 && req != 4 && req != 3){
			cout << "Quelle action souhaitez-vous effectuer ?\n";
			cout << "1: Créer un client et son compte épargne\n";
			cout << "2: Créer un client et son compte chèque\n";
			cout << "3: Arrêtez le programme et afficher les comptes créés\n";
			cout << "4: Effectuer une opération sur un compte (Consulter, Retirer, Deposer)\n";
			cin >> req;
			if (req != 1 && req != 2 && req != 4 && req != 3){
				cout << "Ce n'est pas une valeure valable, veuillez recommencer.\n";
			}
		}
		switch (req){
			case 1: {
				Client cli = client();
				float interestRate = -1.0;
				while (interestRate < 0 || interestRate > 100){
					cout << "À quel taux d'intérêt souhaitez-vous mettre ce compte épargne ? (en pourcentage)\n";
					cout << "Exemple : 4.3\n";
					cin >> interestRate;
				}
				float amount;
				cout << "Quel montant doit-il y avoir sur le compte à l'ouverture ?\n";
				cin >> amount;
				comptes.push_back(new CompteEpargne(cli, amount, interestRate));
				cout << ".\n";
				cout << ".\n";
				cout << ".\n";
				cout << "Le compte a bien été créé\n\n";
				break;
			}
			case 2: {
				Client cli = client();
				long long overdraft = -1;
				while (overdraft < 0){
					cout << "Quel découvert autorisez-vous sur ce compte ? (donnez le en positif)\n";
					cout << "Exemple : 500\n";
					cin >> overdraft;
				}
				float amount;
				cout << "Quel montant doit-il y avoir sur le compte à l'ouverture ?\n";
				cin >> amount;
				comptes.push_back(new CompteCheque(cli , amount, overdraft));
				cout << ".\n";
				cout << ".\n";
				cout << ".\n";
				cout << "Le compte a bien été créé\n\n";
				break;
			}
			case 3:{
				cout << "Affichage des comptes : \n";
				for (unsigned int i=0; i<=comptes.size(); i++){
					if (comptes[i]->getType() == "EPARGNE"){
						cout << "Compte n°" << i << " : épargne.\n";
						comptes[i]->printAccount();
						delete(comptes[i]);
						comptes[i]=0;
					}
				}
				return 0;
				break;
			}
			case 4: {
				long long phoneNumber;
				cout << "Entrez le numéro de téléphone du propriètaire du compte.\n";
				cin >> phoneNumber;
				int n=0;
				for (unsigned int i=0; i<comptes.size(); i++){
					if (comptes[i]->getClient().getPhoneNumber() == phoneNumber){
						n = i;
						break;
					}
				}
				int rep=0;
				while (rep != 1 && rep != 2 && rep != 3 && rep != 4){
					cout << "Nous avons bien trouvé le compte. Quelle opération souhaitez-vous réaliser dessus ?\n";
					cout << "1: Effectuer un retrait\n";
					cout << "2: Effectuer un depôt\n";
					cout << "3: Consulter le solde\n";
					cout << "4: Revenir au menu\n";
					cin >> rep;
					if (rep != 1 && rep != 2 && rep != 3 && rep != 4){
						cout << "Ce n'est pas une valeure valable, veuillez recommencer.\n";
					}
				}
				switch(rep){
					case 1:
						long long retrait;
						cout << "Entrez le montant à retirer.\n";
						cout << "Exemple : 400.98\n";
						cin >> retrait;
						comptes[n]->make_withdraw(retrait);
						break;
					case 2:
						long long depot;
						cout << "Entrez le montant à déposer.\n";
						cout << "Exemple : 21.47\n";
						cin >> depot;
						comptes[n]->make_deposit(depot);
						break;
					case 3:
						comptes[n]->print_amount();
						break;
					case 4:
						break;
				}
				break;
			}
			default:{
				return 0;
				break;
			}
		}
	}
    return 0;
}
