#pragma once
#include <string>


//klasa przechowujaca stringa
class InfoClass{
    public:
    //konstruktor klasy InfoClass
        InfoClass(std::string str);
        //funkcja wypisujaca ktora nie przyjmuje argumentow
        virtual std::string info() const;
        //funkcja zmieniajaca skladnik string
        std::string info(std::string str);
        //destruktor klasy
        ~InfoClass();
    protected:
        std::string m_str;
};

class InfoSuperClass : public InfoClass{
    public:
        InfoSuperClass(std::string str, int liczba) : InfoClass(str), m_liczba(liczba){}
        std::string info() const;
    private:
        int m_liczba;
};