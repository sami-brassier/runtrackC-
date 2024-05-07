#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur1;
    joueur1.afficherPosition();
    Joueur joueur2(3, 4);
    joueur2.afficherPosition();
    Joueur joueur3(1, 1, "Alice");
    joueur3.afficherPosition();
    return 0;
}
