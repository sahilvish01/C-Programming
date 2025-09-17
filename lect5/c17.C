//WAP to check pelindrome
#include<stdio.h>
int main()
{
    int a,num,res=0;
    printf("Enter number : ");
    scanf("%d",&a);
    num=a;
    while (num!=0)
    {
        int last = num%10;
        res=res*10+last;
        num=num/10;
    }
    printf("%d",res);
    if(a==res)
        printf("\nIt is Pelindrome");
    else
        printf("\nIt is not Pelindrome");

}