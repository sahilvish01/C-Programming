#include<stdio.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            if(i<j)
            {
                printf(" ");
                continue;
            }
            printf("*");
            

        }
        printf("\n");
    }
}