//
//  main.cpp
//  Lab2_3
//
//  Created by Marcin Ostolski on 02/04/2022.
//

#include <iostream>
#include "Pytania.h"

using namespace std;


int main(int argc, const char * argv[]) {
    Pytania p;
    unsigned int wynik;
    
    cout << "Quizz z pliku - OOP" << endl;
    p.ustalNumerPytania(1);
    p.wczytajZPliku();
    p.zadaj();
    p.badaj();
    cout << "pkt " << p.czytajWynik() << endl;
    wynik = p.czytajWynik();
    if(wynik==1)
        cout << "TAK\n";
    else
        cout << "NIE\n";
    return 0;
}




///Users/Ostol/Desktop/WSB-NLU/II_SEM/Programowanie_C++/Cwiczenia/Lab_2/Lab2_3/Lab2_3
