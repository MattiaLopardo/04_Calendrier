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

int calcul_compteur31(const array <int,31>& mois31,int compteur) {

    for (size_t i = 0; i < mois31.size(); i++) {
        if (compteur == 7) {
            compteur = 0;
        }
        ++compteur;
    }
    return compteur;
}

int calcul_compteur30(const array <int,30>& mois30,int compteur) {

    for (size_t i = 0; i < mois30.size(); i++) {
        if (compteur == 7) {
            compteur = 0;
        }
        ++compteur;
    }
    return compteur;
}

int calcul_compt_fevrier(const int& annee,int compteur) {

    if (bissextile(annee)) {
        array <int,29> février {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
        for (size_t i = 0; i < février.size(); i++) {
            if (compteur == 7) {
                compteur = 0;
            }
            ++compteur;
        }
        return compteur;
    }
    else {
        array <int,28> février {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
        for (size_t i = 0; i < février.size(); i++) {
            if (compteur == 7) {
                compteur = 0;
            }
            ++compteur;
        }
        return compteur;
    }
}

bool bissextile(const int& annee) {

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
        //int calculannee = annee;
        int diff = 2018 - annee;
        int jours = diff*31*7 + diff*30*4;
        for (int i = 0; i < diff; i++) {
            if (bissextile(annee)) {
                jours += 29;
                ++annee;
            }
            else {
                jours += 28;
                ++annee;
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