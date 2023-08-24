#include<stdio.h>

int sum_of_digits(int num)
{
    int sum = 0, rem;
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int sum = sum_of_digits(num);
    printf("Sum of digits of number %d: %d\n", num, sum);
    
    return 0;
}