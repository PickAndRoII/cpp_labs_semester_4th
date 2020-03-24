#pragma once
#include "Visitor.h"
#include "ElData.h"

//klasa sumujaca wizytora dziedziczaca publicznie 
//po Visitor
class AccumulatingVisitor : public Visitor{ 
    public:
        //konstruktor domyslny klasy
        AccumulatingVisitor() = default;
        //funkcje sumujace inty i floaty
        //ktore trzymamy w kontenerach
        void visit(const FloatData *);
        void visit(const IntData *);
        //funkcja wypisujaca sume
        float getTotalSum() const;
        ~AccumulatingVisitor() = default;
    private:
        float m_suma = 0.0;
};