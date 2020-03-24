#include "LicznikPoziomow.h"

int LicznikPoziomow::m_licznik = 0;

LicznikPoziomow::LicznikPoziomow(){
        m_licznik++;
        std::cout<<"Rozpoczynamy poziom numer "<<m_licznik<<"."<<std::endl;
    }
LicznikPoziomow::~LicznikPoziomow(){
        std::cout<<"Konczymy poziom numer  "<<m_licznik<<"."<<std::endl;
        m_licznik--;
    }

 
