#include <stdio.h>

int main()
{
    
    int a;
    printf("Enter the value for a: ");
    scanf("%d", &a);
    
    for(int i = 0; i < 32;i++)
    {
        if((a >> 31 - i) & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    return 0;
}

