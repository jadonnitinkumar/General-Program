#include<stdio.h>
int main()
{
    int  n, i;
    printf("enter a number for know the table :");
    scanf("%d",&n);
    for(i=1 ; i<=10 ; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}
