//
// Created by matti on 28.10.2026.
//
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <windows.h>
#include <array>

using namespace std;

#ifndef INC_04_CALENDRIER_BOUCLES_AFFICHAGE_H
#define INC_04_CALENDRIER_BOUCLES_AFFICHAGE_H

void affichage(const array <char,7>& jours, const int& annee, const array <int,31>& mois31, const array <int,30>& mois30);
void boucletableau31(const array<int,31>& mois31, int compteur);
void boucletableau30(const array<int,30>& mois30, int compteur);
void fevrier(const int& annee, int compteur);

#endif //INC_04_CALENDRIER_BOUCLES_AFFICHAGE_H
