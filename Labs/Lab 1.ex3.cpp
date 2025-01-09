#include<iostream>
#include<stdio.h>
int main()
{
	int num,i,answer;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= 12; i++)
	{
		answer = num * i;
		printf("%d*%d=%d\n",num,i,answer);

	}

	return 0;
}
