#include "Bit.h"

Bit::Bit(unsigned char *tab, int poz){
    b_poz = poz;
    b_tab = tab;
}
        
Bit& Bit::operator=(bool val){
    int npos = b_poz;
   if(val){
       *b_tab |= 1 << npos;
   }
   else{
        *b_tab &= ~(1 << npos);
   }
   return *this;
}
        
Bit::operator bool(){
    if(b_tab[b_poz])
        return true;
    else
        return false;
}