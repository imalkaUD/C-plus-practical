/*Convert the C program given below which calculates an employee's salary to a C++ program.
Input Type, Salary, otHours
Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700  */
#include<iostream>
using namespace std;
int main() 
{
	double salary, netSalary;
 	int etype, otHrs, otRate;
 	
 	cout<<"Enter employee type: ";
 	cin>>etype;
 	
 	cout<<"Enter salary: ";
 	cin>>salary;
 	
 	cout<<"Enter otHrs: ";
 	cin>>otHrs;
 	
 	switch (etype) {
 		case 1 :
 			otRate = 1000;
 			break;
 		case 2 :
 			otRate = 1500;
 			break;
 		default :
 			otRate = 1700;
 			break;
 	}
 	
 	netSalary = salary + (otHrs * otRate);
 	
 	cout<<"Net Salary is "<<netSalary<<endl;
 	
 	return 0;
 	
}
