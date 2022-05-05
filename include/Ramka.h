#ifndef RAMKA_H
#define RAMKA_H

#include <vector>
#include "Strona.h"

class Ramka
{
public:
	Ramka();
	~Ramka();
	Strona getStrona() const;
	void setStrona(Strona);
	/*Do algorytmu drugiej szansy*/
	std::vector<Strona> getMemo() const;
	Strona get0LifeMemo();
	void updateMemo(Strona);
private:
	Strona obecna_strona;
	std::vector<Strona> memo;
};

#endif /*RAMKA_H*/