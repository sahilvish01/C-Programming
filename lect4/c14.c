#include<stdio.h>
int main()
{
    int rup,ch;
    printf("Enter rupee : ");
    scanf("%d",&rup);
    printf("\nChoices : ");
    printf("\n Enter 1 : Doller");
    printf("\n Enter 2 : Euro");
    printf("\n Enter 3 : Canadian Doller");
    printf("\n Enter 4 : Saudi Riyal");
    printf("\nEnter choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 : printf("\nIn doller : %.2f",(float)rup/87.85);
                    break;
        case 2 : printf("\nIn Euro : %.2f",(float)rup/102.39);
                    break;
        case 3 : printf("\nIn Canadian Doller : %.2f",(float)rup/63.71);
                    break;
        case 4 : printf("\nIn Saudi Riyal : %.2f",(float)rup/23.85);
                    break;
        default : printf("\nInvalid Input");
        
    }
}