// Reverse

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hii";
    int ln=strlen(str);
    for (int i = ln-1;i>=0; i--)
    {
        printf("%c",str[i]);
    }
    
}