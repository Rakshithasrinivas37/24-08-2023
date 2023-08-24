#include<stdio.h>
#include<string.h>

void rev_str(char *string)
{
    int len = strlen(string);
    int j = len - 1;
    for(int i = 0;i <= len/2;i++)
    {
        char str = string[i];
        string[i] = string[j];
        string[j] = str;
        j--;
    }
    string[len] = '\0';
    printf("Reversed string is %s\n", string);
}

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    rev_str(str);
}