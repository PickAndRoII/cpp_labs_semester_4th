#include "pch.h"
#include "Kwadrat.h"
#include <iostream>



void Kwadrat::wypisz(std::ostream& os) const{
	os << "Kwadrat o boku: " << m_x << std::endl;
}

double Kwadrat::polePow() const {
	return m_x * m_x;
}

Ksztalt& Kwadrat::operator++(int) {
	Kwadrat& tmp = *this;
	m_x++;
	return tmp;
}

Ksztalt& Kwadrat::operator++() {
	m_x++;
	return *this;
}

Kwadrat::~Kwadrat()
{
}

