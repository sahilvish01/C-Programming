#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5]={-8,4,5,-4,9};
    int i,j,maxSum=INT_MIN,currSum;
    for(i=0;i<5;i++)
    {
        currSum=0;
        for(j=i;j<5;j++)
        {
            currSum=currSum+a[j];
            
            if(maxSum<currSum)
            {
                maxSum=currSum;
            }
        }
    }
    printf("Max=%d",maxSum);
}