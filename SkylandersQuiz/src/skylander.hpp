#ifndef SKYLANDER_HPP
#define SKYLANDER_HPP
#include <vector>
#include <list>
#include "enum.hpp"

class Skylander{
private:
	std::list<std::string> names;
	Element element;
	std::vector<Weapon> weapons;
	unsigned int gameNumber;
	Stat strength;
	std::string lastHint;
	bool elementalBeast;
	bool flyingBeast;
	Serie series;
public:
	Skylander(std::list<std::string> names, Element element, std::vector<Weapon> weapons, unsigned int gameNumber, Stat strength, std::string lastHint, bool elementalBeast, bool flyingBeast, Serie series);
	Skylander(std::list<std::string> names, Element element, std::vector<Weapon> weapons, unsigned int gameNumber, Stat strength, std::string lastHint, bool elementalBeast, bool flyingBeast);
	Skylander(std::list<std::string> names, Element element, std::vector<Weapon> weapons, unsigned int gameNumber, Stat strength, std::string lastHint, bool elementalBeast, Serie series);
	Skylander(std::list<std::string> names, Element element, std::vector<Weapon> weapons, unsigned int gameNumber, Stat strength, std::string lastHint, bool elementalBeast);

	std::list<std::string> getNames() const;
	Element getElement() const;
	std::vector<Weapon> getWeapons() const;
	Weapon getGivenWeapon(size_t index) const;
	int getGameNumber() const;
	Stat getStrength() const;
	std::string getLastHint() const;
	bool isMadeOfThemElement() const;
	bool canFly() const;
	Serie getSeries() const;

	bool isNameMatches(std::string saisie) const;
	void displayInfos() const;
	void displayDetailedInfos() const;
};

#endif