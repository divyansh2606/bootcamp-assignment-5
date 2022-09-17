#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no");
    scanf("%d",&n);
    for(i=0;n>i;n--)
    {
        printf("%d\t",(2*n));
    }
    return 0;
}

