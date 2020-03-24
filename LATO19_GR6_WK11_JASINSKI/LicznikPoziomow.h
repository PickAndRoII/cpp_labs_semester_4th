#pragma once
#include <iostream>


// bardzo prosta klasa, ktora trzyma w zmiennej statycznej,
// na ktorym jestesmy pzoiomie
class LicznikPoziomow{
    public:
    LicznikPoziomow();
    ~LicznikPoziomow();

    private:
        static int m_licznik;
};
