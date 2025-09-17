#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nExamaple : +,-,*,/");
    printf("Enter Choice : ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+' : printf("\nThe addition of two number : %d",a+b);
                    break;
        case '-' : printf("\nThe addition of two number : %d",a-b);
                    break;
        case '*' : printf("\nThe addition of two number : %d",a*b);
                    break;
        case '/' : if(b!=0)
                        printf("\nThe addition of two number : %.2f",(float)a/b);
                    else 
                        printf("\nCannot devide by zero");
                    break;

        default : printf("\nInvalid Input");

    }
}