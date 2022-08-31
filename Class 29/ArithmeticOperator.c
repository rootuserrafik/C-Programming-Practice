#include<stdio.h>
int main()
{

    int num1, num2, result;
    float avg;
    printf("Enter Two Number \t:\t ");
    scanf("%d %d",&num1, &num2);

    result = num1 + num2;
    printf("This sum is \t : %d\n",result);

    result = num1 - num2;
    printf("This Sub is \t : %d\n",result);

    result = num1 * num2;
    printf("This Remainder is \t : %d\n",result);

    avg = (float)result/2; // type casting
    printf("This Div is \t : %.2f\n",avg);


    return 0;

}
