#include "InfoSmartPtr.h"

InfoSmartPtr::InfoSmartPtr(InfoClass* ic){
    m_ptr = ic;
    licznik = new int(1);
}

InfoClass InfoSmartPtr::operator*() const{
    return *m_ptr;
}

InfoClass* InfoSmartPtr::operator->() const{
    return m_ptr;
}

InfoSmartPtr& InfoSmartPtr::operator=(const InfoSmartPtr& isp){
    licznik = isp.licznik;
    licznik++;
    m_ptr = isp.m_ptr;
    return *this;
}

InfoSmartPtr::~InfoSmartPtr(){
   
}