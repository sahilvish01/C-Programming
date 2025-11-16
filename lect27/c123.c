//27 October


//Sir ka code jyada optimize hai


//Ye wala wrong hai

#include<stdio.h>
int main()
{
    // int a[5]={6,3,0,9,1};
    int a[5]={8,4,6,1,0};
    int i,j;
    int size = sizeof(a)/sizeof(int);
    int curr_profit,max_profit=0;

    for(i=0;i<size;i++)
    {
        curr_profit=0;
        for(j=0;j<size-1;j++)
        {
            
            if(a[i]<a[j])
            {
                curr_profit = a[j] - a[i];
                if(max_profit<curr_profit)
                {
                    max_profit=curr_profit;
                }
            }

        }
    }
    printf("%d ",max_profit);
}
