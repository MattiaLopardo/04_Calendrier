//
// Created by matti on 28.10.2026.
//
#include "boucles_affichage.h"
#include "Calcul.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <windows.h>
#include <array>

using namespace std;

int main() {
    const array <char,7> jours {'L','M','M','J','V','S','D'};
    const array <int,31> mois31 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    const array <int,30> mois30 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

    SetConsoleOutputCP(CP_UTF8);

    int annee = 0;
    char repeat = 'O';
    while (repeat == 'O') {
        do {
            cout << "entrer une valeur [1800 - 2100] : " << endl;
            cin >> annee;
        }while (annee < 1800 or annee > 2100);



        affichage(jours, annee, mois31, mois30);
        do {
            cout << "voulez-vous continuer [O|N] : " << endl;
            cin >> repeat;
        }while (repeat != 'O' and repeat != 'N' );
    }

}