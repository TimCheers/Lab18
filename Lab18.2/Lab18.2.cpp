#include <iostream>
#include <string>
using namespace std;
class staff
{
public:
	staff(string name, string post, double pay);
	staff();
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
staff::staff(string name, string post, double pay)
{
	this->name = name;
	this->pay = pay;
	this->post = post;
} 
staff::staff()
{
}
staff::~staff()
{
}

int main()
{
    system("chcp 1251>nul");
}

