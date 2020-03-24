#pragma once
#include "Osoba.h"
//klasa Pracownik dziedziczaca wirtualnie po klasie Osoba
class Pracownik: public virtual Osoba{
public:
    Pracownik(std::string x, std::string kto) 
    : Osoba(x, kto){}
private:
};