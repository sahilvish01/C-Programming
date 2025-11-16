// Find uncommon element from the array 

#include<stdio.h>
int main()
{
    int a[5] = {4,5,3,4,5};

    int xor = 0,i;

    for(i=0; i < 5; i++)
    {
        xor=xor^a[i];
    }

    printf(" %d", xor);
}