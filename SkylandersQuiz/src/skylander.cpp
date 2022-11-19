#include <iostream>
#include "skylander.hpp"

using namespace std;

Skylander::Skylander(list<string> nom, Element elem, vector<Arme> a, unsigned int jeu, Stat st, string laHint, bool uniElem, bool vol, Serie s)
:nom{nom}, elem{elem}, arme{a}, jeu{jeu}, pointFort{st}, lastHint{laHint}, unitElement{uniElem}, vol{vol}, serie{s} {}

Skylander::Skylander(list<string> nom, Element elem, vector<Arme> a, unsigned int jeu, Stat st, string laHint, bool uniElem, bool vol)
:Skylander(nom, elem, a, jeu, st, laHint, uniElem, vol, Serie::Un) {}

Skylander::Skylander(list<string> nom, Element elem, vector<Arme> a, unsigned int jeu, Stat st, string laHint, bool uniElem, Serie s)
:Skylander(nom, elem, a, jeu, st, laHint, uniElem, false, s) {}

Skylander::Skylander(list<string> nom, Element elem, vector<Arme> a, unsigned int jeu, Stat st, string laHint, bool uniElem)
:Skylander(nom, elem, a, jeu, st, laHint, uniElem, false, Serie::Un) {}

bool Skylander::nomSky(string saisie) const{
	for(string s : nom)
		if(s==saisie)
			return true;
	return false;
}

void Skylander::afficherInfo() const{
	unsigned int cptNoms=0;
	cout << "\n\t";
	cout << nom.front() << endl;
	cout << "    -----------------------------------------------------" << endl;
	cout << "\tOrthographes acceptables (" << nom.size() << ") :" << endl;
	for (string s : nom){
		cout << "\t-\t" << s;
		cptNoms++;
		if(cptNoms>1 && (s!=nom.back() || nom.size()%2!=0)){
			cptNoms=0;
			cout << endl;
		}
	}
	cout << endl;
	cout << "\n\tÉlément : " << elem << endl
	<< "\tSérie : " << serie << endl
	<< "\tStatistique dominante : " << pointFort << endl
	<< "\tJeu d'origine : Skylanders ";
	switch(jeu){
		case 1:
			cout << "Spyro's Adventure" << endl;
			break;
		case 2:
			cout << "Giants" << endl;
			break;
		case 3:
			cout << "Swap Force" << endl;
			break;
		case 4:
			cout << "Trap Team" << endl;
			break;
		case 5:
			cout << "Superchargers" << endl;
			break;
		default:
			cout << "Imaginators" << endl;
			break;
	}
		cout << "    -----------------------------------------------------" << endl;
}

void Skylander::afficherInfoDetails() const{
	unsigned int cptArmes=0;
	afficherInfo();
	cout << "\tCaractéristiques armes :" << endl;
	for (Arme a : arme){
		cout << "\t-\t" << a;
		cptArmes++;
		if(cptArmes>1 && (a!=arme.back() || arme.size()%2!=0)){
			cptArmes=0;
			cout << endl;
		}
	}
	cout << "\n\n\tPeut voler : ";
	if(vol)
		cout << "Oui" << endl;
	else
		cout << "Non" << endl;
	
	cout << "\tNe fait qu'un avec son élément : ";
	if(unitElement)
		cout << "Oui" << endl;
	else
		cout << "Non" << endl;

	cout << "\n\tDernier indice : \"Je suis " << lastHint << ".\"" << endl;

	cout << "    -----------------------------------------------------\n" << endl;
}