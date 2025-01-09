/*
Write a C program to calculate the sum of the numbers from 1 to n. 
Where n is a keyboard input.
e.g.
n -> 100
sum = 1+2+3+... + 99+100 = 5050
n -> 1-
sum = 1+2+3+.. +10 = 55    */
#include<iostream>
using namespace std;
int main()
{
	int num,i,sum=0;
	
	cout<<"Enter the number: ";
	cin>>num;
	
	for(i=1 ; i<=num ; i++)
	{
		sum = sum + num;
		
	}
	
	cout<<"Sum is "<<sum<<endl;
	
	return 0;
}

