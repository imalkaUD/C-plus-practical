/*
Write a C++ program to input the total price to be 
paid by a customer and calculate the discount 
according to the chart below.

Total Price		 Discount Rate
> 10000				 25%
10000 - 5000 		15%
5000 - 3000 		10%      */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float tot_price, discount;
	
	cout<< "Input total price: ";
	cin>>tot_price;
	
	if(tot_price > 10000)
	{
		discount = tot_price - (tot_price * (25 / 100.0));
		cout<<"Discount is "<<setiosflags(ios::fixed) <<setprecision(2)<<discount<<endl;
	}
	else if(tot_price <= 10000 && tot_price >5000)
	{
		discount = tot_price - (tot_price * (25 / 100.0));
		cout<<"Discount is " <<setw(8) <<setiosflags(ios::fixed) <<setprecision(2)<<discount<<endl;
	}
	else if(tot_price <= 5000  && tot_price >=3000)
	{
		discount = tot_price - (tot_price * (25 / 100.0));
		cout<<"Discount is " <<setw(7) <<setiosflags(ios::fixed) <<setprecision(2)<<discount<<endl;
	}	
	
	return 0;	
}
