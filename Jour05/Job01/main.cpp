#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur;
    joueur.setPosition(5, 5);
    joueur.afficherPosition();
    joueur.deplacer(2, 3);
    joueur.afficherPosition();
    return 0;
}
