#include<stdio.h>

int add(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n + add(n-1);
	}
}

int main()
{
	int n;
	printf("Enter value for n: ");
	scanf("%d", &n);
	int sum = add(n);
	printf("Factorial of %d numbers = %d\n", n, sum);
}