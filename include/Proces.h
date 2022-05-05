#ifndef PROCES_H
#define PROCES_H

#include <vector>
#include "Strona.h"

class Proces
{
public:
	Proces();
	~Proces();
	void generatePages(int n);
	void generatePages();
private:
	std::vector<Strona> odwolania;	
};

#endif /*PROCES_H*/