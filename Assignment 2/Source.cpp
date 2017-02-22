#include <iostream>
#include "Employer.h"
using namespace std;
int main()
{
	Employee employee1{ "Jeffrey Meza's ", 700 };
	Employee employee2{ "Travis Tran's ", 200 };
	cout << "Employee 1: " << employee1.getName() << "salary is $" << employee1.getsalary();
	cout << "\nEmployee 2: " << employee2.getName() << "salary is $" << employee2.getsalary();
	cout << "\nEnter the percentage you will raise: ";
	int add;
	cin >> add;
	cout << "Now there will be a "<<add<<"% raise! ";
	employee1.addSalary(add);
	employee2.addSalary(add);
	cout << "\nEmployee 1: " << employee1.getName() << "salary is $" << employee1.getsalary();
	cout << "\nEmployee 2: " << employee2.getName() << "salary is $" << employee2.getsalary()<<endl;
}