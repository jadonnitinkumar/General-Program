#include<stdio.h>
int main()
{
    int number,a,n,r=0;
    printf("Enter the Number for Reverse :");
    scanf("%d",&number);
    while(number>1)
    {
    a = number%10;
    r = r*10+a;
    number = number/10;
    }
    printf("The Reverse is :%d",r);
    return 0;
}
