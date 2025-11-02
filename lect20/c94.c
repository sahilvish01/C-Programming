// String

#include<stdio.h>
int main()
{
    char str[]="hii";
    int i;
    printf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        printf("\n%c",str[i]);
    }
}