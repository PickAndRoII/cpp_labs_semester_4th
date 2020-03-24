#pragma once
#include "Pracownik.h"

//klasa Wozny dziedziczaca publicznie po klasie Pracownik
class Wozny : public Pracownik{
public:
    Wozny(std::string x) 
    : Osoba(x, "Wozny"), Pracownik(x, "Wozny"){}
private:
};