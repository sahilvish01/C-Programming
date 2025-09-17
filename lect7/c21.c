//Use of break

#include<stdio.h>
int main()
{
    int a=5,i;
    for(i=0;i<=a;i++)
    {
        if(i==4)
            break;
        printf("\t%d",i);
    }
}