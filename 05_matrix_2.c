//write a program to count number of positive, negative and zero elements from 3x3 matrix.


#include <stdio.h>

    int main(){
    int z[10][10],pos=0,neg=0,zero=0,i,j,m,n;

    printf("Enter the values of rows and coloumns in matrix: \n");
    scanf("%d %d",&m,&n);

    printf("Eenter the values of matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&z[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(z[i][j]<0)
            {
                neg++;
            }
            else if(z[i][j]==0)
            {
                zero++;
            }
            else
            {
                pos++;
            }
        }
    }

    printf("\nPositive Elements = %d \nNegative Elements = %d \nZero Elements = %d",pos,neg,zero);
    return 0;
    }