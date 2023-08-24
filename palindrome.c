#include<stdio.h>

int palindrome(int num)
{
    int rev_num = 0, rem;
    while(num > 0)
    {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        num = num/10;
    }
    return rev_num;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int rev_num = palindrome(num);
    if(rev_num == num)
    {
        printf("Given number is palindrome\n");
    }
    else
    {
        printf("Given number is not palindrome\n");
    }
    
    return 0;
}
