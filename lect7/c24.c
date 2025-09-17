#include<stdio.h>
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    int b=n;
    int product=1;
    for(;n!=0;n=n/10)
    {
        int last=n%10;
        product=product*last;
    }
    printf("\nProduct : %d",product);
}