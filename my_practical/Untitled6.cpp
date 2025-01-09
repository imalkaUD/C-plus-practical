
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	cout<<setw(12)<<9.87654321<<endl;      //specific spaces   - spaces & (only 7 numbers with a dot)
	cout<<setiosflags(ios::fixed)<<9.87654381<<endl;     //floating point number with decimal   - only  6 decimals
	cout<<setprecision(5)<<9.87654321<<endl;      //all numbers printed(if we give a more number,output will add zeros behind the numbers
	
	//_ _ _ _ _9.87654
	//9.876544
    //9.87654321
	
	return 0;
}
