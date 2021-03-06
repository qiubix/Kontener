#include "Wezel.h"
#include <iostream>
using namespace std;
Wezel::Wezel(int wartosc)
{
    nastepny = NULL;
    poprzedni = NULL;
    this->wartosc=wartosc;
}

Wezel::~Wezel()
{
    if(poprzedni==NULL || nastepny==NULL)
        return;
    poprzedni->nastepny=nastepny;
    nastepny->poprzedni=poprzedni;
    if(nastepny==poprzedni)
    {
        nastepny->nastepny=NULL;
        poprzedni->poprzedni=NULL;
    }
}

int Wezel::pokaz_wartosc()
{
    return wartosc;
}
ostream& operator<< (ostream& strumien, Wezel& wezel)
 {
   strumien<<" wartosc elementu wynosi "<<wezel.pokaz_wartosc()<<endl;

   return strumien;
 }
