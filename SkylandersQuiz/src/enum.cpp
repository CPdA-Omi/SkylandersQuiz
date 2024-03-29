#include "enum.hpp"

using namespace std;

ostream& operator<<(ostream& os, const Serie& s){

	switch (s){
		case Serie::Un:
			os << "Série 1";
			break;
		case Serie::Deux:
			os << "Série 2";
			break;
		case Serie::Trois:
			os << "Série 3";
			break;
		case Serie::Quatre:
			os << "Série 4";
			break;
		case Serie::Giant:
			os << "Giant";
			break;
		case Serie::Lightcore:
			os << "Lightcore";
			break;
		case Serie::SwFc:
			os << "Swap Force";
			break;
		case Serie::TrTm:
			os << "Trap Team";
			break;
		case Serie::Mini:
			os << "Mini";
			break;
		case Serie::Eons:
			os << "Eon's Elite";
			break;
		case Serie::Supercharger:
			os << "Supercharger";
			break;
		case Serie::Sensei:
			os << "Sensei";
			break;
		case Serie::Imaginator:
			os << "Imaginator";
			break;
		default:
			os << "???";
			break;
	}// switch (t)
	return os;

}// operator Serie

ostream& operator<<(ostream& os, const Element& elem){

	switch (elem){
		case Element::Magie:
			os << "Magie";
			break;
		case Element::Terre:
			os << "Terre";
			break;
		case Element::Eau:
			os << "Eau";
			break;
		case Element::Feu:
			os << "Feu";
			break;
		case Element::Tech:
			os << "Tech";
			break;
		case Element::MoVi:
			os << "Mort-Vivant";
			break;
		case Element::Air:
			os << "Air";
			break;
		case Element::Vie:
			os << "Vie";
			break;
		case Element::Lum:
			os << "Lumière";
			break;
		case Element::Ten:
			os << "Ténèbres";
			break;
		default:
			os << "???";
			break;
	}// switch (elem)
	return os;

}// operator Element

std::ostream& operator<<(std::ostream& os, const Weapon& a){

	switch(a){
		case Weapon::Self:
			os << "Moi-même";
			break;
		case Weapon::Poings:
			os << "Poings";
			break;
		case Weapon::Epee:
			os << "Épée";
			break;
		case Weapon::Bouclier:
			os << "Bouclier";
			break;
		case Weapon::Hache:
			os << "Hache";
			break;
		case Weapon::Marteaux:
			os << "Marteaux/Masse";
			break;
		case Weapon::Sceptre:
			os << "Sceptre";
			break;
		case Weapon::Originale:
			os << "Originale";
			break;
		case Weapon::Projectiles:
			os << "Projectiles";
			break;
		case Weapon::Zone:
			os << "Zone";
			break;
		case Weapon::Feu:
			os << "Feu";
			break;
		case Weapon::Foudre:
			os << "Foudre";
			break;
		case Weapon::Plasma:
			os << "Plasma";
			break;
		case Weapon::Solide:
			os << "Solide";
			break;
		case Weapon::Inconnu:
			os << "Inconnu";
			break;
		default:
			os << "???";
			break;
	}// switch(a)
	return os;

}// operator Weapon

ostream& operator<<(ostream& os, const Stat& st){

	switch (st){
		case Stat::Force:
			os << "Force";
			break;
		case Stat::Defense:
			os << "Défense";
			break;
		case Stat::Agilite:
			os << "Agilité";
			break;
		case Stat::Chance:
			os << "Chance";
			break;
		default:
			os << "???";
			break;
	}// switch (st)
	return os;

}// operator Stat