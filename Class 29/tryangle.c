
// Write a programe that print triangle
#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter Base\t:\t");
    scanf("%f",&base);

    printf("Enter Height\t:\t");
    scanf("%f",&height);

    area = (float)1/2 * base * height;
    printf("Triangle Result is \t:\t%.2f\n",area);


    return 0;
}
