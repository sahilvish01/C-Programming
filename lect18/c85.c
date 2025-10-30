#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0;i<3;i++)
    {
        int rowsum=0,colsum=0;
        for(int j=0;j<3;j++)
        {
            rowsum=rowsum+a[i][j];
            colsum=colsum+a[j][i];
        }
        printf("\n\nSum of row %d : %d ",i+1,rowsum);
        printf("\nSum of column %d : %d ",i+1,colsum);
    }
}