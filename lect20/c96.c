//store the string in new array

#include<stdio.h>
int main()
{
    char str[]="hii";
    char newstr[10];
    int i=0;
    for (i = 0;str[i]!='\0'; i++)
    {
        newstr[i]=str[i];
    }
    newstr[i]='\0';

    printf("%s",newstr);

}