#ifndef SKYLANDER_HPP
#define SKYLANDER_HPP
#include <vector>
#include <list>
#include "enum.hpp"

class Skylander{
private:
	std::list<std::string> nom;
	Element elem;
	std::vector<Arme> arme;
	unsigned int jeu;
	Stat pointFort;
	std::string lastHint;
	bool unitElement;
	bool vol;
	Serie serie;
public:
	Skylander(std::list<std::string> nom, Element elem, std::vector<Arme> a, unsigned int jeu, Stat st, std::string laHint, bool uniElem, bool vol, Serie s);
	Skylander(std::list<std::string> nom, Element elem, std::vector<Arme> a, unsigned int jeu, Stat st, std::string laHint, bool uniElem, bool vol);
	Skylander(std::list<std::string> nom, Element elem, std::vector<Arme> a, unsigned int jeu, Stat st, std::string laHint, bool uniElem, Serie s);
	Skylander(std::list<std::string> nom, Element elem, std::vector<Arme> a, unsigned int jeu, Stat st, std::string laHint, bool uniElem);

	bool nomSky(std::string saisie) const;
	void afficherInfo() const;
	void afficherInfoDetails() const;
};

#endif
