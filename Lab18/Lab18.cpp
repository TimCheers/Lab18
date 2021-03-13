#include <iostream>
#include <cmath>
using namespace std;

class CL
{
public:
	void setCL(double first, double second)
	{
		this->first = first;
		this->second = second;
	}
	void readCL()
	{
		cout << "Введите first: ";
		cin >> first;
		cout << "\nВведите second: : ";
		cin >> second;
	}
	void Show()
	{
		cout << "\nfirst:\t" << first << "\nsecond:\t" << second << endl << endl;
	}
	double distance(double x1,double y1)
	{
		double d;
		d = sqrt(abs(pow((first-x1),2)+pow((second-y1),2)));
		return d;
	}
private:
	double first;
	double second;
};
CL make_CL(double x,double y)
{
	CL A;
	cout << "1) setClass\n2) readClass\n" << endl;
	int f = 0;
	while (f != 1 && f != 2)
	{
		cin >> f;
		if (f != 1 && f != 2)
		{
			cout << "Неверное зачение!\n";
		}
	}
	if (f==1)
	{
		A.setCL(x, y);
	}
	else
	{
		A.readCL();
	}
	return A;
}


int main()
{
	system("chcp 1251>nul");
	double x, y;
	cout << "Введите first: ";
	cin >> x;
	cout << "\nВведите second: : ";
	cin >> y;
	CL B;
	B = make_CL(x, y);
	B.Show();
	cout << "Введите X1 и Y1:\n";
	double x1, y1;
	cout << "X1: ";
	cin >> x1;
	cout << "Y1: ";
	cin >> y1;
	cout << "Растояние: " << B.distance(x1, y1) << endl;
	return 0;
}


