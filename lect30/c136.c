// Print Factorial of any number 

#include<stdio.h>

int fact(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }

    return a*fact(a-1);

}

int main()
{

    printf("%d\t",fact(7));
}