#include "ExceptType.h"
#include "ObiektMiotajacy.h"


void ExceptType1::PrzedstawSie(){
    std::cout<<"Nazywam sie Except1"<<std::endl;
}

void ExceptType2::PrzedstawSie(){
    std::cout<<"Nazywam sie Except2"<<std::endl;
}

void ExceptType3::PrzedstawSie(){
    std::cout<<"Nazywam sie Except3"<<std::endl;  
}

void ExceptType4::PrzedstawSie(){
   std::cout<<"Nazywam sie Except4"<<std::endl;  
}



ExceptType1::ExceptType1(ObiektMiotajacy *p){
    ptr = p;
}

ExceptType2::ExceptType2(ObiektMiotajacy *p){
ptr = p;
}

ExceptType3::ExceptType3(ObiektMiotajacy *p){
ptr = p;
}

ExceptType4::ExceptType4(ObiektMiotajacy *p){
ptr = p;
}

ExceptType4::~ExceptType4(){
    delete ptr;
}

ExceptType3::~ExceptType3(){
    delete ptr;
}