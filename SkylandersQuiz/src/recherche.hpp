#ifndef RECHERCHE_HPP
#define RECHERCHE_HPP
#include "skylander.hpp"

int rechercheMenu();
void recherche(std::vector<std::vector<Skylander*>> data);
void rechercheNom(std::vector<std::vector<Skylander*>> data);
void rechercheCritere(std::vector<std::vector<Skylander*>> data); //avec menu

void rechercheCriteresMultiples(std::vector<std::vector<Skylander*>> data); //avec menu
int multElem(std::vector<bool> elemRow, const std::string& in, const std::string& out);
int multArme(std::vector<bool> armeRow, const std::string& in, const std::string& out);
int multStat(std::vector<bool> statRow, const std::string& in, const std::string& out);
int multSerie(std::vector<bool> serieRow, const std::string& in, const std::string& out);
int algoRechercheCritMult(std::vector<std::vector<Skylander*>> data, std::vector<std::vector<bool>> lesBool, unsigned int unitElem, unsigned int vol, const std::string& skNom);
//unsigned int doublebitbool(unsigned int iBool);
//unsigned int multChoix(std::vector<std::vector<bool>> rows, int nbRow, const std::string& subject, const std::string& in, const std::string& out);

std::string afficherNomJeu(int nb);

#endif