#include <iostream>
long Factorial(int no);
long nCr(int n, int r);
int main() 
{
 	int n, r;
 	
 	std::cout << "Enter a value for n ";
 	std::cin >> n;
 	
 	std::cout << "Enter a value for r ";
 	std::cin >> r;
 	
 	std::cout << "nCr = ";
 	std::cout << nCr(n,r);
 	std::cout << std::endl;
 	
 	return 0;
}
long Factorial(int no)
{
	return no;
}
long nCr(int n, int r)
{
	int nCr = n!/ r!(n-r)! ;
	return nCr;

}
