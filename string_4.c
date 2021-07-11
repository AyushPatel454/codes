//Write a program to count string vowels...

#include <stdio.h>
#include<string.h>

int main()
{
    char z[10];
    int i=0,count=0;

     puts("Enter the alue of first string:\n");
     gets(z);

     while(z[i]!='\0')      // for(i=0;z[i]!='\0';i++)
     {
         if(z[i]=='a' || z[i]=='A' || z[i]=='e' || z[i]=='E' || z[i]=='i' || z[i]=='I' || z[i]=='o' || z[i]=='O' || z[i]=='u' || z[i]=='U')
         {
             count++;
         }
         i++;
     }
    
    printf("The number of wovels are %d",count);

    return 0;

}