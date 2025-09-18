// Q)  1 
//     2 3
//     4 5 6

#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum=sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
}