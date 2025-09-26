//Sliding window
#include<stdio.h>
int main()
{
    int a[6]={1,3,-4,7,0,-9};
    //int a[6]={-1,-3,-4,-7,-9,-9};
    int winsum=0,maxsum,k=3;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<k;i++)
    {
        winsum=winsum+a[i];
       
    }
    maxsum=winsum;
    for(int i=1;i<size-k;i++)
    {
        winsum=winsum-a[i-1]+a[i+k-1];
        if(winsum>maxsum)
        {
            maxsum=winsum;
        }

    }
    printf("Maxsum : %d",maxsum);

}