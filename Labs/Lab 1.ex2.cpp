#include<iostream>
using namespace std;
int main()
{
	float len,lenInInches;

	cout << "Input a length in cm: ";
	cin >> len;

	lenInInches = len / 2.54;

	cout << "Length in inches: " << lenInInches << endl;

	return 0;
}
