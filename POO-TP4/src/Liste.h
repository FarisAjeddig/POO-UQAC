using namespace std;

template <typename T>

class Liste{

  private:
     // elements est le tableau des éléments génériques de classe T.
     T *elements;
     // nbElements est le nombre d'éléments présents dans le tableau.
     int nbElements;
     // taille est la taille totale disponible dans le tableau. (Dans le cadre du TP, elle sera toujours égale à 10.)
     int taille;

  public:
    // Constructeur prenant en paramètre la taille seulement.
    Liste(int n){
      elements = new T [n];
      taille = n;
      nbElements = 0;
    }

    // Constructeur de recopie
    Liste(Liste<T> &liste){
      *elements = liste.getElements();
      nbElements = liste.getNbElements();
      taille = liste.getTaille();
    }

    // Affiche le nombre d'éléments
    void printNbElements(){
      cout << nbElements << endl;
    }

    // Ajoute un élément au tableau (à la fin du tableau.)
    void addElements(T value) {
    	elements[nbElements] = value;
      nbElements += 1;
  	}

    // Retire le dernier élément du tableau.
    void removeElements(){
      elements[nbElements-1] = NULL;
      nbElements -= 1;
    }

    // Renvoie le tableau entier.
    T getElements(){
      return *elements;
    }

    // Renvoie un élément en particulier en précisant son index dans le tableau.
    T getElements(int key){
      return elements[key];
    }

    // Renvoie la taille du tableau.
    int getTaille(){
      return taille;
    }

    // Renvoie le nombre d'éléments du tableau.
    int getNbElements(){
      return nbElements;
    }

    // Affiche l'ensemble des éléments du tableau avec leur type. (sous la forme key : value. Type : type.)
    void printElements () {
      cout << "key" << " : " << "value. Type : type" << endl;
         for ( int j = 0; j < nbElements; j++ ) {
            cout << j << " : " << elements[ j ] << ". Type: " << typeid(elements[ j ]).name() << endl;
    	   }
  	}

    // Déclaration de la surcharge de l'opérateur =
    Liste<T>& operator=(const Liste<T>& liste);

    // Déclaration de la surcharge de l'opérateur []
    Liste<T>& operator[](int key);

    // Destructeur
    ~Liste(){}
};

// Définition de la surcharge de l'opérateur =
template<class T>
Liste<T>& Liste<T>::operator=(const Liste<T>& liste){
  *elements = liste.getElements();
  taille = liste.getTaille();
  nbElements = liste.getNbElements();
	return (*this);
}

// Définition de la surcharge de l'opérateur []
template<class T>
Liste<T>& Liste<T>::operator[](int key){
  return (this->getElements(key));
}
