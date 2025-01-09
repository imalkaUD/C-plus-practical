#include<iostream>
using namespace std;

void findSumAvg(int x, int y, int &sum, float &avg);

int main()
{
	int num1, num2,total;
	float average;
	
	cout<<"Input two numbers :";
	cin>>num1 >> num2;
	
	findSumAvg(num1, num2, total, average);
	
	cout<<"Sum is : "<< total << endl;
	cout<<"Average is : "<< average <<endl;
	
	return 0;
	
}
void findSumAvg(int x, int y, int &sum, float &avg)
{
	sum = x + y;
	avg = sum / 2.0;
}
