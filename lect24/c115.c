// Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter Size : ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));



    printf("Enter %d elements :\n ",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Element : ");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}