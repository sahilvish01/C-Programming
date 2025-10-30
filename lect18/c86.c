// Store the 2D array into the 1D array

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3;
    int n=3;
    int b[m*n];
    for(int i=0,k=0;k<m*n;i++)
    {
        for(int j=0;j<3;j++,k++)
        {
            b[k]=a[i][j];
        }
    }
    for(int i=0;i<m*n;i++)
    {
        printf("\nb[%d]=%d",i,b[i]);
    }

}