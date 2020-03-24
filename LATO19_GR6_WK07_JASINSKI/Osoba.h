#pragma once

//klasa podstawowa dla innych klas
class Osoba{
public:
    //konstruktor klasy osoba
    Osoba(std::string x, std::string kto) 
    : m_dane(x), m_kto(kto){}
    //funkcja wypisujaca imie i nazwisko na ekran
    virtual void wypiszOsobe(std::ostream& o) const;
    //wirtualny destruktor umozliwiajacy dziedziczenie
    virtual ~Osoba() = default;

protected:
    std::string m_dane;
    std::string m_kto;
   
};

void Osoba::wypiszOsobe(std::ostream& o)const {
    o<<m_dane<<" - "<<m_kto;
}

std::ostream &operator<<(std::ostream& o, const Osoba& obj){
    obj.wypiszOsobe(o);
    return o;
};