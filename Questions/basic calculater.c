#include<stdio.h>
int main()
{
    int n1,n2,opt;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    for( ; ; )
    {
    printf("\n1-addition\n2-substraction\n3-multiplication\n4-division\n5-modalas\n\n");
    scanf("\n%d",&opt);
        switch(opt)
        {
        case 1 :printf("Answer = %d\n",n1+n2);
        break;
        case 2 :printf("Answer = %d\n",n1-n2);
        break;
        case 3 :printf("Answer = %d\n",n1*n2);
        break;
        case 4 :
        if(n2==0)
        {
            printf("oops divided by zero\n");
        }
        else
        {
            printf("Answer = %d\n",n1/n2);
        }
        break;
        case 5 :printf("Answer = %d\n",n1%n2);
        break;
        }
    }
    return 0;
}
