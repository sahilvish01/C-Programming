//Print Commons from two array

#include<stdio.h>
int main()
{
    int a[5]={2,4,6,8,13};
    int b[5]={4,1,3,6,13};
    int size=sizeof(a)/sizeof(a[0]);
    int i,j,k;
    for(i=0;i<size;i++)
    {
        int count=0;
        for(j=0;j<size;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
            
           
        }
        if(count>0)
        {
            printf("%d\n",a[i]);
        }
        
    }
}