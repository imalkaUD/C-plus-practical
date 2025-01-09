#include<iostream>
using namespace std;

int searchkey(int number[], int key);
int findMax(int number[]);
int main()
{
	int number[10];
	int key, index,maximum;

	cout << "Enter the number: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> number[i];
	}

	cout << "Enter the key: ";
	cin >> key;

	index = searchkey(number, key);

	if (index == -1)
	{
		cout << "Not found"<<endl;
	}
	else
	{
		cout << "Element is found at element "<<index<<endl;
	}


	maximum = findMax(number);
	cout << "Max" << maximum << endl;

	return 0;

}
int searchkey(int number[], int key)
{

	for(int i=0 ; i<10 ; i++)
	{
		if (number[i] == key)
		{
			return i;
		}
		
	}
	return -1;
	
}
int findMax(int number[])
{
	int max = number[0];

	for (int j = 0; j < 10; j++)
	{
		if (number[j] >= max)
		{
			max = number[j];
		}
	}
	return max;
}

