#ifndef FIFO_H
#define FIFO_H

#include "Pamiec.h"

class FIFO
{
public:
	FIFO(Pamiec pamiec);
	~FIFO() = default;
private:
	Pamiec pamiec;
};

#endif /*FIFO_H*/