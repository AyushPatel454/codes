//write a program to copy a string to the end of another...

#include <stdio.h>
#include<string.h>

    int main(){
        char z[10],z1[10];

        puts("Enter the alue of first string:\n");
        gets(z);

        puts("Enter the value of second sting:\n"); 
        gets(z1);

        strcpy(z,z1); //for copy z1 string and put in z...
        printf("The final string is %s",z);


    return 0;
    }