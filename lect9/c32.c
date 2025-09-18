// Q)  0
//     0 1
//     0 1 2

#include<stdio.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}