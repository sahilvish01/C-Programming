//WAP to print fabonacci series

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int next=0;
    for(int i=0;i<n;i++)
    {
        printf("%d\t",next);
        a=b;
        b=next;
        next=a+b;
    }

}