#ifndef PAMIEC_H
#define PAMIEC_H

#include <vector>
#include "Ramka.h"

class Pamiec
{
public:
	Pamiec(std::vector<Ramka> v);
	~Pamiec();
private:
	std::vector<Ramka> ramki;
};

#endif /*PAMIEC_H*/