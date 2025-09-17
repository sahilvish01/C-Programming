#include<stdio.h>
int main()
{
    int a[2],i;
    for(i=0;i<2;i++)
    {
        printf("Enter input No.%d : ",i+1);
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
        printf("%d is greater",a[0]);
    }
    else if(a[0]<a[1])
    {
            printf("%d is greater",a[1]);
    }
    else
    {
        printf("Both are equal"); 
    }
}