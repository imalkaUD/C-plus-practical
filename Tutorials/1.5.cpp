//Convert the C program given below which converts a length given in cm to inches to a C++ program
#include<iostream>
using namespace std;
int main() 
{
	float cm,inches;
	
	cout<<"Enter the length in cm: ";
	cin>>cm;
	
	inches = cm / 2.54;
	
	cout<<"Enter the length in inches: "<<inches;
	
	return 0;
	
}
