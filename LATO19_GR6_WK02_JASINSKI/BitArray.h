#pragma once
#include "Bit.h"

class BitArray{
    public:
        //konstruktr alkujacy pamiec na zoptymalizowana ilosc bitow, przydziela wartosci
        // true albo false kazdemu
        BitArray(int ib, bool x = false);
        //Destruktor obiektow BitArray
        ~BitArray();

        //Operator pozwalajacy wydobic jeden bit z bajtu i dzialania na nim
        Bit operator[](int idx) const;

        //funkcja wypisujaca
        void print() const;
    private:
        unsigned char *tab;
        int rozmiar;
        int bit;
};