#include<stdio.h>
int main()
{
    int att,marks;

    printf("Enter Attendence : ");
    scanf("%d",&att);
    printf("Enter Marks : ");
    scanf("%d",&marks);
    if(att>=75 && marks>75)
    {
        printf("\nGrade : A");
    }
    else if(att>=75 && marks>65)
    {
        printf("\nGrade : B");
    }
    else if(att>=75 && marks>55)
    {
        printf("\nGrade : C");
    }
    else
    {
        printf("\nFailed !!");
    }

}