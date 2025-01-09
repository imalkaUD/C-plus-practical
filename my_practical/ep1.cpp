#include "Employee.h"
#include<iostream>
#include<cstring>
using namespace std;
void Employee::inputDetails()
{
	cout << "Input Employee No: ";
	cin >> empno;

	cout << "Input Name: ";
	cin >> name;

	cout << "Input Basic Salary: ";
	cin >> basicSal;

	cout << "Input Allownce: ";
	cin >> allownce;

	cout << "Input OtRate: ";
	cin >> otRate;

	cout << "Input OtHrs: ";
	cin >> otHrs;
}
void Employee::assignDetails(int pempno, const char pname[], double pbasicSal)
{
	empno = pempno;
	strcpy_s  (name, pname);
	basicSal = pbasicSal;
}
void Employee::seAllownce(double pallownce)
{
	allownce = pallownce;
}
void Employee::setOtDetails(double potRate, double potHrs)
{
	otRate = potRate;
	otHrs = potHrs;
}
void Employee::calSal()
{
	salary = basicSal + allownce + (otRate * otHrs);
}
void Employee::printPaySlip()
{
	cout << "---------------------------------------------" << endl;
	cout << "Emp No \t:" << empno << endl;
	cout << "Name\t:" << name << endl;
	cout << "Basic Salary\t:" << basicSal << endl;
	cout << "Allownce\t:" << allownce << endl;
	cout << "OT Amount\t:" << otRate * otHrs << endl;
	cout << "Net Salary\t:" << salary << endl;
	cout << "---------------------------------------------" << endl;
}
