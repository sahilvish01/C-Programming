#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n%d is an even number",n);
    }
    else
    {
        printf("\n%d is an odd number",n);
    }
}