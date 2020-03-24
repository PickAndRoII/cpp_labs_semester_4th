#include "InfoClass.h"
#include <iostream>

InfoClass::InfoClass(const std::string str){
    m_str = str;
    std::cout<<"++Tworze obiekt InfoClass: info = "<<m_str<<std::endl;
}

std::string InfoClass::info() const{
    return "info = "+m_str;
}

InfoClass::~InfoClass(){
    std::cout<<"++Usuwam obiekt InfoClass: info = "<<m_str<<std::endl;
}

std::string InfoClass::info(const std::string str){
        m_str=str;
        return m_str;
}


std::string InfoSuperClass::info() const{ 
    std::string y = std::to_string(m_liczba);
    std::string heh= "info = "+m_str+", num = "+y;
    return heh;
}