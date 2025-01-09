#include<iostream>
#include"Employee.h"
using namespace std;

int main()
{

	Employee emp1;

	emp1.assignDetails(10, "Wimal", 50000);
	emp1.seAllownce(5000);
	emp1.setOtDetails(1000,5);

	emp1.inputDetails();
	emp1.calSal();
	emp1.printPaySlip();



}
