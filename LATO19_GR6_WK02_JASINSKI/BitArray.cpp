#include "BitArray.h"
#include <iostream>

BitArray::BitArray(int ib, bool x ){
    bit = ib;
    rozmiar = ib/8 + 1;
    tab = new unsigned char[rozmiar];
    if(x){
        for(int i = 0; i<rozmiar; ++i)
            tab[i] = 255;
    }
    else{
        for(int i = 0; i<rozmiar; ++i)
            tab[i] = 0;
    }
}

BitArray::~BitArray(){
    delete [] tab;
}
Bit BitArray::operator[](int idx) const{
    int pozycja = idx/8;
    int pozycja2 = idx%8;
    return Bit(tab + pozycja, pozycja2);
}

void BitArray::print() const{
    
    for(int i = bit; i>0; i--){
        std::cout<<(*this)[i];
        if(i % 8 == 0) std::cout<<" <- "<<i<<" ";
    }
    std::cout<<" <-0";
    std::cout<<std::endl;
}