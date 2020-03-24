#pragma once
#include "AttColor.h"
#include <string>

class MyLine : public AttColor{
public:
    MyLine(char znak, int x, Option kolor) : m_znak(znak), m_liczba(x), AttColor(kolor){}
    void rawString();
    void setChar(char znak);
    Option getColor();
    ~MyLine() = default;
private:
    char m_znak;
    int m_liczba;
};

std::string rawString(){
    return std::string(m_liczba, m_znak);
}

void setChar(char znak){
    m_znak = znak;
}