#pragma once
#include "Osoba.h"
#include "NumerId.h"

//klasa Student dziedziczaca wirtualnie po klasie Osoba
class Student : public virtual Osoba{
public:
    Student(std::string x, NumerId id)
    : Osoba(x, "Student"), m_id(id){}
    //funkcja wirtualna zwracajaca numer id
    NumerId numId() const;
private:
    NumerId m_id;
};

NumerId Student::numId() const{
    return m_id;
}