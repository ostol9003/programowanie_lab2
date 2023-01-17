//
//  Pytania.h
//  Lab2_3
//
//  Created by Marcin Ostolski on 02/04/2022.
//

#ifndef Pytania_h
#define Pytania_h

using namespace std;

class Pytania
{
    int nr;
    string tresc;
    string odpa,odpb,odpc;
    char odpGracza;
    char odPrawidlowa;
    unsigned int punkt;
    
public:
    Pytania();  // konstruktor bez argumentow
    Pytania(int nr);
    void wczytajZPliku(string nazwa_pliku="dane.txt");
    void zadaj ();
    void badaj();
    unsigned int czytajWynik();
    void ustalNumerPytania(int nr);
};

#endif /* Pytania_h */
