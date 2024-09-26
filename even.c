#include<stdio.h>
int main()
{
    int n ,sum_even=0,sum_odd=0,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum_even=sum_even+i;
        }
        else
        {
            
            sum_odd=sum_odd+i;
        }
    }
    printf("Even sum is %d odd sum is %d",sum_even,sum_odd);
    return 0;
}