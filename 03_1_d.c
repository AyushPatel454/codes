//Write a program to find number of odd and even elements from 1-D array.


#include <stdio.h>

    int main(){
    int z[10],n,i,even=0,odd=0;

    printf("Enter the numbef of elements in array.\n");
    scanf("%d",&n);

    printf("Enter the value of array elements.\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }


    for(i=0;i<n;i++)
    {
        if(z[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("The total number of even elements are %d and odd elements are %d.",even,odd);
    return 0;
    }