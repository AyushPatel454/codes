//Write a program to add 2x2 matrix..

#include <stdio.h>

    int main(){
    int a[10][10],b[10][10],i,j,m,n,sum;

     printf("Enter the values of rows and coloumns in matrix: \n");
    scanf("%d %d",&m,&n);

    printf("Eenter the values of first matrix a = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("Eenter the values of second matrix b = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of two matrix is a + b =\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d   ",sum);
        }
        printf("\n");
    }
    return 0;
    }