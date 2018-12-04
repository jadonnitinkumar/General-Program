#include<stdio.h>
int main()
{
    float area,r,pi=3.14,cir;
    printf("enter the radious :");
    scanf("%f",&r);
    area = pi*r*r;
    cir = 2*pi*r;
    printf("the area of the circle is : %f\n",area);
    printf("the cir of the circle is : %f",cir);
    return 0;
}
