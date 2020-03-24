#pragma once
#include "Data.h"



//deklaracje klas zeby klasa Visitor wiedziala o ich istnieniu
class FloatData;
class IntData;

//klasa abstrakcyjna visitor ktora przedstawia wizytora
class Visitor{
    public:
        //konstruktor domyslny klasy Visitor
        Visitor() = default;
        //czysto wirtualne funkcje przyjmujace za argumenty 
        //wskazniki na klasy trzymajace inty albo floaty
        virtual void visit(const FloatData *) = 0;
        virtual void visit(const IntData *) = 0;
        //virtualny destruktor dla brakow wyciekow pamieci
        virtual ~Visitor() = default;


};