//for finding digit

#include<stdio.h>
int main()
{
    int i=0,n,count;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    for(i=0;n!=0;i++)
    {
        count++;
        n=n/10;
    }
    printf("\nlength : %d",count);
}