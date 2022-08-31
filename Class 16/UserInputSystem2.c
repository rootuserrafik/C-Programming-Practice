/*
    Write a program that user input two number an print that.
*/
#include<stdio.h>
int main()
{

    int $user_input_num_1;
    int $user_input_num_2;
    int $user_input_num_3;
    int $user_input_num_4;

    printf("Enter your phone number:");
    scanf("%d",&$user_input_num_1);


    printf("Enter your pin number:");
    scanf("%d",&$user_input_num_2);

    printf("Are you sure? This is your phone number \t:\t%d\n",$user_input_num_1);
    printf("Are you sure? This is your Pin number \t:\t%d\n",$user_input_num_2);



    /*
        User two number input system
    */



    printf("Enter your two number:\t");
    scanf("%d %d" ,&$user_input_num_3 ,&$user_input_num_4);


    printf("Your number is \t%d:\t, :\t%d" ,$user_input_num_3 , $user_input_num_3);
}
