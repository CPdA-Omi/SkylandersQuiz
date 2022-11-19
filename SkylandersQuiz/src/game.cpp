#include <ctime>
#include "game.hpp"

using namespace std;

int game(Skylander* guest){
	bool indices[6]={false,false,false,false,false,false}; //elem, arme, pointFort, unitElement, vol, serie
	unsigned int cptIndices=0, nbIndicesMax=5+guest->arme.size(), randomNumber;
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
		if(guest->nomSky(saisie)){
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
				cout << "Je suis de l'élément " << guest->elem << '.' << endl;
				break;

			case 1:
				switch(guest->arme[cptArmes]){
					case Arme::Projectiles:
						cout << "J'attaque avec des Projectiles." << endl;
						break;

					case Arme::Zone:
						cout << "J'attaque sur une certaine Zone." << endl;
						break;

					case Arme::Feu:
					case Arme::Foudre:
					case Arme::Plasma:
						cout << "Mes attaques sont de " << guest->arme[cptArmes] << ".\n";
						break;

					case Arme::Solide:
					case Arme::Inconnu:
						cout << "Mes attaques sont de nature " << guest->arme[cptArmes];
						if(guest->arme[cptArmes]==Arme::Inconnu)
							cout << 'e';
						cout << ".\n";
						break;

					case Arme::Self:
						cout << "Je suis l'arme." << endl;
						break;

					case Arme::Poings:
						cout << "J'attaque avec mes Poings." << endl;
						break;

					case Arme::Epee:
					case Arme::Hache:
						cout << "J'attaque avec une " << guest->arme[cptArmes] << ".\n";
						break;

					case Arme::Bouclier:
					case Arme::Sceptre:
						cout << "J'attaque avec un " << guest->arme[cptArmes] << '.';
						break;

					case Arme::Marteaux:
						cout << "J'attaque avec un ou plusieurs Marteaux ou une Masse.";
						break;
					case Arme::Originale:
						cout << "J'ai une arme Peu Commune." << endl;
						break;
					default:
						cout << "???" << endl;
						break;
					}// switch(guest->arme[cptArmes])
				cptArmes++;

				break;

			case 2:
				cout << "J'ai de grandes compétences de " << guest->pointFort << '.' << endl;
				break;

			case 3:
				if(guest->unitElement)
					cout << "Je ne fais qu'un avec mon élément." << endl;
				else
					cout << "J'utilise mon élément pour combattre mais je ne suis pas lui." << endl;
				break;

			case 4:
				if(guest->vol)
					cout << "Je peux voler." << endl;
				else
					cout << "Je ne peux pas voler." << endl;
				break;

			case 5:
				cout << "Je suis un Skylander " << guest->serie << '.' << endl;
				break;

		}// switch(randomNumber)

		cout << "Qui suis-je ? ";
		getline(cin, saisie);
		if(guest->nomSky(saisie)){
			cout << "\nFélicitations !\nVous remportez ";
			if(saisie==guest->nom.front())
				cout << 50-(cptIndices-1)*facteuReduction << " points (dont " << (50-(cptIndices-1)*facteuReduction)-(50-cptIndices*facteuReduction)
				<< "pts de bonus d'orthographe parfaite)";
			else
				cout << 50-cptIndices*facteuReduction;
			cout << "\npour avoir trouvé " << guest->nom.front() << " grâce à " << cptIndices+1 << " indices." << endl;
			if(saisie==guest->nom.front())
				return 50-(cptIndices-1)*facteuReduction;
			return 50-cptIndices*facteuReduction;
		}

		cptIndices++;
		if(randomNumber!=1 || (randomNumber==1 && cptArmes==guest->arme.size()))
			indices[randomNumber]=!indices[randomNumber];
	}
	cout << "\nEnfin, je suis " << guest->lastHint << ".\nQui suis-je ?" << endl;
	getline(cin, saisie);
	if(guest->nomSky(saisie)){
		cout << "\nBravo.\nVous remportez ";
		if(saisie==guest->nom.front())
			cout << 50-(cptIndices-1)*facteuReduction << " points (dont " << (50-(cptIndices-1)*facteuReduction)-(50-cptIndices*facteuReduction)
			<< "pts de bonus d'orthographe parfaite)";
		else
			cout << 50-cptIndices*facteuReduction << "points";
		cout << "\npour avoir trouvé " << guest->nom.front() << " grâce à " << cptIndices+1 << " indices." << endl;
		if(saisie==guest->nom.front())
			return 50-(cptIndices-1)*facteuReduction;
		return 50-cptIndices*facteuReduction;
}
	else{
		cout << "\nDommage...\nVoici le profil du Skylander que vous cherchiez :" << endl;
		return 0;
	}
}