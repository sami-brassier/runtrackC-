// Joueur.hpp

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    Joueur() : x(0), y(0), nom("") {}

    Joueur(int initialX, int initialY) : x(initialX), y(initialY), nom("") {}

    Joueur(int initialX, int initialY, const std::string& nomJoueur) : x(initialX), y(initialY), nom(nomJoueur) {}

    void setPosition(int initialX, int initialY) {
        x = initialX;
        y = initialY;
    }

    void afficherPosition() const {
        std::cout << "Position du joueur " << nom << " : (" << x << ", " << y << ")" << std::endl;
    }

    void deplacer(int deplacementX, int deplacementY) {
        x += deplacementX;
        y += deplacementY;
    }
};

#endif
