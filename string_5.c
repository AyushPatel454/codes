#include <stdio.h>
#include<string.h>

int main()
{
    char z[10];
    int i,loc,c;

    printf("Enter the string:\n");
    gets(z);

    printf("How many char to extract: \n");
    scanf("%d",&c);

    printf("Enter the starting location:\n");
    scanf("%d",&loc);

    for(i=loc;i<loc+c;i++)
    {
        printf("%c",z[i]);
    }

    return 0;
}