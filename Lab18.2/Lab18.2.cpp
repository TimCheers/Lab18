#include <iostream>
#include <string>
using namespace std;
class staff
{
public:
    staff();
    staff(string name, string post, double pay)
    {
        this->name = name;
        this->pay = pay;
        this->post = post;
    }
    staff(const staff& Staff)
    {
        this->name = Staff.name;
        this->post = Staff.post;
        this->pay = Staff.pay;
    }
    ~staff();
    void setStaff(string name, string post, double pay)
    {
        this->name = name;
        this->pay = pay;
        this->post = post;
    }
    void showS()
    {
        cout << "\nname: " << name << "\npay: " << pay << "\npost: " << post << endl;
    }
private:
    string name;
    string post;
    double pay;
};
staff::staff()
{
    cout << "Вызвался конструктор по умолчанию" << endl;
}
staff::~staff()
{
    cout << "Вызвался деструктор" << endl;
}

int main()
{
    system("chcp 1251>nul");
    staff A("LOX", "Уборщик", 15.15);
    staff B;
    B.setStaff("Валера", "Продавец", 10.1);
    staff C(A);
    cout << "\n------------------------------------------\n";
    A.showS();
    cout << "\n------------------------------------------\n";
    B.showS();
    cout << "\n------------------------------------------\n";
    C.showS();
    cout << "\n------------------------------------------\n";

    return 0;
}