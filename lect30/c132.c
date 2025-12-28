// Calculate the power of any number

#include<stdio.h>

// First Approach : 

// int power(int x,int y)
// {
//     if(y==0)
//     {
//         return 1;
//     }

//     return x*power(x,y-1);
// }

// int main()
// {

//     printf("%d",power(3,4));

// }

// Second Approach :

int power(int x,int y)
{
    if(y==1)
    {
        return x;
    }

    return x*power(x,y-1);
}

int main()
{

    printf("%d",power(2,3));

}