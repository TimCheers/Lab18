#pragma once
class TRIAD
{
public:
	TRIAD(int first, int second, int third);
	TRIAD();
	~TRIAD();
	void ShowTR();
	void setTRIAD(int first, int second, int third);
	bool operator == (const TRIAD& other);
	bool operator != (const TRIAD& other);
	bool operator < (const TRIAD& other);
	bool operator > (const TRIAD& other);
private:
	int first;
	int second;
	int third;
};

