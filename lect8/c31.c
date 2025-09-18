#include<stdio.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            printf(" ");
        }
        for(int k=2;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}