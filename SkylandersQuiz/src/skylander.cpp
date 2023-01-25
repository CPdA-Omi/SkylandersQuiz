#include <iostream>
#include "skylander.hpp"

using namespace std;

Skylander::Skylander(list<string> names, Element element, vector<Weapon> weapons, unsigned int gameNumber, Stat strength, string lastHint, bool elementalBeast, bool flyingBeast, Serie series)
:names{names}, element{element}, weapons{weapons}, gameNumber{gameNumber}, strength{strength}, lastHint{lastHint}, elementalBeast{elementalBeast}, flyingBeast{flyingBeast}, series{series} {}

Skylander::Skylander(list<string> names, Element element, vector<Weapon> weapons, unsigned int gameNumber, Stat strength, string lastHint, bool elementalBeast, bool flyingBeast)
:Skylander(names, element, weapons, gameNumber, strength, lastHint, elementalBeast, flyingBeast, Serie::Un) {}

Skylander::Skylander(list<string> names, Element element, vector<Weapon> weapons, unsigned int gameNumber, Stat strength, string lastHint, bool elementalBeast, Serie series)
:Skylander(names, element, weapons, gameNumber, strength, lastHint, elementalBeast, false, series) {}

Skylander::Skylander(list<string> names, Element element, vector<Weapon> weapons, unsigned int gameNumber, Stat strength, string lastHint, bool elementalBeast)
:Skylander(names, element, weapons, gameNumber, strength, lastHint, elementalBeast, false, Serie::Un) {}

list<std::string> Skylander::getNames() const{ return names; }
Element Skylander::getElement() const{ return element; }
vector<Weapon> Skylander::getWeapons() const{ return weapons; }
Weapon Skylander::getGivenWeapon(size_t index) const{ return weapons[index]; }
int Skylander::getGameNumber() const{ return gameNumber; }
Stat Skylander::getStrength() const{ return strength; }
string Skylander::getLastHint() const{ return lastHint; }
bool Skylander::isMadeOfThemElement() const{return elementalBeast; }
bool Skylander::canFly() const{ return flyingBeast; }
Serie Skylander::getSeries() const{ return series; }

bool Skylander::isNameMatches(string saisie) const{
	for(string s : names)
		if(s==saisie)
			return true;
	return false;
}

void Skylander::displayInfos() const{
	unsigned int cptNoms=0;
	cout << "\n\t";
	cout << names.front() << endl;
	cout << "    -----------------------------------------------------" << endl;
	cout << "\tOrthographes acceptables (" << names.size() << ") :" << endl;
	for (string s : names){
		cout << "\t-\t" << s;
		cptNoms++;
		if(cptNoms>1 && (s!=names.back() || names.size()%2!=0)){
			cptNoms=0;
			cout << endl;
		}
	}
	cout << endl;
	cout << "\n\tÉlément : " << element << endl
	<< "\tSérie : " << series << endl
	<< "\tStatistique dominante : " << strength << endl
	<< "\tJeu d'origine : Skylanders ";
	switch(gameNumber){
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

void Skylander::displayDetailedInfos() const{
	unsigned int cptArmes=0;
	displayInfos();
	cout << "\tCaractéristiques armes :" << endl;
	for (Weapon w : weapons){
		cout << "\t-\t" << w;
		cptArmes++;
		if(cptArmes>1 && (w!=weapons.back() || weapons.size()%2!=0)){
			cptArmes=0;
			cout << endl;
		}
	}
	cout << "\n\n\tPeut voler : ";
	if(canFly())
		cout << "Oui" << endl;
	else
		cout << "Non" << endl;
	
	cout << "\tNe fait qu'un avec son élément : ";
	if(isMadeOfThemElement())
		cout << "Oui" << endl;
	else
		cout << "Non" << endl;

	cout << "\n\tDernier indice : \"Je suis " << lastHint << ".\"" << endl;

	cout << "    -----------------------------------------------------\n" << endl;
}