#include "TRIAD.h"
#include <iostream>
using namespace std;
TRIAD::TRIAD()
{
	first = 0;
	secondH = 0;
	third = 0;
}
TRIAD::TRIAD(int first, int second, int third)
{
	this->first = first;
	this->secondH = second;
	this->third = third;
}
TRIAD::TRIAD(const TRIAD& other)
{
	this->first = other.first;
	this->secondH = other.secondH;
	this->third = other.third;
}
TRIAD& TRIAD:: operator = (const TRIAD& other)
{
	this->first = other.first;
	this->secondH = other.secondH;
	this->third = other.third;
	return *this;
}
TRIAD::~TRIAD(){}
void TRIAD::ShowTR()
{
	cout << "TRAD:\nfirst: " << first << "\nsecond: " << secondH << "\nthird: " << third << endl;
}
void TRIAD::setTRIAD(int first, int second, int third)
{
	this->first = first;
	this->secondH = second;
	this->third = third;
}
bool TRIAD:: operator == (const TRIAD& other)
{
	return this->first == other.first && this->secondH == other.secondH && this->third == other.third;
}
bool TRIAD:: operator != (const TRIAD& other)
{
	return !(this->first == other.first && this->secondH == other.secondH && this->third == other.third);
}
bool TRIAD:: operator < (const TRIAD& other)
{
	return this->first < other.first && this->secondH < other.secondH && this->third < other.third;
}
bool TRIAD:: operator > (const TRIAD& other)
{
	return this->first > other.first&& this->secondH > other.secondH&& this->third > other.third;
}
ostream& operator << (ostream& out, const TRIAD& other)
{
	return (out << other.first << '_' << other.secondH << "_" << other.third << endl);
}
istream& operator >> (istream& in, TRIAD& other)
{
	char ch;
	cout << "first:\t";
	in >> other.first;
	cout << "second:\t";
	in >> other.secondH;
	cout << "third:\t";
	in >> other.third;
	return in;
}