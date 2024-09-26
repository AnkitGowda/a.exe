#include<stdio.h>
int main()
{
    int num,num1,rev=0,rem=0;
    printf("enter the number :");
    scanf("%d",&num);
    num1=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(num1==rev)
    {
        printf("it is a palindrome");
    }
    else{
        printf("its not a palindrome");
    }
}