#ifndef ENUM_HPP
#define ENUM_hpp
#include <iostream>

enum class Element{Magie, Terre, Eau, Feu, Tech, MoVi, Air, Vie, Lum, Ten};
std::ostream& operator<<(std::ostream& os, const Element& elem);

enum class Weapon{Self, Poings, Epee, Bouclier, Hache, Marteaux, Sceptre, Originale, Projectiles, Zone, Feu, Foudre, Plasma, Solide, Inconnu};
std::ostream& operator<<(std::ostream& os, const Weapon& a);

enum class Stat{Force, Defense, Agilite, Chance};
std::ostream& operator<<(std::ostream& os, const Stat& st);

enum class Serie{Un, Deux, Trois, Quatre, Giant, Lightcore, SwFc, TrTm, Mini, Eons, Supercharger, Sensei, Imaginator};
std::ostream& operator<<(std::ostream& os, const Serie& s);

#endif