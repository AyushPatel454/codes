//Write a program to compare string...

#include <stdio.h>
#include<string.h>

    int main(){
        char z[10],z1[10];

        puts("Enter the alue of first string:\n");
        gets(z);

        puts("Enter the value of second sting:\n"); 
        gets(z1);

       if(strcmp(z,z1)==0)
       {
           printf("The two string are equal.");
       }
       else{
           printf("The two string are not equal.");
       }


    return 0;
    }