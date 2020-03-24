#include "Malenstwo.h"
int Malenstwo::m_count = 0;
Malenstwo* Malenstwo::m_p = nullptr;

Malenstwo::Malenstwo(int val){
    m_val = val;
    std::cout<<"Konstrukcja malenstwa: wart = "<<m_val<<std::endl;
}

void* Malenstwo::operator new(size_t size){
    Malenstwo *p;
    
    if (m_count == 0){
        m_p = ::new Malenstwo[100];
        p = m_p;
        std::cout<<"Alokuje jeden obiekt: 1 ("<<size<<" bajtow)"<<std::endl;
        std::cout<<"Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow"<<std::endl;
        m_count++;
        }
    else{
        p = m_p + m_count;
        m_count++;
        std::cout<<"Alokuje jeden obiekt: 1 ("<<size<<" bajtow)"<<std::endl;
    }
    
    return p;
}

void* Malenstwo::operator new[](size_t size){
    Malenstwo *p;
    
    if (m_count == 0){
        // m_p = ::new Malenstwo[100];
        // p = m_p;
        // std::cout<<"Alokuje jeden obiekt: 1 ("<<size<<" bajtow)"<<std::endl;
        // std::cout<<"Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow"<<std::endl;
        // m_count++;
        }
    else{
        std::cout<<"Alokuje tablice [] o rozmiarze5 ("<<size<<" bajtow)"<<std::endl;
        
    }
    
    return p;
}

void Malenstwo::operator delete(void *wsk){
    delete wsk;
}

int& Malenstwo::wartosc(){
    return m_val;
}