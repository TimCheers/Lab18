#include "TRIAD.h"
#include <iostream>
using namespace std;
TRIAD::TRIAD()
{
	first = 0;
	second = 0;
	third = 0;
}
TRIAD::TRIAD(int first, int second, int third)
{
	this->first = first;
	this->second = second;
	this->third = third;
}
TRIAD::~TRIAD(){}
void TRIAD::ShowTR()
{
	cout << "TRAD:\nfirst: " << first << "\nsecond: " << second << "\nthird: " << third << endl;
}
void TRIAD::setTRIAD(int first, int second, int third)
{
	this->first = first;
	this->second = second;
	this->third = third;
}
bool TRIAD:: operator == (const TRIAD& other)
{
	return this->first == other.first && this->second == other.second && this->third == other.third;
}
bool TRIAD:: operator != (const TRIAD& other)
{
	return !(this->first == other.first && this->second == other.second && this->third == other.third);
}
bool TRIAD:: operator < (const TRIAD& other)
{
	return this->first < other.first && this->second < other.second && this->third < other.third;
}
bool TRIAD:: operator > (const TRIAD& other)
{
	return this->first > other.first&& this->second > other.second&& this->third > other.third;
}