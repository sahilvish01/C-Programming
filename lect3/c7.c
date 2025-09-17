#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<0)
        printf("\n%d is negative number",n);
    else if(n==0)
    {
        printf("\n%d is neither negative nor positve",n);
    }
    else
    {
        printf("\n%d is positive number",n);
    }
}