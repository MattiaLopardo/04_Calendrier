//
// Created by matti on 28.10.2026.
//
#include "boucles_affichage.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <windows.h>
#include <array>

using namespace std;

#ifndef INC_04_CALENDRIER_CALCUL_H
#define INC_04_CALENDRIER_CALCUL_H

int calcul_compt_fevrier(const int& annee,int compteur);

int calcul_compteur31(const array <int,31>& mois31,int compteur);

int calcul_compteur30(const array <int,30>& mois30,int compteur);

bool bissextile(const int& annee);

int calcul_jours(int annee);

#endif //INC_04_CALENDRIER_CALCUL_H
