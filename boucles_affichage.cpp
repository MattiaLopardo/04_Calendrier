//
// Created by matti on 28.10.2026.
//
#include <cstdlib>
#include "boucles_affichage.h"
#include "Calcul.h"
#include <iostream>
#include <iomanip>
#include <limits>
#include <windows.h>
#include <array>

using namespace std;



void boucletableau31(const array <int,31>& mois31,int compteur) {

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

void boucletableau30(const array<int,30>& mois30,int compteur){

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

void fevrier(const int& annee,int compteur) {

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

void affichage(const array <char,7>& jours, const int& annee, const array<int, 31>& mois31, const array<int, 30>& mois30) {
    cout << "janvier " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right<< jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_jours(annee); i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31, calcul_jours(annee)+1);

    cout << "février " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur31(mois31, calcul_jours(annee)); i++) {
        cout << left << " " << setw(3);
    }


    fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1));

    cout << "mars " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee))); i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1)));

    cout << "avril " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)))); i++) {
        cout << left << " " << setw(3);
    }

    boucletableau30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1))));

    cout << "mai " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee))))) ; i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1)))));

    cout << "juin " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee))))));i++) {
        cout << left << " " << setw(3);
    }

    boucletableau30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1))))));

    cout << "juillet " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)))))));i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1)))))));

    cout << "août " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)))))))) ;i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1))))))));

    cout << "septembre " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)))))))));i++) {
        cout << left << " " << setw(3);
    }

    boucletableau30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1)))))))));

    cout << "octobre " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)))))))))) ; i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1))))))))));

    cout << "novembre " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee))))))))))) ; i++) {
        cout << left << " " << setw(3);
    }

    boucletableau30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1)))))))))));

    cout << "décembre " << annee << endl;
    for (size_t i = 0; i < jours.size(); i++) {
        cout << right << jours.at(i) << setw(3);
    } cout << endl;
    for (int i = 0; i < calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)))))))))))) ; i++) {
        cout << left << " " << setw(3);
    }

    boucletableau31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compteur30(mois30,calcul_compteur31(mois31,calcul_compt_fevrier(annee, calcul_compteur31(mois31, calcul_jours(annee)+1))))))))))));
}
