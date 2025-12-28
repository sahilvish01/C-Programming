// First Approach : Galat hai 

// #include<stdio.h>

// int sum(int a[])
// {
//     int size = sizeof(a) / sizeof(int);

//     if(size == 1)
//     {
//         return a[size-1];

//     }

//     size=size-2;

//     return a[size + 1] + sum(a-1);

// }


// int main()
// {

//     int a[3] = {1,2,3};

//     int d = sum(a);

//     printf("%d",d);

// }



// Second Approach : 

// #include<stdio.h>

// int sum(int a[],int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     return a[n-1] + sum(a,n-1);
// }


// int main()
// {

//     int a[3] = {1,2,3};

//     int n = sizeof(a)/sizeof(int);
    
//     printf("Sum of array : %d",sum(a,n));
// }



// Third Approach : (Best)

#include<stdio.h>

int sum(int a[],int n)
{
    if(n==1)
    {
        return a[n-1];
    }
    return a[n-1] + sum(a,n-1);
}


int main()
{

    int a[3] = {1,2,3};

    int n = sizeof(a)/sizeof(int);
    
    printf("Sum of array : %d",sum(a,n));
}