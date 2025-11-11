// Find the frequency of each character present in the string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="abcb";
    int ln = strlen(s);
    char freq[256]={0};
    for(int i=0;i<ln;i++)
    {
        freq[s[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        {
            printf("%c : %d\n",i,freq[i]);
        }

    }
}