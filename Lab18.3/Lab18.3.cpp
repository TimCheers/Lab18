#include "Money.h"
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	int a = -1, b = -1, c = -1, d = -1;
	char chl;
	Money C, D(20, 30);
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
	cout << endl << D - 1.5;
	return 0;
}