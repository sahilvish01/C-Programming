// Check if array is sorted in ascending order or not

#include<stdio.h>
int check(int a[],int i,int j,int n)
{
    if(i==n)
    {
        return 1;
    }
    if(a[i]>=a[j])
    {
        return 0;
    }
    return check(a,++i,++j,n);
}


int main()
{
    int a[5] = {1,2,3,4,345};

    int d = check(a,0,4,4);

    printf("%d",d);
}