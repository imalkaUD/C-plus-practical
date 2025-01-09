//Write a C program to input marks of two subjects. Calculate and print the average of the two marks
#include<iostream>
using namespace std;
int main()
{
	//variable declaration
	int mark1,mark2,sum=0;
	float avg=0;
	
	//take user inputs
	cout<<"Enter mark 1: ";
	cin>>mark1;
	
	cout<<"Enter mark 2: ";
	cin>>mark2;
	
	//calculations
	sum = mark1 + mark2;
	avg = sum / 2.0;	
	
	//printing detail
	cout<<"Average is "<<avg<<endl;
	
	return 0;
	
}
