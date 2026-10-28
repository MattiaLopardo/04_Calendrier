//
// Created by matti on 28.10.2026.
//
//#include "Calendrier.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>
#include <windows.h>
#include <array>

using namespace std;

bool bissextile(int annee);
void affichage(array <char,7> jours, int annee, array <int,31> mois31, array <int,30> mois30);
void boucletableau31(array<int,31> mois31);
void boucletableau30(array<int,30> mois30);
void fevrier(int annee);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int annee = 0;
    do {
        cout << "entrer une valeur [1800 - 2100] : " << endl;
        cin >> annee;
    }while (annee < 1800 or annee > 2100);


    array <char,7> jours {'L','M','M','J','V','S','D'};
    array <int,31> mois31 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    array <int,30> mois30 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

    affichage(jours, annee, mois31, mois30);
}

bool bissextile(int annee) {

    if ((annee % 100 != 0 and annee % 4 == 0) or annee % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void boucletableau31(array <int,31> mois31) {
    unsigned int compteur = 1;
    for (size_t i = 0; i < mois31.size(); i++) {
        cout << left << mois31.at(i) << setw(3);
        if (compteur == 7) {
            cout << endl;
            compteur = 0;
        }
        ++compteur;
    }
    cout << endl;
    cout << endl;
}

void boucletableau30(array<int,30> mois30){
    unsigned int compteur = 1;
    for (size_t i = 0; i < mois30.size(); i++) {
        cout << left << mois30.at(i) << setw(3);
        if (compteur == 7) {
            cout << endl;
            compteur = 0;
        }
        ++compteur;
    }
    cout << endl;
    cout << endl;
}

void fevrier(int annee) {
    unsigned int compteur = 1;
    if (bissextile(annee)) {
        array <int,29> février {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
        for (size_t i = 0; i < février.size(); i++) {
            cout << left << février.at(i) << setw(3);
            if (compteur == 7) {
                cout << endl;
                compteur = 0;
            }
            ++compteur;
        }
        cout << endl;
        cout << endl;
    }
    else {
        array <int,28> février {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
        for (size_t i = 0; i < février.size(); i++) {
            cout << left << février.at(i) << setw(3);
            if (compteur == 7) {
                cout << endl;
                compteur = 0;
            }
            ++compteur;
        }
        cout << endl;
    }
}

void affichage(array <char,7> jours, int annee, array<int, 31> mois31, array<int, 30> mois30) {
    cout << "janvier " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right<< jours.at(i) << setw(3);
    } cout << endl;

    boucletableau31(mois31);

    cout << "février " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;

    fevrier(annee);

    cout << "mars " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;

    boucletableau31(mois31);

    cout << "avril " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;

    boucletableau30(mois30);

}
