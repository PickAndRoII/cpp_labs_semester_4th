#pragma once
#include "Ksztalt.h"
class Kolo : public Ksztalt
{
public:
	Kolo(float r) : m_r(r) {}
	void wypisz(std::ostream&) const;
	double polePow() const;
	Ksztalt& operator++(int);
	Ksztalt& operator++();
	~Kolo();
private:
	float m_r;
};

