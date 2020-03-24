#include "pch.h"
#include "Trojkat.h"
#include <math.h>
#include <iostream>

void Trojkat::wypisz(std::ostream& os) const{
	os << "Trojkat o bokach: " << m_x << " " << m_y << " " << m_z << std::endl;
}

double Trojkat::polePow() const {
	double x = 0;
	x = (m_x + m_y + m_z) / 2;
	return (sqrt(x*(x - m_x)*(x - m_y)*(x - m_z)));
}

Ksztalt& Trojkat::operator++(int) {
	Trojkat& tmp = *this;
	m_x++;
	m_y++;
	m_z++;
	return tmp;
}

Ksztalt& Trojkat::operator++() {
	m_x++;
	m_y++;
	m_z++;
	return *this;
}

Trojkat::~Trojkat()
{
}
