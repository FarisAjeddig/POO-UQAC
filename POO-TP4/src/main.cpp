//============================================================================
// Name        : main.cpp
// Author      : Faris Ajeddig
// Version     :
// Copyright   :
// Description : TP4 POO UQAC
//============================================================================

#include <iostream>
#include <vector>
#include "Liste.h"

using namespace std;

int main(){
	// On demande à l'utilisateur le type de liste qu'il souhaite gérer.
	int type;
	while (type != 1 && type != 2 && type != 3 && type != 4 ){
		cout << "Quel type de variable souhaitez vous utiliser dans ce tableau ?" << endl;
		cout << "1 : Entier" << endl;
		cout << "2 : Nombre décimaux" << endl;
		cout << "3 : Chaînes de caractères" << endl;
		cout << "4 : Caractères simple\n" << endl;
		cin >> type;
		if (type != 1 && type != 2 && type != 3 && type != 4){
			cout << "Ce n'est pas une valeur valable, veuillez recommencer." << endl;
		}
	}

	// Selon sa réponse, on crée le bon type de structure et on gère ses demandes.
	switch (type) {
		case 1:{
			Liste<int> liste(10);
			int req;
			while (true){
				if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
					cout << "\n\nQue souhaitez vous faire ?\n" << endl;
					cout << "1 : Ajouter un élément à la liste" << endl;
					cout << "2 : Supprimer le dernier élément de la liste" << endl;
					cout << "3 : Accéder à un élément de la liste" << endl;
					cout << "4 : Afficher la liste" << endl;
					cout << "5 : Quitter le programme" << endl;
					cin >> req;
					if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
						cout << "Ce n'est pas une valeur valable, veuillez recommencer." << endl;
					}
				}

				switch (req){
					case 1:
						cout << "Veuillez entrer l'élément à ajouter à la liste." << endl;
						int element;
						cin >> element;
						liste.addElements(element);
						break;
					case 2:
						if (liste.getNbElements() > 0){
							liste.removeElements();
							cout << "Le dernier élément a bien été retiré." << endl;
						} else {
							cout << "Il n'y a pas d'élément dans la liste." << endl;
						}
						break;
					case 3:
						cout << "Entrez le numéro de l'élément auquel vous voulez accéder." << endl;
						cout << "Entre 0 et " << liste.getNbElements() - 1 << endl;
						int key;
						cin >> key;
						cout << "Voici l'élément que vous avez demandé : " << liste.getElements(key) << endl;
						break;
					case 4:
						liste.printElements();
						break;
					case 5:
						return 0;
						break;
					default:
						break;
				}
				req = 0;
			}
			break;
		}
		case 2:{
			Liste<float> liste(10);
			int req;
			while (true){
				if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
					cout << "\n\nQue souhaitez vous faire ?\n" << endl;
					cout << "1 : Ajouter un élément à la liste" << endl;
					cout << "2 : Supprimer le dernier élément de la liste" << endl;
					cout << "3 : Accéder à un élément de la liste" << endl;
					cout << "4 : Afficher la liste" << endl;
					cout << "5 : Quitter le programme" << endl;
					cin >> req;
					if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
						cout << "Ce n'est pas une valeur valable, veuillez recommencer." << endl;
					}
				}

				switch (req){
					case 1:
						cout << "Veuillez entrer l'élément à ajouter à la liste." << endl;
						float element;
						cin >> element;
						liste.addElements(element);
						break;
					case 2:
						if (liste.getNbElements() > 0){
							liste.removeElements();
							cout << "Le dernier élément a bien été retiré." << endl;
						} else {
							cout << "Il n'y a pas d'élément dans la liste." << endl;
						}
						break;
					case 3:
						cout << "Entrez le numéro de l'élément auquel vous voulez accéder." << endl;
						cout << "Entre 0 et " << liste.getNbElements() - 1 << endl;
						int key;
						cin >> key;
						cout << "Voici l'élément que vous avez demandé : " << liste.getElements(key) << endl;
						break;
					case 4:
						liste.printElements();
						break;
					case 5:
						return 0;
						break;
					default:
						break;
				}
				req = 0;
			}
			break;
		}
		case 3:{
			Liste<string> liste(10);
			int req;
			while (true){
				if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
					cout << "\n\nQue souhaitez vous faire ?\n" << endl;
					cout << "1 : Ajouter un élément à la liste" << endl;
					cout << "2 : Supprimer le dernier élément de la liste" << endl;
					cout << "3 : Accéder à un élément de la liste" << endl;
					cout << "4 : Afficher la liste" << endl;
					cout << "5 : Quitter le programme" << endl;
					cin >> req;
					if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
						cout << "Ce n'est pas une valeur valable, veuillez recommencer." << endl;
					}
				}

				switch (req){
					case 1:{
						cout << "Veuillez entrer l'élément à ajouter à la liste." << endl;
						string element;
						cin >> element;
						liste.addElements(element);
					}
						break;
					case 2:{
						if (liste.getNbElements() > 0){
							liste.removeElements();
							cout << "Le dernier élément a bien été retiré." << endl;
						} else {
							cout << "Il n'y a pas d'élément dans la liste." << endl;
						}
					}
						break;
					case 3:{
						cout << "Entrez le numéro de l'élément auquel vous voulez accéder." << endl;
						cout << "Entre 0 et " << liste.getNbElements() - 1 << endl;
						int key;
						cin >> key;
						cout << "Voici l'élément que vous avez demandé : " << liste.getElements(key) << endl;
					}
						break;
					case 4:{
						liste.printElements();
					}
						break;
					case 5:{
						return 0;
					}
						break;
					default:
						break;
				}
				req = 0;
			}
			break;
		}
		case 4:{
			Liste<char> liste(10);
			int req;
			while (true){
				if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
					cout << "\n\nQue souhaitez vous faire ?\n" << endl;
					cout << "1 : Ajouter un élément à la liste" << endl;
					cout << "2 : Supprimer le dernier élément de la liste" << endl;
					cout << "3 : Accéder à un élément de la liste" << endl;
					cout << "4 : Afficher la liste" << endl;
					cout << "5 : Quitter le programme" << endl;
					cin >> req;
					if (req != 1 && req != 2 && req != 3 && req != 4 && req != 5){
						cout << "Ce n'est pas une valeur valable, veuillez recommencer." << endl;
					}
				}

				switch (req){
					case 1:
						cout << "Veuillez entrer l'élément à ajouter à la liste." << endl;
						char element;
						cin >> element;
						liste.addElements(element);
						break;
					case 2:
						if (liste.getNbElements() > 0){
							liste.removeElements();
							cout << "Le dernier élément a bien été retiré." << endl;
						} else {
							cout << "Il n'y a pas d'élément dans la liste." << endl;
						}
						break;
					case 3:
						cout << "Entrez le numéro de l'élément auquel vous voulez accéder." << endl;
						cout << "Entre 0 et " << liste.getNbElements() - 1 << endl;
						int key;
						cin >> key;
						cout << "Voici l'élément que vous avez demandé : " << liste.getElements(key) << endl;
						break;
					case 4:
						liste.printElements();
						break;
					case 5:
						return 0;
						break;
					default:
						break;
				}
				req = 0;
			}
			break;
		}
	}

	// switch

	// int test = liste.getElements(0);
	// cout << liste << endl;

	// int test = liste[0];
	// cout << liste[1];
	return 0;
}
