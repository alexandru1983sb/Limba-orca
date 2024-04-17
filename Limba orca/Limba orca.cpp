// Limba orca.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Ai 2 prieteni ce vorbesc orca intre ei.
Limba orca sunt aceleasi cuvinte ca in limba romana doar ca se ia prima
litera a fiecarui cuvant si se pune la sfarsitul cuvantului
in urma caruia se adauga un ay
drum= rumday
Input:
Un string ce reprezinta o propozite in limba romana
Output:
Un string ce reprezinta traducerea in limba orca
*/

#include <cstring> 
#include <string> 
#include <iostream> 
#include <vector>


void spatiu(int);
void afisare();
void cuvinte();
void prelucrare_cuvant();
void cuvant_propozitie();


int main()
{
    afisare();
    cuvinte();
    prelucrare_cuvant();
    cuvant_propozitie();
}

void spatiu(int nr_spatii) {
    int i;
    for ( i = 0; i <= nr_spatii; i++) {
        std::cout << " ";
    }
}

void afisare() {
    std::cout << std::endl << std::endl;
    spatiu(25);
    std::cout << "Welcome dear user!\n";
    spatiu(24);
    for (int i = 0; i < 19; i++) {
        char linie = 205;
        std::cout << linie;
    }
    std::cout << std::endl << std::endl;
}

void cuvinte() {
    char sageti_inainte = 175;
    char sageti_inapoi = 174;
    std::cout << sageti_inainte;
    std::cout << " Adaugati un cuvant.\n";
    std::cout << sageti_inapoi;
}

void prelucrare_cuvant() {
    char linie = 196;
    std::cout << " Traducere in limba 'Orca'.\n";
    std::cout << std::endl;
    for (int i = 0; i < 60; i++) {
        std::cout << linie;
    }
    std::cout << std::endl << std::endl;;
}

void cuvant_propozitie() {
   
    std::string cuvant;
    std::string ay = "ay";

    std::cout << "Adaugati cuvantul : ";
    std::getline(std::cin, cuvant);
    std::cout << "" << std::endl;
    std::cout << "Dimensiunea cuvantului este : " << cuvant.size() << " Pozitii.\n\n";
    
    int nr_spatii = 0;
    for (int i = 0; i < cuvant.size(); i ++ ) {
        //std::cout << cuvant[i];

        if (cuvant[i] == 32) {
            nr_spatii += 1;
        }
    }
    
        std::string temp;
        std::cout << "Cuvantul in limba 'Orca' este : ";
        for (int i = 1; i < cuvant.size(); i++) {
            temp += cuvant[i];
        }   
        temp = temp + cuvant[0] + ay;
        std::cout << temp;
        std::cout << "" << std::endl;
}


