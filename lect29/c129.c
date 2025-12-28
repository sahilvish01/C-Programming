// Find Missing number

//Galat hai, check - 29 / 10 / 25


#include<stdio.h>
int main()
{
    int i;
    int a[5] = {1,2,4,5};

    for(i=0;i<4;i++)
    {
        if(a[i] + 1 == a[i]^1)
        {
            break;
        }
    }
    printf("%d",a[i]);
}