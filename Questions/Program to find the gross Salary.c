#include<stdio.h>
int main()
{
    int basicsalary,ta,da,totalsalary;
    printf("Enter the Basic salary :");
    scanf("%d",&basicsalary);
    ta = (basicsalary *10)/100;
    da = (basicsalary*12)/100;
    totalsalary = ta + da + basicsalary;
    printf("Total salary is : %d",totalsalary);
    return 0;
}
