#include <stdio.h>

    int main(){
    int z[10],i,j,temp,n;

    printf("Enter the number of elements to be sorted. \n");
    scanf("%d",&n);

    printf("Enter Array values. \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }

    printf("Array vqalues are...\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",z[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(z[i]>z[j])   //swapping logic...
            {
                temp=z[j];
                z[j]=z[i];
                z[i]=temp;
            }
        }
    }

    printf("Ascending order of Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",z[i]);
    }
    return 0;
    }