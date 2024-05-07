// Joueur.hpp

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    Joueur() {
        x = 0;
        y = 0;
    }

    void setPosition(int initialX, int initialY) {
        x = initialX;
        y = initialY;
    }

    void afficherPosition() const {
        std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
    }

    void deplacer(int deplacementX, int deplacementY) {
        x += deplacementX;
        y += deplacementY;
    }
};

#endif
