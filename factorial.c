#include<stdio.h>

int fact(int n)
{
	if(n < 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

int main()
{
	int n;
	printf("Enter value for n: ");
	scanf("%d", &n);
	int factorial = fact(n);
	printf("Factorial of %d = %d\n", n, factorial);
}
