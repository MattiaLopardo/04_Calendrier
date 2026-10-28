//
// Created by matti on 28.10.2026.
//
#include "boucles_affichage.h"
#include "calcul.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <windows.h>
#include <array>

using namespace std;

bool bissextile(int annee) {

    if ((annee % 100 != 0 and annee % 4 == 0) or annee % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int calcul_jours(int annee) {
    //ref = 2018 -> lundi 1er janvier
    int ref = 2018;

    if (annee < 2018) {
        int calculannee = annee;
        int diff = 2018 - annee;
        int jours = diff*31*7 + diff*30*4;
        for (int i = 0; i < diff; i++) {
            if (bissextile(calculannee)) {
                jours += 29;
                ++calculannee;
            }
            else {
                jours += 28;
                ++calculannee;
            }

        }
        int ecart = jours % 7;
        ecart = 7 - ecart;
        return ecart;
    }

    else if (annee > 2018) {
        int calculannee = annee - 1;
        int diff = annee - 2018;
        int jours = diff*31*7 + diff*30*4;
        for (int i = 0; i < diff; i++) {
            if (bissextile(calculannee)) {
                jours += 29;
                --calculannee;
            }
            else {
                jours += 28;
                --calculannee;
            }

        }
        int ecart = jours % 7;
        return ecart;

    }
    else {
        return 0;
    }
}