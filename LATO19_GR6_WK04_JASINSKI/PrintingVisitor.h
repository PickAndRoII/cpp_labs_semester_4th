#pragma once
#include "Visitor.h"
#include "ElData.h"

//klasa wypisujaca wizytora dziedziczaca publicznie 
//po Visitor
class PrintingVisitor : public Visitor{
    public:
        //konstruktor domyslny klasy
        PrintingVisitor() = default;
        //funkcje wypisujace inty i floaty
        //ktore trzymamy w kontenerach
        void visit(const FloatData *);
        void visit(const IntData *);
        ~PrintingVisitor() = default;
   
};