// Print 1 to N

#include<stdio.h>

int sum (int a)
{
    if(a==0)
    {
        return 0;
    }
    sum(a-1);

    printf("%d\t",a);
}



int main()
{
    sum(10);
}