//Write a program  to Palindeome Words string...

#include <stdio.h>
#include<string.h>

int main()
{
    char z[10];
    int i,len,flag=0;

    printf("Enter the string:\n");
    gets(z);
    len=strlen(z);

    for(i=0;i<len/2;i++)
    {
        if(z[i]!=z[len-1-i])
        {
            flag = 1;
            break;     //if condition is right loop is over beause we use break...
        }
    }

    if(flag==0)
    {
        printf("Palindrome String.");
    }
    else
    {
        printf("Non Palindrome String.");
    }

    return 0;
}