#include<stdio.h>

int product_of_digits(int num)
{
    int product = 1, rem;
    while(num > 0)
    {
        rem = num % 10;
        product = product * rem;
        num = num/10;
    }
    return product;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int product = product_of_digits(num);
    printf("Product of digits of number %d: %d\n", num, product);
    
    return 0;
}