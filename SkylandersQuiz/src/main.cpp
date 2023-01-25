#include <iostream>
#include <ctime>
#include "skyvectors.hpp"
#include "game.hpp"
#include "recherche.hpp"

using namespace std;

int menu(vector<bool> games){
	unsigned int menu;
	string in="\033[32mactifs\033[0m\t", out="\033[31minactifs\033[0m";
	cout << "\t+=======================================================+" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|                    \033[4;33mSkylanders Quiz\033[0m                    |" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t+-------------------------------------------------------+" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|\tPour l'instant, seuls les 136 des trois\t\t|" << endl
	<< "\t|\tpremiers jeux sont implémentés.\t\t\t|" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|\t0.\tSortir\t\t\t\t\t|" << endl
	<< "\t|\t\033[4m9.\tJouer\033[0m\t\t\t\t\t|" << endl
	<< "\t|\t\033[4m10.\tRechercher\033[0m\t\t\t\t|" << endl
	<< "\t|      -------------------------------------------      |" << endl
	<< "\t|\t1.\tSpyro's Adventure : \t";
	if(games[0])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t2.\tGiants : \t\t";
	if(games[1])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t3.\tSwap Force : \t\t";
	if(games[2])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t4.\tTrap Team : \t\t";
	if(games[3])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t5.\tSuperchargers : \t";
	if(games[4])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t6.\tImaginators : \t\t";
	if(games[5])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|\t7.\tMéchants : \t\t";
	if(games[6])
		cout << in;
	else
		cout << out;
	cout << "\t|" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t+=======================================================+" << endl;

	cin >> menu;
	return menu;
}

int main(){
	bool godMod=false;
	vector<bool> games {true, true, true, true, true, true, false};
	unsigned int cpt=0, var, retMen=9, parties=0, trouves=0, score=0, randomNumber;
	string sTrash;
	Skylander* guest;
	vector<vector<Skylander*>> lesSkylanders;

	srand(time(NULL));
	vector<Skylander*> spyros=spyrosAdventureInit();
	vector<Skylander*> giants=giantsInit();
	vector<Skylander*> swapForce=swapForceInit();

	lesSkylanders.push_back(spyros);
	lesSkylanders.push_back(giants);
	lesSkylanders.push_back(swapForce);

	while(retMen!=0){
		system("clear");
		cout << endl;
		if(godMod){
			cout << "\tgodMod=True" << endl;
		}
		if(score>0)
		cout << "\tScore : \033[33m" << score << "\033[0m"<< endl;
		else
			cout << "\tScore : " << score << endl;
		if(parties>0){
			if(parties>trouves)
				cout << "\tParties jouées : \033[31m" << parties << "\033[0m" << endl;
			else
				cout << "\tParties jouées : \033[32m" << parties << "\033[0m" << endl;
			cout << "\tSkylanders trouvés : \033[32m" << trouves << "\033[0m" << endl;
		}
		else
			cout << "\tParties jouées : " << parties << endl
			<< "\tSkylanders trouvés : " << trouves << endl;
		retMen=menu(games);
		if(retMen>0 && retMen<8){
			games[retMen-1]=!games[retMen-1];
		}
		else {
			switch(retMen){
				case 10:
					recherche(lesSkylanders);
					break;
				case 9:
					parties++;
					randomNumber=rand()%3;
					while(!games[randomNumber])
						randomNumber=rand()%3;

					switch(randomNumber){
						case 0:
							guest=spyros[rand()%spyros.size()];
							break;
						case 1:
							guest=giants[rand()%giants.size()];
							break;
						case 2:
							guest=swapForce[rand()%swapForce.size()];
							break;
					}// switch(randomNumber)

					if(godMod){
						cout << guest->getNames().front() << endl;
					}
					var=game(guest);
					score+=var;
					if(var!=0)
						trouves+=1;
					cout << endl;
					guest->displayInfos();
					cout << "\n\tAppuyez sur Entrée pour continuer... ";
					getline(cin, sTrash);
					break; // jouer
			}// switch(retMen)
		}
	}
	for(vector<Skylander*> lesSky : lesSkylanders){
		for(Skylander* sky : lesSky){
			if(godMod){
				cpt++;
				cout << "Delete\t" << cpt << " :\t" << sky->getNames().front() << endl;
			}
			delete sky;
		}
	}
	return 0;
}