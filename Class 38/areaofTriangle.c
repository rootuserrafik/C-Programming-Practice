#include<stdio.h>
int main()
{

    double a, b, c, s, area;

    printf("Enter 3 Values\t:\t");
    scanf("%lf\t %lf\t %lf",&a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt (s*(s-a)*(s-b)*(s-c));

    printf("Area of Triangle \t:\t%.2lf",area);
}
