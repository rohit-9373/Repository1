#include<iostream>
using namespace std;


class Employee
{
	int salary;
	int hours;
    public:

	void getinfo(int sal,int hr)
	{
		
		salary = sal;
		hours = hr;
	}
	void AddSal()
	{
		if (salary < 500)
			salary += 10;
	}
	void AddWork()
	{
		if (hours > 6)
			salary += 5;
	}
	void DisplaySalary()
	{
		cout << salary;
	}


};


int main()
{
	int num;
	int salary,hours;
	cout << "Enter the number of employees: ";
	cin >> num;
	Employee emp[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Please, enter the salary of employee: ";
		cin>>salary;
        cout << "Please, enter the number of hours: ";
		cin>>hours;
		emp[i].getinfo(salary,hours);
		emp[i].AddSal();
		emp[i].AddWork();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "\nThe final salary of employee "<<i<<" is:";
		emp[i].DisplaySalary();
	}
}
