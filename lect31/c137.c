// Check if the array is pelindrome or not

#include<stdio.h>

int pelindrome(int a[],int i,int j)
{
    if(i>=j)
    {
        return 1;
    }
    if(a[i] != a[j])
    {
        return 0;
    }
    return pelindrome(a,++i,--j);
}

int main()
{
    int a[5] = {1,2,3,2,1};

    int i = 0;
    int j = 4;

    int d = pelindrome(a,i,j);

    printf("%d",d);
}