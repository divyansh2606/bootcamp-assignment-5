#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",(2*i)-1);
    }
    return 0;
}
