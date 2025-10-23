// Call by value 

#include<stdio.h>
int sum(int x,int y)
{
    x=2,y=2;
    return x+y;
}
int main()
{
    int x=10,y=20;
    printf("Sum : %d",sum(x,y));
    printf("\nSum : %d",x+y);
}