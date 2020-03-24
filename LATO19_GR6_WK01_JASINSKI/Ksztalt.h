#pragma once
#include<iostream>
class Ksztalt
{
public:
	Ksztalt();
	static void wypisz(const Ksztalt&);
	virtual void wypisz(std::ostream&) const = 0;
	virtual Ksztalt& operator++(int) = 0;
	virtual Ksztalt& operator++() = 0;
	virtual double polePow() const = 0;
	virtual ~Ksztalt();
};

