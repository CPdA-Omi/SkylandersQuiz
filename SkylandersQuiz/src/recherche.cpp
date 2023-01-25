#include "recherche.hpp"

using namespace std;

int rechercheMenu(){
	unsigned int menu=6;
	cout << "\t+=======================================================+" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|                    \033[4;33mSkylanders Data\033[0m                    |" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t+-------------------------------------------------------+" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|\tPour l'instant, seuls les 136 des trois\t\t|" << endl
	<< "\t|\tpremiers jeux sont implémentés.\t\t\t|" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|\t0.\tRetour menu\t\t\t\t|" << endl
	<< "\t|      -------------------------------------------      |" << endl
	<< "\t|\t\tRechercher par :\t\t\t|" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t|\t1.\tNom\t\t\t\t\t|" << endl
	<< "\t|\t2.\tCritère\t\t\t\t\t|" << endl
	<< "\t|\t3.\tCritères multiples\t\t\t|" << endl
	<< "\t|\t\t\t\t\t\t\t|" << endl
	<< "\t+=======================================================+" << endl;
	
	cin >> menu;
	return menu;
}

void recherche(vector<vector<Skylander*>> data){
	unsigned int retMen=6;
	
	while(retMen!=0){
		system("clear");
		retMen=rechercheMenu();

		switch(retMen){
			case 1:
				rechercheNom(data);
				break;
			case 2:
				rechercheCritere(data);
				break;
			case 3:
				rechercheCriteresMultiples(data);
				break;
		}// switch(retMen)
	}
}

void rechercheNom(vector<vector<Skylander*>> data){
	unsigned int cpt=0, first, last;
	string sTrash, saisie;

	cout << "\nSaisir le nom d'un Skylander : ";
	cin.ignore();
	getline(cin, saisie);
	for(vector<Skylander*> skyVect : data){
		for(Skylander* sky : skyVect){
			for(string s : sky->getNames()){
				if(s==saisie){
					sky->displayDetailedInfos();
					if(cpt==0)
						first=sky->getGameNumber();
					last=sky->getGameNumber();
					cpt++;
					break;
				}
			}
		}
	}
	if(cpt>0){
		cout << "\t+=======================================================+\n\t|" << endl
		<< "\t|\tRésultats : " << cpt << endl;
		if(cpt>1 && first!=last){
			cout << "\t|\tPremière apparition : Skylanders " << displayGameName(first) << endl;
			cout << "\t|\tDernière apparition : Skylanders " << displayGameName(last) << endl;
		}
		cout << "\t|\n\t+=======================================================+" << endl;
	}
	else
		cout << "\n\tAucun résultat trouvé." << endl;

	cout << "\n\tAppuyez sur Entrée pour continuer... ";
	getline(cin, sTrash);
	cout << endl;
}

void rechercheCritere(vector<vector<Skylander*>> data){
	bool bVar;
	unsigned int var=0, cpt=0, menu=6;
	string sTrash;

	while(menu!=0){
		system("clear");
		cout << "\t+=======================================================+" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t|              Recherche à un seul critère              |" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t+-------------------------------------------------------+" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t|\t0.\tRetour menu\t\t\t\t|" << endl
		<< "\t|      -------------------------------------------      |" << endl
		<< "\t|\t\tRechercher par :\t\t\t|" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t|\t1.\tNom\t\t\t\t\t|" << endl
		<< "\t|\t2.\tÉlément\t\t\t\t\t|" << endl
		<< "\t|\t3.\tArmes\t\t\t\t\t|\t" << endl
		<< "\t|\t4.\tPoint Fort\t\t\t\t|" << endl
		<< "\t|\t5.\tRelation avec son élément\t\t|" << endl
		<< "\t|\t6.\tCapacité à voler\t\t\t|" << endl
		<< "\t|\t7.\tSerie\t\t\t\t\t|" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t+=======================================================+" << endl;
		
		cin >> menu;

		switch(menu){
			case 0:
				return;
				break;
			case 1:
				rechercheNom(data);
				return;
				break;
			case 2:
				while(var<1 || var>10){
					cout << "\tSélectionner un élément :" << endl
					<< "\t1:Magie    2:Terre    3:Eau    4:Feu" << endl
					<< "\t5:Tech    6:Mort-Vivant    7:Air" << endl
					<< "\t8:Vie    9:Lumière    10:Ténèbres\n" << endl;
					cin >> var;
				}
				system("clear");
				for(vector<Skylander*> skyVect : data){
					for(Skylander* sky : skyVect){
						if(sky->getElement()==Element(var-1)){
							sky->displayDetailedInfos();
							cpt++;
						}
					}
				}
				break;
			case 3:
				while(var<1 || var>15){
					cout << "\tSélectionnez une arme :" << endl
					<< "\t1:Moi-même  6:Marteaux/Masse    11:Feu" << endl
					<< "\t 2:Poings      7:Sceptre       12:Foudre" << endl
					<< "\t  3:Épée      8:Originale      13:Plasma" << endl
					<< "\t4:Bouclier   9:Projectiles     14:Solide" << endl
					<< "\t 5:Hache        10:Zone        15:Inconnu"<< endl;
					cin >> var;
				}
				system("clear");
				for(vector<Skylander*> skyVect : data){
					for(Skylander* sky : skyVect){
						for(Weapon w : sky->getWeapons()){
							if(w==Weapon(var-1)){
								sky->displayDetailedInfos();
								cpt++;
								break;
							}
						}
					}
				}
				break;
			case 4:
				while(var<1 || var>4){
					cout << "\tSélectionner un Point fort :" << endl
					<< "\t1:Force    2:Défense    3:Agilité    4:Chance" << endl;
					cin >> var;
				}
				system("clear");
				for(vector<Skylander*> skyVect : data){
					for(Skylander* sky : skyVect){
						if(sky->getStrength()==Stat(var-1)){
							sky->displayDetailedInfos();
							cpt++;
						}
					}
				}
				break;
			case 5:
				while(var<1 || var>2){
					cout << "\tLe Skylander choisi doit-il ne faire qu'un avec son élément ? :" << endl
					<< "\t1:Oui    2:Non" << endl;
					cin >> var;
				}
				system("clear");
				if(var==1)
					bVar=true;
				else
					bVar=false;
				for(vector<Skylander*> skyVect : data){
					for(Skylander* sky : skyVect){
						if(sky->isMadeOfThemElement()==bVar){
							sky->displayDetailedInfos();
							cpt++;
						}
					}
				}
				break;
			case 6:
				while(var<1 || var>2){
					cout << "\tLe Skylander choisi doit-il être capable de voler ? :" << endl
					<< "\t1:Oui    2:Non" << endl;
					cin >> var;
				}
				system("clear");
				if(var==1)
					bVar=true;
				else
					bVar=false;
				for(vector<Skylander*> skyVect : data){
					for(Skylander* sky : skyVect){
						if(sky->canFly()==bVar){
							sky->displayDetailedInfos();
							cpt++;
						}
					}
				}
				break;
			case 7:
				while(var<1 || var>12){
					cout << "\tSélectionnez une série de Skylanders :" << endl
					<< "\t1:Série 1        2:Série 2        3:Série 3        4:Série 4" << endl
					<< "\t5:Géant         6:Lightcore      7:Swap Force     8:Trap Team" << endl
					<< "\t9:Mini         10:Eon's Elite  11:Superchargers    12:Sensei" << endl;
					cin >> var;
				}
				system("clear");
				for(vector<Skylander*> skyVect : data){
					for(Skylander* sky : skyVect){
						if(sky->getSeries()==Serie(var-1)){
							sky->displayDetailedInfos();
							cpt++;
						}
					}
				}
				break;
		}// switch(menu)
		if(cpt>0){
			cout << "\t+=======================================================+\n\t|" << endl
			<< "\t|\tRésultats : " << cpt << "\n\t|\n\t+=======================================================+" << endl;
		}
		else
			cout << "\n\tAucun résultat trouvé." << endl;

		cout << "\n\tAppuyez sur Entrée pour continuer... ";
		cin.ignore();
		getline(cin, sTrash);
		cout << endl;
	}// while(menu!=0)
}

void rechercheCriteresMultiples(vector<vector<Skylander*>> data){
	vector<bool> elemRow (10, false);
	vector<bool> armeRow (15,false);
	vector<bool> statRow (4, false);
	vector<bool> serieRow (13, false);
	unsigned int menu=6, cptCrit=0, unitElem=0, vol=0, cptSk=0;
	int iVar;
	char cVar;
	string sVar, skNom="", in="\033[32mactifs\033[0m", out="\033[31minactifs\033[0m";

	while(menu!=0){
		system("clear");
		cout << "\t+=======================================================+" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t|           Recherche avec critères multiples           |" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t+-------------------------------------------------------+" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t|\t0.\tRetour menu\t\t\t\t|" << endl;
		if(cptCrit>0)
			cout << "\t|\t9.\tLancer la recherche (" << cptCrit << " critères)\t|" << endl;
		cout << "\t|      -------------------------------------------      |" << endl
		<< "\t|\t\tRechercher par :\t\t\t|" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t|\t1.\tNom\t\t\t\t\t|" << endl
		<< "\t|\t2.\tÉlément\t\t\t\t\t|" << endl
		<< "\t|\t3.\tArmes\t\t\t\t\t|\t" << endl
		<< "\t|\t4.\tPoint Fort\t\t\t\t|" << endl
		<< "\t|\t5.\tRelation avec son élément\t\t|" << endl
		<< "\t|\t6.\tCapacité à voler\t\t\t|" << endl
		<< "\t|\t7.\tSerie\t\t\t\t\t|" << endl
		<< "\t|\t\t\t\t\t\t\t|" << endl
		<< "\t+=======================================================+" << endl;
		
		cin >> menu;

		switch(menu){

			case 0:
				return;
				break;
			case 1:
				if(skNom==""){
					cptCrit++;
				}
				else{
					cout << "\nCritère de recherche actuelle : " << skNom
					<< "\nModifier (O/n) ? ";
					cin >> cVar;
					if(cVar!='O' && cVar!='o' && cVar!='1'){
						break;
					}
					cout << "\nSupprimer des critères de recherche (O/n) ? ";
					cin >> cVar;
					if(cVar=='O' || cVar=='o' || cVar=='1'){
						skNom="";
						cptCrit--;
						break;
					}
				}
				cout << "\nSaisir le nom d'un Skylander : ";
				cin.ignore();
				getline(cin, skNom);
				break;

			case 2:
				iVar=multElem(elemRow, in, out);
				if(iVar!=-1){
					elemRow[iVar]=!elemRow[iVar];
					if(elemRow[iVar]==true)
						cptCrit++;
					else
						cptCrit--;
				}				
				break;

			case 3:
				iVar=multArme(armeRow, in, out);
				if(iVar!=-1){
					armeRow[iVar]=!armeRow[iVar];
					if(armeRow[iVar]==true)
						cptCrit++;
					else
						cptCrit--;
				}
				break;

			case 4:
				iVar=multStat(statRow, in, out);
				if(iVar!=-1){
					elemRow[iVar]=!elemRow[iVar];
					if(elemRow[iVar]==true)
						cptCrit++;
					else
						cptCrit--;
				}
				break;

			case 5:
				iVar=-1;
				cout << "\nVous recherchez un Skylander étant unit avec son élément,\nnon ou peu importe (0 pour annuler) ? :" << endl;
				cout << "\n\t1:Unit\t\t";
				if(unitElem==1 || unitElem==3)
					cout << in;
				else
					cout << out;
				cout << "\n\t2:Non-unit\t";
				if(unitElem==2 || unitElem==3)
					cout << in;
				else
					cout << out;

				cout << endl;
				while(iVar<0 || iVar>2)
					cin >> iVar;

				if(iVar!=0){
					switch(iVar){
						case 1:
							if(unitElem==1 || unitElem==3){
								cptCrit--;
								unitElem--;
							}
							else{
								cptCrit++;
								unitElem++;
							}
							break;
						case 2:
							if(unitElem==2 || unitElem==3){
								cptCrit--;
								unitElem-=2;
							}
							else{
								cptCrit++;
								unitElem+=2;
							}
							break;
						}
					}
				break;

			case 6:
				iVar=-1;
				cout << "\nVous recherchez un Skylander étant capable de voler,\nnon ou peu importe (0 pour annuler) ? :" << endl;
				cout << "\n\t1:Oui\t";
				if(vol==1 || vol==3)
					cout << in;
				else
					cout << out;
				cout << "\n\t2:Non\t";
				if(vol==2 || vol==3)
					cout << in;
				else
					cout << out;

				cout << endl;
				while(iVar<0 || iVar>2)
					cin >> iVar;

				if(iVar!=0){
					switch(iVar){
						case 1:
							if(vol==1 || vol==3){
								cptCrit--;
								vol--;
							}
							else{
								cptCrit++;
								vol++;
							}
							break;
						case 2:
							if(vol==2 || vol==3){
								cptCrit--;
								vol-=2;
							}
							else{
								cptCrit++;
								vol+=2;
							}
							break;
						}
					}
				break;

			case 7:
				iVar=multSerie(serieRow, in, out);
				if(iVar!=-1){
					serieRow[iVar]=!serieRow[iVar];
					if(serieRow[iVar]==true)
						cptCrit++;
					else
						cptCrit--;
				}
				break;

		}// switch(menu)
	}// while(menu!=0)
}

int multElem(vector<bool> elemRow, const string& in, const string& out){
	unsigned int iVar=30;

	cout << "\nSaisir le numéro de l'élément pour l'ajouter/enlever\naux critères de recherche (0 pour annuler) :" << endl;
	cout << "\n\t1:Magie\t\t";
	if(elemRow[0])
		cout << in;
	else
		cout << out;
	cout << "\n\t2:Terre\t\t";
	if(elemRow[1])
		cout << in;
	else
		cout << out;
	cout << "\n\t3:Eau\t\t";
	if(elemRow[2])
		cout << in;
	else
		cout << out;
	cout << "\n\t4:Feu\t\t";
	if(elemRow[3])
		cout << in;
	else
		cout << out;
	cout << "\n\t5:Tech\t\t";
	if(elemRow[4])
		cout << in;
	else
		cout << out;
	cout << "\n\t6:Mort-Vivant\t";
	if(elemRow[5])
		cout << in;
	else
		cout << out;
	cout << "\n\t7:Air\t\t";
	if(elemRow[6])
		cout << in;
	else
		cout << out;
	cout << "\n\t8:Vie\t\t";
	if(elemRow[7])
		cout << in;
	else
		cout << out;
	cout << "\n\t9:Lumière\t";
	if(elemRow[8])
		cout << in;
	else
		cout << out;
	cout << "\n\t10:Ténèbres\t";
	if(elemRow[9])
		cout << in;
	else
		cout << out;

	cout << endl;
	while(iVar<0 || iVar>10)
		cin >> iVar;

	return iVar-1;
}

int multArme(vector<bool> armeRow, const string& in, const string& out){
	unsigned int iVar=30;

	cout << "\nSaisir le numéro d'une arme pour l'ajouter/enlever\naux critères de recherche (0 pour annuler) :" << endl;
	cout << "\n\t1:Soit-même\t\t";
	if(armeRow[0])
		cout << in;
	else
		cout << out;
	cout << "\n\t2:Poings\t\t";
	if(armeRow[1])
		cout << in;
	else
		cout << out;
	cout << "\n\t3:Épée\t\t\t";
	if(armeRow[2])
		cout << in;
	else
		cout << out;
	cout << "\n\t4:Bouclier\t\t";
	if(armeRow[3])
		cout << in;
	else
		cout << out;
	cout << "\n\t5:Hache\t\t\t";
	if(armeRow[4])
		cout << in;
	else
		cout << out;
	cout << "\n\t6:Marteau/Masse\t\t";
	if(armeRow[5])
		cout << in;
	else
		cout << out;
	cout << "\n\t7:Sceptre\t\t";
	if(armeRow[6])
		cout << in;
	else
		cout << out;
	cout << "\n\t8:Originale\t\t";
	if(armeRow[7])
		cout << in;
	else
		cout << out;
	cout << "\n\t9:Projectiles\t\t";
	if(armeRow[8])
		cout << in;
	else
		cout << out;
	cout << "\n\t10:Zone\t\t\t";
	if(armeRow[9])
		cout << in;
	else
		cout << out;
	cout << "\n\t11:Feu\t\t\t";
	if(armeRow[10])
		cout << in;
	else
		cout << out;
	cout << "\n\t12:Foudre\t\t";
	if(armeRow[11])
		cout << in;
	else
		cout << out;
	cout << "\n\t13:Plasma\t\t";
	if(armeRow[12])
		cout << in;
	else
		cout << out;
	cout << "\n\t14:Solide\t\t";
	if(armeRow[13])
		cout << in;
	else
		cout << out;
	cout << "\n\t15:Inconnu\t\t";
	if(armeRow[14])
		cout << in;
	else
		cout << out;

	cout << endl;
	while(iVar<0 || iVar>15)
		cin >> iVar;

	return iVar-1;
}

int multStat(vector<bool> statRow, const string& in, const string& out){
	unsigned int iVar=30;

	cout << "\nSaisir le numéro d'un Point Fort pour l'ajouter/enlever\naux critères de recherche (0 pour annuler) :" << endl;
	cout << "\n\t1:Force\t\t";
	if(statRow[0])
		cout << in;
	else
		cout << out;
	cout << "\n\t2:Défense\t";
	if(statRow[1])
		cout << in;
	else
		cout << out;
	cout << "\n\t3:Agilite\t";
	if(statRow[2])
		cout << in;
	else
		cout << out;
	cout << "\n\t4:Chance\t";
	if(statRow[3])
		cout << in;
	else
		cout << out;

	cout << endl;
	while(iVar<0 || iVar>15)
		cin >> iVar;

	return iVar-1;
}

int multSerie(vector<bool> serieRow, const string& in, const string& out){
	unsigned int iVar=30;

	cout << "\nSaisir le numéro d'une Série pour l'ajouter/enlever\naux critères de recherche (0 pour annuler) :" << endl;
	cout << "\n\t1:Série 1\t\t";
	if(serieRow[0])
		cout << in;
	else
		cout << out;
	cout << "\n\t2:Série 2\t\t";
	if(serieRow[1])
		cout << in;
	else
		cout << out;
	cout << "\n\t3:Série 3\t\t";
	if(serieRow[2])
		cout << in;
	else
		cout << out;
	cout << "\n\t4:Série 4\t\t";
	if(serieRow[3])
		cout << in;
	else
		cout << out;
	cout << "\n\t5:Géant\t\t\t";
	if(serieRow[4])
		cout << in;
	else
		cout << out;
	cout << "\n\t6:Lightcore\t\t";
	if(serieRow[5])
		cout << in;
	else
		cout << out;
	cout << "\n\t7:Swap Force\t\t";
	if(serieRow[6])
		cout << in;
	else
		cout << out;
	cout << "\n\t8:Trap Team\t\t";
	if(serieRow[7])
		cout << in;
	else
		cout << out;
	cout << "\n\t9:Mini\t\t\t";
	if(serieRow[8])
		cout << in;
	else
		cout << out;
	cout << "\n\t10:Eon's Elite\t\t";
	if(serieRow[9])
		cout << in;
	else
		cout << out;
	cout << "\n\t11:Superchargers\t";
	if(serieRow[10])
		cout << in;
	else
		cout << out;
	cout << "\n\t12:Sensei\t\t";
	if(serieRow[11])
		cout << in;
	else
		cout << out;

	cout << endl;
	while(iVar<0 || iVar>12)
		cin >> iVar;

	return iVar-1;
}

int algoRechercheCritMult(vector<vector<Skylander*>> data, vector<vector<bool>> lesBool, unsigned int unitElem, unsigned int vol, const string& skNom){
	unsigned int cptSky;
	vector<bool> elemRow=lesBool[0];
	vector<bool> armeRow=lesBool[1];
	vector<bool> statRow=lesBool[2];
	vector<bool> serieRow=lesBool[3];
	return cptSky;
}

string displayGameName(int nb){
	switch(nb){
		case 1:
			return "Spyro's Adventure";
			break;
		case 2:
			return "Giants";
			break;
		case 3:
			return "Swap Force";
			break;
		case 4:
			return "Trap Team";
			break;
		case 5:
			return "Superchargers";
			break;
		default:
			return "Imaginators";
			break;
	}
}