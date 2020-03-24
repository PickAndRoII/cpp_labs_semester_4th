#pragma once
#include "Pracownik.h"
#include "NumerId.h"
//klasa Dysaktyk dziedziczaca publicznie po klasie Pracownik
class Dydaktyk : public Pracownik{
public:
    //konstruktor klasy Dydaktyk
    Dydaktyk(std::string x, NumerId id) 
    : Osoba(x, "Dydaktyk"), Pracownik(x, "Dydaktyk"), m_id(id){}
    //funkcja wirtualna zwracajaca numer id
    NumerId numId() const;
private:
    NumerId m_id;
};

NumerId Dydaktyk::numId() const{
    return m_id;
}