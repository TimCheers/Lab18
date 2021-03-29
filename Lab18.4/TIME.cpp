#include "TIME.h"
#include <iostream>
using namespace std;
TIME::TIME()
{
	this->second = first;
	this->minute = second;
	this->hour = third;
}
bool TIME:: operator == (const TIME& other)
{
	return this->second == other.second && this->minute == other.minute && this->hour == other.hour;
}
bool TIME:: operator != (const TIME& other)
{
	return !(this->second == other.second && this->minute == other.minute && this->hour == other.hour);
}
bool TIME:: operator < (const TIME& other)
{
	if (this->hour < other.hour)
	{
		return true;
	}
	else
	{
		if (this->hour == other.hour)
		{
			if (this->minute < other.minute)
			{
				return true;
			}
			else
			{
				if (this->minute == other.minute)
				{
					if (this->second < other.second)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
}