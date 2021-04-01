#include <iostream>
#include "TIME.h"
using namespace std;

int main()
{
    system("chcp 1251>nul");
    TRIAD A, B(0, 0, 0);
    A = B;
    cout << A;
    cout << "Введите TRIAD A:\n";
    int a, b, c;
    cout << "first: "; cin >> a;
    cout << "second: "; cin >> b;
    cout << "third: "; cin >> c;
    A.setTRIAD(a, b, c);
    cout << "\nВведите TRIAD B:\n";
    cin >> B;
    cout << "A == B\t" << (A == B) << endl;
    cout << "A > B\t" << (A > B) << endl;
    TIME A1, A2;
    cout << "Ведите 1й временной промежуток A1 \n";
    cin >> A1;
    A1.set();
    cout << "Ведите 2й временной промежуток A2 \n";
    cin >> A2;
    A2.set();
    A1.show();
    A2.show();
    cout << "(A1 == A2) " << (A1 == A2)<<endl;
    cout << "(A1 > A2) " << (A1 > A2)<<endl;
    cout << "(A1 <= A2) " << (A1 <= A2) << endl;
    return 0;
}

