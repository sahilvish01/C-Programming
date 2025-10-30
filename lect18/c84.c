#include<stdio.h>
int main()
{
    int a[3][3]={{7,8,9},{1,2,3},{4,5,6}};
    int min=a[0][0],max=a[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(min>a[i][j])
                min=a[i][j];
            if(max<a[i][j])
                max=a[i][j];
        }
    }
    printf("Max = %d",max);
    printf("\nMin = %d",min);
}