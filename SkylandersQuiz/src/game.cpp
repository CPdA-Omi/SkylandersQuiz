#include <ctime>
#include "game.hpp"

using namespace std;

int game(Skylander* guest){
	bool indices[6]={false,false,false,false,false,false}; //element, weapons, strengths, elentalBeast, flyingBeast, series
	unsigned int cptIndices=0, nbIndicesMax=5+guest->getWeapons().size(), randomNumber;
	size_t cptArmes=0;
	float facteuReduction=50/nbIndicesMax;
	char choix;
	string saisie;
	srand(time(NULL));

	cout << "\nSans indice, savez-vous qui cela peut-être (O/n) ? ";
	cin >> choix;
	cin.ignore();
	if(choix=='O' || choix=='o' || choix=='1'){
		cout << "Qui cela peut-il être ? ";
		getline(cin, saisie);
		if(guest->isNameMatches(saisie)){
			cout << "\nINCROYABLE ! DU PREMIER COUP !" << endl;
			return 100;
		}
	}
	while(cptIndices<nbIndicesMax){
		randomNumber=rand()%6;
		while(indices[randomNumber])
			randomNumber=rand()%6;
		cout << endl;

		switch(randomNumber){
			case 0:
				cout << "Je suis de l'élément " << guest->getElement() << '.' << endl;
				break;

			case 1:
				switch(guest->getGivenWeapon(cptArmes)){
					case Weapon::Projectiles:
						cout << "J'attaque avec des Projectiles." << endl;
						break;

					case Weapon::Zone:
						cout << "J'attaque sur une certaine Zone." << endl;
						break;

					case Weapon::Feu:
					case Weapon::Foudre:
					case Weapon::Plasma:
						cout << "Mes attaques sont de " << guest->getGivenWeapon(cptArmes) << ".\n";
						break;

					case Weapon::Solide:
					case Weapon::Inconnu:
						cout << "Mes attaques sont de nature " << guest->getGivenWeapon(cptArmes);
						if(guest->getGivenWeapon(cptArmes)==Weapon::Inconnu)
							cout << 'e';
						cout << ".\n";
						break;

					case Weapon::Self:
						cout << "Je suis l'arme." << endl;
						break;

					case Weapon::Poings:
						cout << "J'attaque avec mes Poings." << endl;
						break;

					case Weapon::Epee:
					case Weapon::Hache:
						cout << "J'attaque avec une " << guest->getGivenWeapon(cptArmes) << ".\n";
						break;

					case Weapon::Bouclier:
					case Weapon::Sceptre:
						cout << "J'attaque avec un " << guest->getGivenWeapon(cptArmes) << '.';
						break;

					case Weapon::Marteaux:
						cout << "J'attaque avec un ou plusieurs Marteaux ou une Masse.";
						break;
					case Weapon::Originale:
						cout << "J'ai une arme Peu Commune." << endl;
						break;
					default:
						cout << "???" << endl;
						break;
					}// switch(guest->getGivenWeapon(cptArmes))
				cptArmes++;

				break;

			case 2:
				cout << "J'ai de grandes compétences de " << guest->getStrength() << '.' << endl;
				break;

			case 3:
				if(guest->isMadeOfThemElement())
					cout << "Je ne fais qu'un avec mon élément." << endl;
				else
					cout << "J'utilise mon élément pour combattre mais je ne suis pas lui." << endl;
				break;

			case 4:
				if(guest->canFly())
					cout << "Je peux voler." << endl;
				else
					cout << "Je ne peux pas voler." << endl;
				break;

			case 5:
				cout << "Je suis un Skylander " << guest->getSeries() << '.' << endl;
				break;

		}// switch(randomNumber)

		cout << "Qui suis-je ? ";
		getline(cin, saisie);
		if(guest->isNameMatches(saisie)){
			cout << "\nFélicitations !\nVous remportez ";
			if(saisie==guest->getNames().front())
				cout << 50-(cptIndices-1)*facteuReduction << " points (dont " << (50-(cptIndices-1)*facteuReduction)-(50-cptIndices*facteuReduction)
				<< "pts de bonus d'orthographe parfaite)";
			else
				cout << 50-cptIndices*facteuReduction;
			cout << "\npour avoir trouvé " << guest->getNames().front() << " grâce à " << cptIndices+1 << " indices." << endl;
			if(saisie==guest->getNames().front())
				return 50-(cptIndices-1)*facteuReduction;
			return 50-cptIndices*facteuReduction;
		}

		cptIndices++;
		if(randomNumber!=1 || (randomNumber==1 && cptArmes==guest->getWeapons().size()))
			indices[randomNumber]=!indices[randomNumber];
	}
	cout << "\nEnfin, je suis " << guest->getLastHint() << ".\nQui suis-je ?" << endl;
	getline(cin, saisie);
	if(guest->isNameMatches(saisie)){
		cout << "\nBravo.\nVous remportez ";
		if(saisie==guest->getNames().front())
			cout << 50-(cptIndices-1)*facteuReduction << " points (dont " << (50-(cptIndices-1)*facteuReduction)-(50-cptIndices*facteuReduction)
			<< "pts de bonus d'orthographe parfaite)";
		else
			cout << 50-cptIndices*facteuReduction << "points";
		cout << "\npour avoir trouvé " << guest->getNames().front() << " grâce à " << cptIndices+1 << " indices." << endl;
		if(saisie==guest->getNames().front())
			return 50-(cptIndices-1)*facteuReduction;
		return 50-cptIndices*facteuReduction;
}
	else{
		cout << "\nDommage...\nVoici le profil du Skylander que vous cherchiez :" << endl;
		return 0;
	}
}