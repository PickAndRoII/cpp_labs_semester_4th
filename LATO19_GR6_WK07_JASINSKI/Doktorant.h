#pragma once
#include "Student.h"
#include "Dydaktyk.h"
#include "NumerId.h"

//klasa Dysaktyk dziedziczaca publicznie po klasie Dydaktyk i student
class Doktorant : public Student, public Dydaktyk{
public:
    Doktorant(std::string x, NumerId id1, NumerId id2)
    : Osoba(x, "Doktorant"), Student(x, id2), Dydaktyk(x, id1)
    {}
    //funkcja zwracajaca numer id
    NumerId numId_nauczyciel();
    NumerId numId_uczen();
private:
};

NumerId Doktorant::numId_nauczyciel(){
    return Dydaktyk::numId();
}
    
NumerId Doktorant::numId_uczen(){
    return Student::numId();
}