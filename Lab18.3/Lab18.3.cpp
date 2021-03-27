#include <iostream>
#include <fstream>
using namespace std;


class Money
{
public:
	Money()
	{
		R = 0;
		K = 0;
	}
	Money(unsigned long int R, unsigned int K)
	{
		this->K = K;
		this->R = R;
	}
	Money(const Money& other)
	{
		this->K = other.K;
		this->R = other.R;
	}
	~Money()
	{
	}
	void show()
	{
		cout << "Сумма: " << R << '.' << K << endl;
	}
	///////////////////////////////////////////////////////////////
	Money& operator = (const Money& other)
	{
		this->K = other.K;
		this->R = other.R;
		return *this;
	}
	bool operator == (const Money& other)
	{
		return this->R == other.R && this->K == other.K;
	}
	bool operator != (const Money& other)
	{
		return !(this->R == other.R && this->K == other.K);
	}
	Money operator +(const Money& other)
	{
		Money tmp;
		int tmpK = 0, tmpR=0;
		tmp.K = this->K + other.K;
		if (tmp.K >= 100)
		{
			tmpR = tmp.K / 100;
			tmpK = tmp.K - tmpR * 100;
			tmp.K = tmpK;
		}
		tmp.R = this->R + other.R + tmpR;
		return tmp;
	}
	Money operator -(const Money& other)
	{
		Money tmp;
		int tmpK = 0, tmpR = 0;
		tmp.R = this->R - other.R;
		tmp.K = this->K - other.K;
		if (this->K< other.K)
		{
			tmp.R--;
			tmp.K = other.K - this->K;
		}
		return tmp;
	}
	friend ostream& operator<<(ostream& out, const Money& other);
	friend istream& operator >> (istream& in, Money& other);
	///////////////////////////////////////////////////////////////
private:
	unsigned long int R;
	unsigned int K;
};

ostream& operator << (ostream& out, const Money& other)
{
	return (out << other.R << '.' << other.K);
}
istream& operator >> (istream& in,  Money& other)
{
	char ch;
	in >> other.R >> ch >> other.K;
	return in;
}





int main()
{
	system("chcp 1251>nul");
	int a=-1, b=-1, c=-1, d=-1;
	char chl;
	Money C,D;
	cout << "Введите сумму A:";
	while (a <= 0 && b <= 0)
	{
		cin >> a >> chl >> b;
		if (a <= 0 && b <= 0)
		{
			cout << "\nОшибка!\n";
		}
	}
	Money A(a, b);
	Money B(A);
	cout << "В - копия А\n";
	cout << "Введите сумму С:";
	cin >> C;
	cout << "Введите сумму D:";
	cin >> D;
	cout << "Сумма C и D: " << C + D << endl;
	cout << "(C + D) - A = " << (C + D) - A << endl;
	cout << "A == B: " << (A == B) << endl;
	cout << "A != B: " << (A != B) << endl;
	cout << "Операция D = C = B = A:\n";
	D = C = B = A;
	cout << "Сумма D: " << D;
	return 0;
}

