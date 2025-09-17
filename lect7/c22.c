//Use of continue
#include<stdio.h>
int main()
{
    int a=5;
    for(int i=0;i<=a;i++)
    {
        if(i%2==0)
            continue;
        printf("\t%d",i);
    }
}