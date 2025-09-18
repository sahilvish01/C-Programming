// Q)  A 
    // B C
    // D E F
    // G H I J

#include<stdio.h>
int main()
{
    int c=65; //for small a to z - c=97
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c ",c++);
        }
        printf("\n");
    }
}