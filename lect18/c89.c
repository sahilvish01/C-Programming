// Rotate a matrix by 90 degree

#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int m=2,n=3;
    int b[n][m];
    for(int i=0;i<3;i++)
    {
        for(int j=1;j>=0;j--)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}