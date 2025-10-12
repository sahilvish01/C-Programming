#include<stdio.h>
int main()
{
    int a[5]={1,-2,3,-4,6};
    int maxsum=0;
    int size=sizeof(a)/sizeof(a[0]);
    int i,k,j;

    for(i=0,k=3;i<=size-k;i++)
    {
        int currsum=0;
        for(j=i;j<i+k;j++)
        {

            currsum=currsum+a[j];
            printf("%d\t",currsum);
        }
        printf("\n");
        
        if(maxsum<currsum)
        {
            maxsum=currsum;
        }
    }
    printf("Max=%d",maxsum);
}