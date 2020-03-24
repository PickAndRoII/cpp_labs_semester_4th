#pragma once
#include <iomanip>

//klasa reprezentujaca numery id
class NumerId{
public:
//konstruktor klasy NumerId
    NumerId(int x) 
    : m_id(x){}
    //destruktor
    int numId() const ;
private:
    int m_id;
};


int NumerId::numId() const{
    return m_id;
}

//globalna funkcja umozliwiajaca wypisywanie obiektow NumerId
std::ostream &operator<<(std::ostream& o, const NumerId& obj){
    o<<"<"<<std::setw(6)<<std::setfill('0')<<obj.numId()<<">";
    return o;
}