// Print N to 1

#include<stdio.h>

int sum(int a)
{
    if(a==0)
    {
        return 0;
    }

    printf("%d\t",a);
    
    sum(a-1);
}


int main()
{
    sum(10);
}