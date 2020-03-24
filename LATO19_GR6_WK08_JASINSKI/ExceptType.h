#pragma once
#include <iostream>

class ObiektMiotajacy;


class ExceptType1{
public:
    ExceptType1() = default;
    ExceptType1(ObiektMiotajacy *p);
    void PrzedstawSie();
    ObiektMiotajacy *ptr = nullptr;

};

class ExceptType2{
public:
    ExceptType2() = default;
    ExceptType2(ObiektMiotajacy *p);
    void PrzedstawSie();
    ObiektMiotajacy *ptr = nullptr;

};

class ExceptType3 : public ExceptType1{
public:
    ExceptType3() = default;
    ExceptType3(ObiektMiotajacy *p);
    void PrzedstawSie();
    ObiektMiotajacy *ptr = nullptr;
    ~ExceptType3();

};

class ExceptType4 : public ExceptType2{
public:
    ExceptType4() = default;
    ExceptType4(ObiektMiotajacy *p);
    void PrzedstawSie();
    ObiektMiotajacy *ptr = nullptr;
    ~ExceptType4();
};