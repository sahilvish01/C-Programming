#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("Factorial : %d",fact);
}