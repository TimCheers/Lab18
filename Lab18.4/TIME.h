#pragma once
#include "TRIAD.h"
class TIME: public TRIAD
{
public:
	TIME();
	bool operator == (const TIME& other);
	bool operator != (const TIME& other);
	bool operator < (const TIME& other);
	bool operator > (const TIME& other);
	bool operator <= (const TIME& other);
	bool operator >= (const TIME& other);
private:
	int second;
	int minute;
	int hour;
};

