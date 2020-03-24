#pragma once
//klasa dzieki ktorej mozemy dzialac na pojedynczym bicie 
//w naszej tablicy
class Bit{
    public:
        //konstruktor klasy Bit
        Bit(unsigned char *tab, int poz);

        //operator przypisania dla klasy Bit, przyjmujacy
        //wartosc bool i zwracajacy referencje do Bit
        Bit& operator=(bool val);

        //operator bool zwracajacy wiadomosc, czy bit to 1 czy 0
        operator bool();
    private:
        int b_poz;
        unsigned char *b_tab; 
};