#pragma once
#include "Ksztalt.h"
class Trojkat : public Ksztalt
{
public:
	Trojkat(float x, float y, float z) : m_x(x), m_y(y), m_z(z) {}
	void wypisz(std::ostream&) const;
	double polePow() const;
	Ksztalt& operator++(int);
	Ksztalt& operator++();
	~Trojkat();
private:
	float m_x, m_y, m_z;
};

