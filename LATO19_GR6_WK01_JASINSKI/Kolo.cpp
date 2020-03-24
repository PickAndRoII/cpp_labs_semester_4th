#include "pch.h"
#include "Kolo.h"
#include <iostream>

void Kolo::wypisz(std::ostream& os) const{
	os << "Kolo o promieniu: " << m_r << std::endl;
}

double Kolo::polePow() const {
	return 3.1415*m_r*m_r;
}

Ksztalt& Kolo::operator++(int) {
	Kolo& tmp = *this;
	m_r++;
	return tmp;
}

Ksztalt& Kolo::operator++() {
	m_r++;
	return *this;
}

Kolo::~Kolo()
{
}
