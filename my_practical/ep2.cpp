#pragma once
class Employee
{
private:
		int empno;
		char name[20];
		double basicSal;
		double allownce;
		double salary;
		double otAmount;
		double otRate;
		double otHrs;
public:
		void inputDetails();
		void assignDetails(int pempno,const char pname[], double pbasicSal);
		void seAllownce(double allownce);
		void setOtDetails(double potRate, double potHrs);
		void calSal();
		void printPaySlip();

};
