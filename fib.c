#include<stdio.h>
int main()
{
    int i,n=0,f0=0,f1=1,a;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=f0;
        f0=f1;
        f1=a+f1;
        printf("%d",a);

    }
    return 0;
}