#include<stdio.h>
int main()
{
    float centigrade , fahrenheit;
    printf("Enter the temperatute in centigrade :");
    scanf("%f",&centigrade);
    fahrenheit = (1.8*centigrade)+32;
    printf("The temperature in fahrenheit is : %f",fahrenheit);
    return 0;
}
