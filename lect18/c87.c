// Find the Maximum from two 2d arrays

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{0,10,2},{56,23,1},{9,2,5}};
    int max1=0;
    int max2=0;
    int min1=0;
    int min2=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(max1<a[i][j])
           {
                max1=a[i][j];
           } 
           if(max2<b[i][j]) 
           {
                max2=b[i][j];
           }
        }
    }
    if(max1<max2)
    {
        max1=max2;
    }
    printf("Max = %d",max1);
}