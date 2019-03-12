//============================================================================
// Name        : TP1-POO.cpp
// Author      : Faris Ajeddig
// Version     :
// Copyright   : 
// Description : Description d'un nombre complexe à l'aide d'une classe en C++
//============================================================================

#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class Complex {
	private:
		float real; // Partie réelle de notre nombre complexe
		float imag; // Partie imaginaire de notre nombre complexe

	public:
		Complex(){ // Constructeur sans paramètre
			real = 0;
			imag = 0;
		}

		Complex( float r, float i){ // Surcharge du constructeur avec paramètre
			real = r;
			imag = i;
		}

		void affiche(){ // TODO : Check si ça apparaît correctement avec des nombres négatifs !!
			if (real == 0 && imag != 0){
				cout << imag << "i." << endl;
			}
			else if (real == 0 && imag == 0){
				cout << "0" << endl;
			}
			else if (real != 0 && imag == 0){
				cout << real << endl;
			}
			else {
				cout << real << " + " << imag << "i." << endl;
			}
			cout << "La partie réelle de ce nombre complexe est " << real << " et sa partie imaginaire est " << imag << endl;
		}

		float argument(){
			float module = sqrt(pow(real, 2) + pow(imag, 2));

			float theta;

			if (module == 0){ // Nous évitons la division par 0 dans le cas ou le complexe est nul.
				cout << "Le nombre est nul, il n'y a donc pas d'argument ! (PS : on retourne quand m�me 0)" << endl;
				return module;
			}

			float cos = real / module; // cos(theta)
			float sin = imag / module; // sin(theta)

			theta = acos(cos); // Il y a deux possibilités ici : theta et -theta
			if (std::sin(theta) != sin){
				theta = -1*theta;// Si ça colle avec le sinus, c'est le bon, sinon, on retourne l'opposé.
			}

			if (theta < 0){// Comme le souhaite l'énoncé, on renvoit l'argument dans l'intervalle [0, 2PI]
				return theta + 2*M_PI;
			}
			else {
				return theta;
			}
		}

		Complex oppose(){
			return Complex(-real, -imag); // On utilise juste le constructeur pour renvoyer l'opposé du nombre.
		}

		Complex conjugue(){
			return Complex(real, -imag); // Pareil qu'au dessus.
		}

		Complex inverse(){
			if (real == 0 && imag == 0){
				cout << "Le nombre est nul, il n'a donc pas d'inverse.(attention, la fonction retourne le Complex 0.)" << endl;
				return Complex();
			}
			return Complex(real/(pow(real,2)+pow(imag,2)), -1*imag/(pow(real,2)+pow(imag,2)));
		}

		Complex somme(Complex c){
			return Complex(real + c.real, imag + c.imag);
		}

		Complex difference(Complex c){
			return Complex(real - c.real, imag - c.imag);
		}

		Complex produit(Complex c){
			return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
		}

		Complex quotient(Complex c){
			if (c.real == 0 && c.imag == 0){
				cout << "Le complexe étant nul, on ne peut pas faire de quotient ici." << endl;
				return Complex();
			}
			return produit(c.inverse());
		}
};


int main() {
//	Complex c1 = Complex(2,3);
//	Complex c2 = Complex(-2,0);
//	Complex c3 = Complex();

//	c1.affiche();
//	c2.affiche();
//	c3.affiche();

//	cout << c1.argument() << endl;
//	cout << c2.argument() << endl;
//	cout << c3.argument() << endl;
//
//	c1.oppose().affiche();
//	c2.oppose().affiche();
//	c3.oppose().affiche();
//
//	c1.conjugue().affiche();
//	c2.conjugue().affiche();
//	c3.conjugue().affiche();
//
//	c1.inverse().affiche();
//	c2.inverse().affiche();
//	c3.inverse().affiche();
//
//	c1.somme(c2).affiche();
//	c2.difference(c1).affiche();
//	c1.produit(c2).affiche();
//	c1.quotient(c3).affiche();
//	c1.quotient(c2).affiche();

	return 0;
}
