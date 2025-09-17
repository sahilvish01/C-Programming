#include<stdio.h>
int main()
{
    int num,i=2;
    printf("Enter number : ");
    scanf("%d",&num);
    while(i<=num)
    {
        if(num%i==0)
        {
            break;
        }
        i++;
    }
    if(i>num/2)
        printf("\nIt is a prime number");
    else
        printf("\nIt is not prime number");
}