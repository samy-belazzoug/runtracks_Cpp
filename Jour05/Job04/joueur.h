#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include <string>

using namespace  std;

class Joueur {
public:
    int x,y;
    string pseudo;

    Joueur() {
        x = 0;
        y = 0;
        this->x = x;
        this->y = y;
    }

    Joueur(int abs, int ord) {
        x = abs;
        y = ord;
        this->x = x;
        this->y = y;
    }

    Joueur(int abscisse, int ordonnee, string nom) {
        x = abscisse;
        y = ordonnee;
        pseudo = nom;
        this->x = x;
        this->y = y;
        this->pseudo = pseudo;
    }

    void get_x() {cout << this->x << endl;}
    void get_y() {cout << this->y << endl;}
    void set_x(int value) {this->x = value;}
    void set_y(int value) {this->y = value;}
};



#endif //JOUEUR_H
