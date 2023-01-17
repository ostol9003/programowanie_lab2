//
//  pytania.cpp
//  Lab2_3
//
//  Created by Marcin Ostolski on 02/04/2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdlib.h>


#include "Pytania.h"

using namespace std;

//void mojaFunkcja(int x)
//{
//    cout << 2*x;
//}

Pytania::Pytania(int nrP){
    nr = nrP;
}
Pytania::Pytania()
{
    nr = 1;
    
}
Pytania::Pytania()
{
    cout << "To ja destruktor!";
}

void Pytania::wczytajZPliku(string nazwa_pliku)
{
    fstream plik;
    string linia;
    
    plik.open(nazwa_pliku, ios::in);
    if(!plik.good())
    {
        cout << "Blad otwarcia pliku!\n";
        exit(EXIT_FAILURE);
    }
    
    string snr = to_string(nr);
    snr = "["+snr+"]";
    
    while(getline(plik,linia))
    {
        //cout << "TUTAJ " << linia;

        if (linia == snr)
        {
            getline(plik,linia);
            tresc = linia;
            getline(plik,linia);
            odpa = linia;
            getline(plik,linia);
            odpb = linia;
            getline(plik,linia);
            odpc = linia;
            getline(plik,linia);
            
            remove(linia.begin(), linia.end(), ' ');
            odPrawidlowa = linia[0];
        }
    }
}


void Pytania::zadaj ()
{
    cout << "Pytanie nr: " << nr << endl;
    cout << "Tresc: " << tresc << endl;
    cout << "A: " << odpa << endl;
    cout << "B: " << odpb << endl;
    cout << "C: " << odpc << endl;
    do {
        cout << "Twoja odpowiedz: " << flush;
        cin >> odpGracza;
        //if (islaph(x))
        odpGracza = tolower(odpGracza);
        //cout << "Litera gracza: " << odpGracza << endl;
        if (odpGracza >= 'a' && odpGracza <= 'c' )
            break;
        else
            puts("Bledna Odpowiedz");
    }while(true);
}

void Pytania::badaj()
{
    if(odPrawidlowa == odpGracza)
        punkt = 1;
    else
        punkt = 0;
}
unsigned int Pytania::czytajWynik(){
    return punkt;
}
void Pytania::ustalNumerPytania(int nr){
    this->nr=nr;
}
