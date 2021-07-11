//Write a program to find maximum element from 1-D array.


#include <stdio.h>

    int main(){
    int z[10],max,n,position,i;

    printf("Enter the numbef of elements in array.\n");
    scanf("%d",&n);

    printf("Enter the value of array elements.\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }

    max=z[0];

    for(i=1;i<n;i++)
    {
        if(z[i]>max)
        {
            max=z[i];
            position=i+1;
        }
    }

    printf("The maximum elements is %d and it is stored at position %d.",max,position);
    return 0;
    }