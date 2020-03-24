#include "AccumulatingVisitor.h"
#include<iostream>



void AccumulatingVisitor::visit(const FloatData *x) {
    m_suma = m_suma + x->getFloat();
}

void AccumulatingVisitor::visit(const IntData *x){
    m_suma = m_suma + x->get();
}

float AccumulatingVisitor::getTotalSum() const{
    return m_suma;
}