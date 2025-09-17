//WAP to print the prime number till n

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter : ");
    scanf("%d",&n);
    if(n>2)
    {
        for(i=2;i<=n;i++)
        {
             for(j=2;j<=i/2;j++)
             {
                  if(i%j==0)
                     break;
            }
            if(j>i/2)
                printf("\n%d",i);
        }
    }
}