#include <stdio.h>

int main()
{
    int first = 0, second = 1;
    int n, fib;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(int i = 0;i <= n;i++)
    {
        fib = first + second;
        printf("%d ", first);
        first = second;
        second = fib;
    }
    printf("\n");

    return 0;
}
