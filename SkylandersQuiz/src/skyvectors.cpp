#include "skyvectors.hpp"

using namespace std;

vector<Skylander*> spyrosAdventureInit(){
	vector<Skylander*> les32de2011;
	list<string> noms;
	vector<Weapon> armes;

	//#-------------------------------------#Magie#-------------------------------------#

	noms.push_back("Spyro");
	noms.push_back("spyro");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	armes.push_back(Weapon::Self);
	les32de2011.push_back(new Skylander(noms, Element::Magie, armes, 1, Stat::Agilite, "un Dragon", false, true));
	noms.clear();
	armes.clear();

	noms.push_back("Double Trouble");
	noms.push_back("Double trouble");
	noms.push_back("double trouble");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Sceptre);
	les32de2011.push_back(new Skylander(noms, Element::Magie, armes, 1, Stat::Chance, "un Sorcier invocateur", true));
	noms.clear();
	armes.clear();

	noms.push_back("Wrecking Ball");
	noms.push_back("Wrecking ball");
	noms.push_back("wrecking ball");
	armes.push_back(Weapon::Self);
	les32de2011.push_back(new Skylander(noms, Element::Magie, armes, 1, Stat::Defense, "une Boule", true));
	noms.clear();
	armes.clear();

	noms.push_back("Voodood");
	noms.push_back("voodood");
	armes.push_back(Weapon::Hache);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Foudre);
	les32de2011.push_back(new Skylander(noms, Element::Magie, armes, 1, Stat::Force, "un Trappeur", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Terre#-------------------------------------#

	noms.push_back("Bash");
	noms.push_back("bash");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::Terre, armes, 1, Stat::Defense, "un Dinosaur", true));
	noms.clear();
	armes.clear();

	noms.push_back("Dino-Rang");
	noms.push_back("Dino-rang");
	noms.push_back("dino-rang");
	noms.push_back("Dino Rang");
	noms.push_back("Dino rang");
	noms.push_back("dino rang");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::Terre, armes, 1, Stat::Chance, "un Crocodile", false));
	noms.clear();
	armes.clear();

	noms.push_back("Prism Break");
	noms.push_back("Prism break");
	noms.push_back("prism break");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	les32de2011.push_back(new Skylander(noms, Element::Terre, armes, 1, Stat::Force, "un Monstre de pierre", true));
	noms.clear();
	armes.clear();

	noms.push_back("Terrafin");
	noms.push_back("terrafin");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Poings);
	les32de2011.push_back(new Skylander(noms, Element::Terre, armes, 1, Stat::Defense, "un Requin", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Eau#-------------------------------------#

	noms.push_back("Slam Bam");
	noms.push_back("Slam bam");
	noms.push_back("slam bam");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Poings);
	les32de2011.push_back(new Skylander(noms, Element::Eau, armes, 1, Stat::Force, "un Yéti", true));
	noms.clear();
	armes.clear();

	noms.push_back("Zap");
	noms.push_back("zap");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Foudre);
	les32de2011.push_back(new Skylander(noms, Element::Eau, armes, 1, Stat::Defense, "un Lézard", true));
	noms.clear();
	armes.clear();

	noms.push_back("Wharm-Shell");
	noms.push_back("Wharm-shell");
	noms.push_back("wharm-shell");
	noms.push_back("Wharm Shell");
	noms.push_back("Wharm shell");
	noms.push_back("wharm shell");
	armes.push_back(Weapon::Marteaux);
	armes.push_back(Weapon::Foudre);
	les32de2011.push_back(new Skylander(noms, Element::Eau, armes, 1, Stat::Defense, "un Crabe bipède", false));
	noms.clear();
	armes.clear();

	noms.push_back("Gill Grunt");
	noms.push_back("Gill grunt");
	noms.push_back("gill grunt");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::Eau, armes, 1, Stat::Force, "un Gillman", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Feu#-------------------------------------#

	noms.push_back("Ignitor");
	noms.push_back("ignitor");
	armes.push_back(Weapon::Epee);
	armes.push_back(Weapon::Feu);
	les32de2011.push_back(new Skylander(noms, Element::Feu, armes, 1, Stat::Force, "un Chevalier", true));
	noms.clear();
	armes.clear();

	noms.push_back("Sunburn");
	noms.push_back("sunburn");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Feu);
	les32de2011.push_back(new Skylander(noms, Element::Feu, armes, 1, Stat::Chance, "un Pénix", true));
	noms.clear();
	armes.clear();

	noms.push_back("Eruptor");
	noms.push_back("eruptor");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les32de2011.push_back(new Skylander(noms, Element::Feu, armes, 1, Stat::Force, "un Monstre de lave", true));
	noms.clear();
	armes.clear();

	noms.push_back("Flameslinger");
	noms.push_back("flameslinger");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	armes.push_back(Weapon::Feu);
	les32de2011.push_back(new Skylander(noms, Element::Feu, armes, 1, Stat::Agilite, "un Archer", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Tech#-------------------------------------#

	noms.push_back("Boomer");
	noms.push_back("boomer");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les32de2011.push_back(new Skylander(noms, Element::Tech, armes, 1, Stat::Chance, "un Troll", false));
	noms.clear();
	armes.clear();

	noms.push_back("Drill Sergeant");
	noms.push_back("Drill sergeant");
	noms.push_back("drill sergeant");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Feu);
	les32de2011.push_back(new Skylander(noms, Element::Tech, armes, 1, Stat::Force, "une Forreuse", true));
	noms.clear();
	armes.clear();

	noms.push_back("Drobot");
	noms.push_back("drobot");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les32de2011.push_back(new Skylander(noms, Element::Tech, armes, 1, Stat::Defense, "un Lézard mécanique", true, true));
	noms.clear();
	armes.clear();

	noms.push_back("Trigger Happy");
	noms.push_back("Trigger happy");
	noms.push_back("trigger happy");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::Tech, armes, 1, Stat::Chance, "un Tirreur", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Mort#-------------------------------------#

	noms.push_back("Hex");
	noms.push_back("hex");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::MoVi, armes, 1, Stat::Defense, "une Sorcière", true));
	noms.clear();
	armes.clear();

	noms.push_back("Cynder");
	noms.push_back("cynder");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Foudre);
	les32de2011.push_back(new Skylander(noms, Element::MoVi, armes, 1, Stat::Agilite, "une Dragonne", true, true));
	noms.clear();
	armes.clear();

	noms.push_back("Chop Chop");
	noms.push_back("Chop chop");
	noms.push_back("chop chop");
	armes.push_back(Weapon::Epee);
	armes.push_back(Weapon::Bouclier);
	les32de2011.push_back(new Skylander(noms, Element::MoVi, armes, 1, Stat::Defense, "un Garde", true));
	noms.clear();
	armes.clear();

	noms.push_back("Ghost Roaster");
	noms.push_back("Ghost roaster");
	noms.push_back("ghost roaster");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::MoVi, armes, 1, Stat::Defense, "un Prisonnier", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Air#-------------------------------------#

	noms.push_back("Whirlwind");
	noms.push_back("whirlwind");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les32de2011.push_back(new Skylander(noms, Element::Air, armes, 1, Stat::Chance, "une Licorne", false, true));
	noms.clear();
	armes.clear();

	noms.push_back("Warnado");
	noms.push_back("warnado");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Zone);
	les32de2011.push_back(new Skylander(noms, Element::Air, armes, 1, Stat::Defense, "une Tortue", true));
	noms.clear();
	armes.clear();

	noms.push_back("Sonic Boom");
	noms.push_back("Sonic boom");
	noms.push_back("sonic boom");
	armes.push_back(Weapon::Zone);
	les32de2011.push_back(new Skylander(noms, Element::Air, armes, 1, Stat::Defense, "un Griffon", false, true));
	noms.clear();
	armes.clear();

	noms.push_back("Lightning Rod");
	noms.push_back("Lightning rod");
	noms.push_back("lightning rod");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Foudre);
	les32de2011.push_back(new Skylander(noms, Element::Air, armes, 1, Stat::Force, "un Dieu", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Vie#-------------------------------------#

	noms.push_back("Camo");
	noms.push_back("camo");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Solide);
	les32de2011.push_back(new Skylander(noms, Element::Vie, armes, 1, Stat::Chance, "un Dragon", true));
	noms.clear();
	armes.clear();

	noms.push_back("Stump Smash");
	noms.push_back("Stump smash");
	noms.push_back("stump smash");
	armes.push_back(Weapon::Marteaux);
	armes.push_back(Weapon::Projectiles);
	les32de2011.push_back(new Skylander(noms, Element::Vie, armes, 1, Stat::Force, "un Arbre", true));
	noms.clear();
	armes.clear();

	noms.push_back("Zook");
	noms.push_back("zook");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	les32de2011.push_back(new Skylander(noms, Element::Vie, armes, 1, Stat::Defense, "un Bambou", true));
	noms.clear();
	armes.clear();

	noms.push_back("Stealth Elf");
	noms.push_back("Stealth elf");
	noms.push_back("stealth elf");
	armes.push_back(Weapon::Originale);
	les32de2011.push_back(new Skylander(noms, Element::Vie, armes, 1, Stat::Agilite, "une Elf", false));
	noms.clear();
	armes.clear();

	//#---------------------------------------------------------------------------------#

	return les32de2011;
}










vector<Skylander*> giantsInit(){
	vector<Skylander*> les48de2012;
	list<string> noms;
	vector<Weapon> armes;

	//#-------------------------------------#Magie#-------------------------------------#

	noms.push_back("Ninjini");
	noms.push_back("ninjini");
	armes.push_back(Weapon::Epee);
	les48de2012.push_back(new Skylander(noms, Element::Magie, armes, 2, Stat::Chance, "une Génie", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Pop Fizz");
	noms.push_back("Lightcore Pop fizz");
	noms.push_back("Lightcore pop fizz");
	noms.push_back("lightcore Pop Fizz");
	noms.push_back("lightcore Pop fizz");
	noms.push_back("lightcore pop fizz");
	noms.push_back("Pop Fizz");
	noms.push_back("Pop fizz");
	noms.push_back("pop fizz");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Magie, armes, 2, Stat::Chance, "un Scientifique", false, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Spyro");
	noms.push_back("spyro");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Magie, armes, 2, Stat::Agilite, "un Dragon", false, true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Wrecking Ball");
	noms.push_back("Wrecking ball");
	noms.push_back("wrecking ball");
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Magie, armes, 2, Stat::Defense, "une Boule", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Double Trouble");
	noms.push_back("Double trouble");
	noms.push_back("double trouble");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Sceptre);
	les48de2012.push_back(new Skylander(noms, Element::Magie, armes, 2, Stat::Chance, "un Sorcier invocateur", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Pop Fizz");
	noms.push_back("Pop fizz");
	noms.push_back("pop fizz");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Magie, armes, 2, Stat::Chance, "un Scientifique", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Terre#-------------------------------------#

	noms.push_back("Crusher");
	noms.push_back("crusher");
	armes.push_back(Weapon::Marteaux);
	les48de2012.push_back(new Skylander(noms, Element::Terre, armes, 2, Stat::Force, "une Statue vivante", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Prism Break");
	noms.push_back("Lightcore Prism break");
	noms.push_back("Lightcore prism break");
	noms.push_back("lightcore Prism Break");
	noms.push_back("lightcore Prism break");
	noms.push_back("lightcore prism break");
	noms.push_back("Prism Break");
	noms.push_back("Prism break");
	noms.push_back("prism break");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	les48de2012.push_back(new Skylander(noms, Element::Terre, armes, 2, Stat::Force, "un Monstre de pierre", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Terrafin");
	noms.push_back("terrafin");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Poings);
	les48de2012.push_back(new Skylander(noms, Element::Terre, armes, 2, Stat::Defense, "un Requin", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Bash");
	noms.push_back("bash");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Terre, armes, 2, Stat::Defense, "un Dinosaur", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Prism Break");
	noms.push_back("Prism break");
	noms.push_back("prism break");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	les48de2012.push_back(new Skylander(noms, Element::Terre, armes, 2, Stat::Force, "un Monstre de pierre", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Flashwing");
	noms.push_back("flashwing");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Terre, armes, 2, Stat::Agilite, "une Dragonne", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Eau#-------------------------------------#

	noms.push_back("Thumpback");
	noms.push_back("thumpback");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Eau, armes, 2, Stat::Force, "une Baleine", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Chill");
	noms.push_back("Lightcore chill");
	noms.push_back("lightcore Chill");
	noms.push_back("lightcore chill");
	noms.push_back("Chill");
	noms.push_back("chill");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Eau, armes, 2, Stat::Defense, "une Gerrière des glaces", false, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Slam Bam");
	noms.push_back("Slam bam");
	noms.push_back("slam bam");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Poings);
	les48de2012.push_back(new Skylander(noms, Element::Eau, armes, 2, Stat::Force, "un Yéti", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Zap");
	noms.push_back("zap");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Foudre);
	les48de2012.push_back(new Skylander(noms, Element::Eau, armes, 2, Stat::Defense, "un Lézard", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Gill Grunt");
	noms.push_back("Gill grunt");
	noms.push_back("gill grunt");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Eau, armes, 2, Stat::Force, "un Gillman", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Chill");
	noms.push_back("chill");
	armes.push_back(Weapon::Bouclier);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Eau, armes, 2, Stat::Defense, "une Gerrière des glaces", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Feu#-------------------------------------#

	noms.push_back("Hot Head");
	noms.push_back("Hot head");
	noms.push_back("hot head");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Feu);
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Feu, armes, 2, Stat::Force, "un Volcan", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Eruptor");
	noms.push_back("Lightcore eruptor");
	noms.push_back("lightcore Eruptor");
	noms.push_back("lightcore eruptor");
	noms.push_back("Eruptor");
	noms.push_back("eruptor");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Feu, armes, 2, Stat::Force, "un Monstre de lave", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Ignitor");
	noms.push_back("ignitor");
	armes.push_back(Weapon::Epee);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Feu, armes, 2, Stat::Force, "un Chevalier", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Eruptor");
	noms.push_back("eruptor");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Feu, armes, 2, Stat::Force, "un Monstre de lave", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Flameslinger");
	noms.push_back("flameslinger");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Feu, armes, 2, Stat::Agilite, "un Archer", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Hot Dog");
	noms.push_back("Hot dog");
	noms.push_back("hot dog");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Feu, armes, 2, Stat::Force, "un Chien", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Tech#-------------------------------------#

	noms.push_back("Boucer");
	noms.push_back("boucer");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Tech, armes, 2, Stat::Force, "un Robot", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Drobot");
	noms.push_back("Lightcore drobot");
	noms.push_back("lightcore Drobot");
	noms.push_back("lightcore drobot");
	noms.push_back("Drobot");
	noms.push_back("drobot");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les48de2012.push_back(new Skylander(noms, Element::Tech, armes, 2, Stat::Defense, "un Lézard mécanique", true, true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Drill Sergeant");
	noms.push_back("Drill sergeant");
	noms.push_back("drill sergeant");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Feu);
	les48de2012.push_back(new Skylander(noms, Element::Tech, armes, 2, Stat::Force, "une Forreuse", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Trigger Happy");
	noms.push_back("Trigger happy");
	noms.push_back("trigger happy");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Tech, armes, 2, Stat::Chance, "un Tirreur", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Drobot");
	noms.push_back("drobot");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les48de2012.push_back(new Skylander(noms, Element::Tech, armes, 2, Stat::Defense, "un Lézard mécanique", true, true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Sprocket");
	noms.push_back("sprocket");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Zone);
	les48de2012.push_back(new Skylander(noms, Element::Tech, armes, 2, Stat::Defense, "une Mécanicienne", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Mort#-------------------------------------#

	noms.push_back("Eye-Brawl");
	noms.push_back("Eye-brawl");
	noms.push_back("eye-brawl");
	noms.push_back("Eye Brawl");
	noms.push_back("Eye brawl");
	noms.push_back("eye brawl");
	armes.push_back(Weapon::Poings);
	armes.push_back(Weapon::Projectiles);
	les48de2012.push_back(new Skylander(noms, Element::MoVi, armes, 2, Stat::Force, "un Corps et un Œil", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Hex");
	noms.push_back("Lightcore hex");
	noms.push_back("lightcore Hex");
	noms.push_back("lightcore hex");
	noms.push_back("Hex");
	noms.push_back("hex");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::MoVi, armes, 2, Stat::Defense, "une Sorcière", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Cynder");
	noms.push_back("cynder");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Foudre);
	les48de2012.push_back(new Skylander(noms, Element::MoVi, armes, 2, Stat::Agilite, "une Dragonne", true, true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Chop Chop");
	noms.push_back("Chop chop");
	noms.push_back("chop chop");
	armes.push_back(Weapon::Epee);
	armes.push_back(Weapon::Bouclier);
	les48de2012.push_back(new Skylander(noms, Element::MoVi, armes, 2, Stat::Defense, "un Garde", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Hex");
	noms.push_back("hex");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::MoVi, armes, 2, Stat::Defense, "une Sorcière", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Fright Rider");
	noms.push_back("Fright rider");
	noms.push_back("fright rider");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::MoVi, armes, 2, Stat::Agilite, "un Cavalier", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Air#-------------------------------------#

	noms.push_back("Swarm");
	noms.push_back("swarm");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les48de2012.push_back(new Skylander(noms, Element::Air, armes, 2, Stat::Defense, "une Guêpe", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Jet-Vac");
	noms.push_back("Lightcore Jet-vac");
	noms.push_back("Lightcore jet-vac");
	noms.push_back("Lightcore Jet Vac");
	noms.push_back("Lightcore Jet vac");
	noms.push_back("Lightcore jet vac");
	noms.push_back("lightcore Jet-Vac");
	noms.push_back("lightcore Jet-vac");
	noms.push_back("lightcore jet-vac");
	noms.push_back("lightcore Jet Vac");
	noms.push_back("lightcore Jet vac");
	noms.push_back("lightcore jet vac");
	noms.push_back("Jet-Vac");
	noms.push_back("Jet-vac");
	noms.push_back("jet-vac");
	noms.push_back("Jet Vac");
	noms.push_back("Jet vac");
	noms.push_back("jet vac");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	les48de2012.push_back(new Skylander(noms, Element::Air, armes, 2, Stat::Chance, "un Aigle", false, true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Sonic Boom");
	noms.push_back("Sonic boom");
	noms.push_back("sonic boom");
	armes.push_back(Weapon::Zone);
	les48de2012.push_back(new Skylander(noms, Element::Air, armes, 2, Stat::Defense, "un Griffon", false, true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Whirlwind");
	noms.push_back("whirlwind");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les48de2012.push_back(new Skylander(noms, Element::Air, armes, 2, Stat::Chance, "une Licorne", false, true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Lightning Rod");
	noms.push_back("Lightning rod");
	noms.push_back("lightning rod");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Foudre);
	les48de2012.push_back(new Skylander(noms, Element::Air, armes, 2, Stat::Force, "un Dieu", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Jet-Vac");
	noms.push_back("Jet-vac");
	noms.push_back("jet-vac");
	noms.push_back("Jet Vac");
	noms.push_back("Jet vac");
	noms.push_back("jet vac");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	les48de2012.push_back(new Skylander(noms, Element::Air, armes, 2, Stat::Chance, "un Aigle", false, true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Vie#-------------------------------------#

	noms.push_back("Tree Rex");
	noms.push_back("Tree rex");
	noms.push_back("tree rex");
	armes.push_back(Weapon::Poings);
	armes.push_back(Weapon::Projectiles);
	les48de2012.push_back(new Skylander(noms, Element::Vie, armes, 2, Stat::Force, "un Arbre", true, Serie::Giant));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Shroomboom");
	noms.push_back("Lightcore shroomboom");
	noms.push_back("lightcore Shroomboom");
	noms.push_back("lightcore shroomboom");
	noms.push_back("Shroomboom");
	noms.push_back("shroomboom");
	armes.push_back(Weapon::Projectiles);
	les48de2012.push_back(new Skylander(noms, Element::Vie, armes, 2, Stat::Chance, "un Champignon", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Stealth Elf");
	noms.push_back("Stealth elf");
	noms.push_back("stealth elf");
	armes.push_back(Weapon::Self);
	les48de2012.push_back(new Skylander(noms, Element::Vie, armes, 2, Stat::Agilite, "une Elf", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Zook");
	noms.push_back("zook");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	les48de2012.push_back(new Skylander(noms, Element::Vie, armes, 2, Stat::Defense, "un Bambou", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Stump Smash");
	noms.push_back("Stump smash");
	noms.push_back("stump smash");
	armes.push_back(Weapon::Marteaux);
	armes.push_back(Weapon::Projectiles);
	les48de2012.push_back(new Skylander(noms, Element::Vie, armes, 2, Stat::Force, "un Arbre", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Shroomboom");
	noms.push_back("shroomboom");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	les48de2012.push_back(new Skylander(noms, Element::Vie, armes, 2, Stat::Chance, "un Champignon", true));
	noms.clear();
	armes.clear();

	//#---------------------------------------------------------------------------------#

	return les48de2012;
}










vector<Skylander*> swapForceInit(){
	vector<Skylander*> les56de2013;
	list<string> noms;
	vector<Weapon> armes;

	//#-------------------------------------#Magie#-------------------------------------#

	noms.push_back("Hoot Loop");
	noms.push_back("Hoot loop");
	noms.push_back("hoot loop");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Sceptre);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Chance, "un Hibou", false, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Trap Shadow");
	noms.push_back("Trap shadow");
	noms.push_back("trap shadow");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Defense, "un Tigre", false, Serie::SwFc));
	noms.clear();
	armes.clear();
	
	noms.push_back("Lightcore Star Strike");
	noms.push_back("Lightcore Star strike");
	noms.push_back("Lightcore star strike");
	noms.push_back("lightcore Star Strike");
	noms.push_back("lightcore Star strike");
	noms.push_back("lightcore star strike");
	noms.push_back("Star Strike");
	noms.push_back("Star strike");
	noms.push_back("star strike");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Force, "une Magicienne", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Mega Ram Spyro");
	noms.push_back("Mega Ram spyro");
	noms.push_back("Mega ram Spyro");
	noms.push_back("Mega ram spyro");
	noms.push_back("mega ram Spyro");
	noms.push_back("mega ram spyro");
	noms.push_back("Spyro");
	noms.push_back("spyro");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Agilite, "un Dragon", false, true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Super Glup Pop Fizz");
	noms.push_back("Super Glup Pop fizz");
	noms.push_back("Super Glup pop fizz");
	noms.push_back("Super glup Pop Fizz");
	noms.push_back("Super glup Pop fizz");
	noms.push_back("Super glup pop fizz");
	noms.push_back("super glup Pop Fizz");
	noms.push_back("super glup Pop fizz");
	noms.push_back("super glup pop fizz");
	noms.push_back("Pop Fizz");
	noms.push_back("Pop fizz");
	noms.push_back("pop fizz");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Chance, "un Scientifique", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Dune Bug");
	noms.push_back("Dune bug");
	noms.push_back("dune bug");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Defense, "un Scarabée", true, true));
	noms.clear();
	armes.clear();

	noms.push_back("Star Strike");
	noms.push_back("Star strike");
	noms.push_back("star strike");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	les56de2013.push_back(new Skylander(noms, Element::Magie, armes, 3, Stat::Force, "une Magicienne", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Terre#-------------------------------------#

	noms.push_back("Rubble Rouser");
	noms.push_back("Rubble rouser");
	noms.push_back("rubble rouser");
	armes.push_back(Weapon::Marteaux);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Defense, "un Golem", true, Serie::SwFc));
	noms.clear();
	armes.clear();
	
	noms.push_back("Doom Stone");
	noms.push_back("Doom stone");
	noms.push_back("doom stone");
	armes.push_back(Weapon::Marteaux);
	armes.push_back(Weapon::Bouclier);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Force, "un Chevalier", true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Flashwing");
	noms.push_back("Lightcore flashwing");
	noms.push_back("lightcore Flashwing");
	noms.push_back("lightcore flashwing");
	noms.push_back("Flashwing");
	noms.push_back("flashwing");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Agilite, "une Dragonne", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Hyper Beam Prism Break");
	noms.push_back("Hyper beam Prism break");
	noms.push_back("Hyper beam prism break");
	noms.push_back("hyper Beam Prism Break");
	noms.push_back("hyper beam Prism break");
	noms.push_back("hyper beam prism break");
	noms.push_back("Prism Break");
	noms.push_back("Prism break");
	noms.push_back("prism break");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Force, "un Monstre de pierre", true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Knockout Terrafin");
	noms.push_back("Knockout terrafin");
	noms.push_back("knockout Terrafin");
	noms.push_back("knockout terrafin");
	noms.push_back("Terrafin");
	noms.push_back("terrafin");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Poings);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Defense, "un Requin", true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Scorp");
	noms.push_back("scorp");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Force, "un Scorpion", false));
	noms.clear();
	armes.clear();

	noms.push_back("Slober Tooth");
	noms.push_back("Slober tooth");
	noms.push_back("slober tooth");
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Terre, armes, 3, Stat::Force, "un Chien", false));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Eau#-------------------------------------#

	noms.push_back("Wash Buckler");
	noms.push_back("Wash buckler");
	noms.push_back("wash buckler");
	armes.push_back(Weapon::Epee);
	armes.push_back(Weapon::Projectiles);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Chance, "un Crustacé", true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Freeze Blade");
	noms.push_back("Freeze blade");
	noms.push_back("freeze blade");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Agilite, "un Tigre", false, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Wharm-Shell");
	noms.push_back("Lightcore Wharm-shell");
	noms.push_back("Lightcore wharm-shell");
	noms.push_back("Lightcore Wharm Shell");
	noms.push_back("Lightcore Wharm shell");
	noms.push_back("Lightcore wharm shell");
	noms.push_back("lightcore Wharm-Shell");
	noms.push_back("lightcore Wharm-shell");
	noms.push_back("lightcore wharm-shell");
	noms.push_back("lightcore Wharm Shell");
	noms.push_back("lightcore Wharm shell");
	noms.push_back("lightcore wharm shell");
	noms.push_back("Wharm-Shell");
	noms.push_back("Wharm-shell");
	noms.push_back("wharm-shell");
	noms.push_back("Wharm Shell");
	noms.push_back("Wharm shell");
	noms.push_back("wharm shell");
	armes.push_back(Weapon::Marteaux);
	armes.push_back(Weapon::Foudre);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Defense, "un Crabe bipède", false, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Anchors Away Gill Grunt");
	noms.push_back("Anchors Away Gill grunt");
	noms.push_back("Anchors Away gill grunt");
	noms.push_back("Anchors away Gill Grunt");
	noms.push_back("Anchors away Gill grunt");
	noms.push_back("Anchors away gill grunt");
	noms.push_back("anchors away Gill Grunt");
	noms.push_back("anchors away Gill grunt");
	noms.push_back("anchors away gill grunt");
	noms.push_back("Gill Grunt");
	noms.push_back("Gill grunt");
	noms.push_back("gill grunt");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Force, "un Gillman", false, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Blizzard Chill");
	noms.push_back("Blizzard chill");
	noms.push_back("blizzard Chill");
	noms.push_back("blizzard chill");
	noms.push_back("Chill");
	noms.push_back("chill");
	armes.push_back(Weapon::Bouclier);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Defense, "une Gerrière des glaces", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Rip Tide");
	noms.push_back("Rip tide");
	noms.push_back("rip tide");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Force, "une Guerrier", true));
	noms.clear();
	armes.clear();

	noms.push_back("Punk Shock");
	noms.push_back("Punk shock");
	noms.push_back("punk shock");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Foudre);
	les56de2013.push_back(new Skylander(noms, Element::Eau, armes, 3, Stat::Force, "une Princesse", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Feu#-------------------------------------#

	noms.push_back("Blast Zone");
	noms.push_back("Blast zone");
	noms.push_back("blast zone");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Force, "un Chevalier", true, true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Fire Kraken");
	noms.push_back("Fire kraken");
	noms.push_back("fire kraken");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Agilite, "un Dragon", false, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Smolderdash");
	noms.push_back("Lightcore smolderdash");
	noms.push_back("lightcore Smolderdash");
	noms.push_back("lightcore smolderdash");
	noms.push_back("Smolderdash");
	noms.push_back("smolderdash");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Force, "une Garde royale", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Lava Barf Eruptor");
	noms.push_back("Lava Barf eruptor");
	noms.push_back("Lava barf Eruptor");
	noms.push_back("Lava barf eruptor");
	noms.push_back("lava barf Eruptor");
	noms.push_back("lava barf eruptor");
	noms.push_back("Eruptor");
	noms.push_back("eruptor");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Force, "un Monstre de lave", true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Fire Bone Hot Dog");
	noms.push_back("Fire Bone Hot dog");
	noms.push_back("Fire Bone hot dog");
	noms.push_back("Fire bone Hot Dog");
	noms.push_back("Fire bone Hot dog");
	noms.push_back("Fire bone hot dog");
	noms.push_back("fire bone Hot Dog");
	noms.push_back("fire bone Hot dog");
	noms.push_back("fire bone hot dog");
	noms.push_back("Hot Dog");
	noms.push_back("Hot dog");
	noms.push_back("hot dog");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Force, "un Chien", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Fryno");
	noms.push_back("fryno");
	armes.push_back(Weapon::Poings);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Force, "un Rhinocéros", false));
	noms.clear();
	armes.clear();

	noms.push_back("Smolderdash");
	noms.push_back("smolderdash");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Feu);
	les56de2013.push_back(new Skylander(noms, Element::Feu, armes, 3, Stat::Force, "une Garde royale", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Tech#-------------------------------------#

	noms.push_back("Magna Charge");
	noms.push_back("Magna charge");
	noms.push_back("magna charge");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Agilite, "un Émant", true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Spy Rise");
	noms.push_back("Spy rise");
	noms.push_back("spy rise");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Chance, "un Espion", true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Countdown");
	noms.push_back("Lightcore countdown");
	noms.push_back("lightcore Countdown");
	noms.push_back("lightcore countdown");
	noms.push_back("Countdown");
	noms.push_back("countdown");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Force, "une Bombe", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Big Bang Trigger Happy");
	noms.push_back("Big Bang Trigger happy");
	noms.push_back("Big Bang trigger happy");
	noms.push_back("Big bang Trigger Happy");
	noms.push_back("Big bang Trigger happy");
	noms.push_back("Big bang trigger happy");
	noms.push_back("big bang Trigger Happy");
	noms.push_back("big bang Trigger happy");
	noms.push_back("big bang trigger happy");
	noms.push_back("Trigger Happy");
	noms.push_back("Trigger happy");
	noms.push_back("trigger happy");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Chance, "un Tirreur", false, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Heavy Duty Sprocket");
	noms.push_back("Heavy Duty sprocket");
	noms.push_back("Heavy duty Sprocket");
	noms.push_back("Heavy duty sprocket");
	noms.push_back("heavy duty Sprocket");
	noms.push_back("heavy duty sprocket");
	noms.push_back("Sprocket");
	noms.push_back("sprocket");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Zone);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Defense, "une Mécanicienne", false, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Wind-Up");
	noms.push_back("Wind-up");
	noms.push_back("wind-up");
	noms.push_back("Wind Up");
	noms.push_back("Wind up");
	noms.push_back("wind up");
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Defense, "un Jouet", true));
	noms.clear();
	armes.clear();

	noms.push_back("Countdown");
	noms.push_back("countdown");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Tech, armes, 3, Stat::Force, "une Bombe", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Mort#-------------------------------------#

	noms.push_back("Rattle Shake");
	noms.push_back("Rattle shake");
	noms.push_back("rattle shake");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Agilite, "un Serpent", false, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Night Shift");
	noms.push_back("Night shift");
	noms.push_back("night shift");
	armes.push_back(Weapon::Poings);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Force, "un Boxeur", true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Grim Creeper");
	noms.push_back("Lightcore Grim creeper");
	noms.push_back("Lightcore grim creeper");
	noms.push_back("lightcore Grim Creeper");
	noms.push_back("lightcore Grim creeper");
	noms.push_back("lightcore grim creeper");
	noms.push_back("Grim Creeper");
	noms.push_back("Grim creeper");
	noms.push_back("grim creeper");
	armes.push_back(Weapon::Originale);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Agilite, "un Faucheur", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Twin Blade Chop Chop");
	noms.push_back("Twin Blade Chop chop");
	noms.push_back("Twin Blade chop chop");
	noms.push_back("Twin blade Chop Chop");
	noms.push_back("Twin blade Chop chop");
	noms.push_back("Twin blade chop chop");
	noms.push_back("twin blade Chop Chop");
	noms.push_back("twin blade Chop chop");
	noms.push_back("twin blade chop chop");
	noms.push_back("Chop Chop");
	noms.push_back("Chop chop");
	noms.push_back("chop chop");
	armes.push_back(Weapon::Epee);
	armes.push_back(Weapon::Bouclier);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Defense, "un Garde", true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Phantom Cynder");
	noms.push_back("Phantom cynder");
	noms.push_back("phantom Cynder");
	noms.push_back("phantom cynder");
	noms.push_back("Cynder");
	noms.push_back("cynder");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Foudre);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Agilite, "une Dragonne", true, true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Roller Brawl");
	noms.push_back("Roller brawl");
	noms.push_back("roller brawl");
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Agilite, "une Vampire", true));
	noms.clear();
	armes.clear();

	noms.push_back("Grim Creeper");
	noms.push_back("Grim creeper");
	noms.push_back("grim creeper");
	armes.push_back(Weapon::Originale);
	les56de2013.push_back(new Skylander(noms, Element::MoVi, armes, 3, Stat::Agilite, "un Faucheur", true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Air#-------------------------------------#

	noms.push_back("Free Ranger");
	noms.push_back("Free ranger");
	noms.push_back("Free ranger");
	armes.push_back(Weapon::Originale);
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Foudre);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Defense, "un Poulet", false, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Boom Jet");
	noms.push_back("Boom jet");
	noms.push_back("boom jet");
	armes.push_back(Weapon::Projectiles);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Force, "un Casse-cou", false, true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Warnado");
	noms.push_back("Lightcore warnado");
	noms.push_back("lightcore Warnado");
	noms.push_back("lightcore warnado");
	noms.push_back("Warnado");
	noms.push_back("warnado");
	armes.push_back(Weapon::Self);
	armes.push_back(Weapon::Zone);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Defense, "une Tortue", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Horn Blast Whirlwind");
	noms.push_back("Horn Blast whirlwind");
	noms.push_back("Horn blast Whirlwind");
	noms.push_back("Horn blast whirlwind");
	noms.push_back("horn blast Whirlwind");
	noms.push_back("horn blast whirlwind");
	noms.push_back("Whirlwind");
	noms.push_back("whirlwind");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Plasma);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Chance, "une Licorne", false, true, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Turbo Jet-Vac");
	noms.push_back("Turbo Jet-vac");
	noms.push_back("Turbo jet-vac");
	noms.push_back("Turbo Jet Vac");
	noms.push_back("Turbo Jet vac");
	noms.push_back("Turbo jet vac");
	noms.push_back("turbo Jet-Vac");
	noms.push_back("turbo Jet-vac");
	noms.push_back("turbo jet-vac");
	noms.push_back("turbo Jet Vac");
	noms.push_back("turbo Jet vac");
	noms.push_back("turbo jet vac");
	noms.push_back("Jet-Vac");
	noms.push_back("Jet-vac");
	noms.push_back("jet-vac");
	noms.push_back("Jet Vac");
	noms.push_back("Jet vac");
	noms.push_back("jet vac");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Chance, "un Aigle", false, true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Pop Thorn");
	noms.push_back("Pop thorn");
	noms.push_back("pop thorn");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Defense, "un Épinoux", true));
	noms.clear();
	armes.clear();

	noms.push_back("Scratch");
	noms.push_back("scratch");
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Plasma);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Air, armes, 3, Stat::Force, "un Sphinx", false, true));
	noms.clear();
	armes.clear();

	//#-------------------------------------#Vie#-------------------------------------#

	noms.push_back("Stink Bomb");
	noms.push_back("Stink bomb");
	noms.push_back("stink bomb");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Solide);
	armes.push_back(Weapon::Poings);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Agilite, "une Moufette", true, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Grilla Drilla");
	noms.push_back("Grilla drilla");
	noms.push_back("grilla drilla");
	armes.push_back(Weapon::Poings);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Force, "un Primate", false, Serie::SwFc));
	noms.clear();
	armes.clear();

	noms.push_back("Lightcore Bumble Blast");
	noms.push_back("Lightcore Bumble blast");
	noms.push_back("Lightcore bumble blast");
	noms.push_back("lightcore Bumble Blast");
	noms.push_back("lightcore Bumble blast");
	noms.push_back("lightcore bumble blast");
	noms.push_back("Bumble Blast");
	noms.push_back("Bumble blast");
	noms.push_back("bumble blast");
	armes.push_back(Weapon::Projectiles);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Force, "une Ruche", true, Serie::Lightcore));
	noms.clear();
	armes.clear();

	noms.push_back("Thorn Horn Camo");
	noms.push_back("Thorn Horn camo");
	noms.push_back("Thorn horn Camo");
	noms.push_back("Thorn horn camo");
	noms.push_back("thorn horn Camo");
	noms.push_back("thorn horn camo");
	noms.push_back("Camo");
	noms.push_back("camo");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Zone);
	armes.push_back(Weapon::Solide);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Chance, "un Dragon", true, Serie::Deux));
	noms.clear();
	armes.clear();

	noms.push_back("Ninja Stealth Elf");
	noms.push_back("Ninja Stealth elf");
	noms.push_back("Ninja stealth elf");
	noms.push_back("ninja Stealth Elf");
	noms.push_back("ninja Stealth elf");
	noms.push_back("ninja stealth elf");
	noms.push_back("Stealth Elf");
	noms.push_back("Stealth elf");
	noms.push_back("stealth elf");
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Agilite, "une Elf", false, Serie::Trois));
	noms.clear();
	armes.clear();

	noms.push_back("Zoo Lou");
	noms.push_back("Zoo lou");
	noms.push_back("zoo lou");
	armes.push_back(Weapon::Projectiles);
	armes.push_back(Weapon::Inconnu);
	armes.push_back(Weapon::Self);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Force, "un Ours", false));
	noms.clear();
	armes.clear();

	noms.push_back("Bumble Blast");
	noms.push_back("Bumble blast");
	noms.push_back("bumble blast");
	armes.push_back(Weapon::Projectiles);
	les56de2013.push_back(new Skylander(noms, Element::Vie, armes, 3, Stat::Force, "une Ruche", true));
	noms.clear();
	armes.clear();

	//#---------------------------------------------------------------------------------#

	return les56de2013;
}