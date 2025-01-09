/*
Display number 1000,900,800,700,… 100
Using a while loop, do while loop and a for loop 
within the same program   */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num1 = 1000;
	
	while(num1 != 0){
		cout<<setw(4)<<num1 ;
		num1 = num1 - 100;
	
	}
	
	cout<<endl;
	int num2 = 1000;
	do
	{
		cout<<setw(4)<< num2;
		num2 = num2 - 100;	
		
	}while(num2 != 0);
	
	cout<<endl;
	for(int num3 = 1000; num3 >=100; num3=num3-100)
	{
		cout<<setw(4)<< num3;
	}
	
	return 0;
}
