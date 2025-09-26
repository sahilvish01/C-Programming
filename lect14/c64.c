//Code independent
#include<stdio.h>
int main()
{
   int a[6]={1,3,-4,7,0,-9};
   int sum,k=3,max=0,b,i;
   int size=sizeof(a)/sizeof(a[0]);
   for(i=0;i<=size-k;i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum=sum+a[j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("MaxSum : %d",max);

}