#pragma once
#include "Ksztalt.h"
class Kwadrat : public Ksztalt
{
public:
	Kwadrat(float x) : m_x(x) {}
	void wypisz(std::ostream&) const;
	double polePow() const;
	Ksztalt& operator++(int);
	Ksztalt& operator++();
	~Kwadrat();
private:
	float m_x;
};

