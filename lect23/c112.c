// Find Kth max and kth min

#include<stdio.h>
int main()
{
    int arr[]={4,5,1,0,7,8};
    int i,n,j;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d largest element is : %d and %d minimmum element is : %d",n,arr[size-n],n,arr[n-1]);
}