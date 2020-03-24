#pragma once
#include "InfoClass.h"

//klasa ktora reprezentuje zmyslny wskaznik, ktory
class InfoSmartPtr {
    public:
        //konstruktor klasy 
        InfoSmartPtr(InfoClass* cl);
        //operator * dla klasy InfoSmartPtr
        InfoClass operator*() const;
        //operator -> dla klasy InfoSmartPtr
        InfoClass* operator->() const;
        //operator = dla klasy InfoSmartPtr
        InfoSmartPtr& operator=(const InfoSmartPtr& isp);
        //destruktor klasy InfoSmartPtr
        ~InfoSmartPtr();
    private:
        InfoClass *m_ptr;
        int* licznik;
};

