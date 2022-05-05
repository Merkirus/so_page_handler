#ifndef STRONA_H
#define STRONA_H

#include <vector>

class Strona
{
public:
	Strona();
	~Strona()=default;
	int getNumerStrony() const;
	void setNumerStrony();
private:
	unsigned numer_strony;
	static unsigned count;
};

#endif /*STRONA_H*/