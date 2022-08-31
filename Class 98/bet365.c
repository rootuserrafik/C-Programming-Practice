/*
    winner
----------------------------

    ran =
    rate,price,cost,money,value,charge =
    my cost/budget =
    all balls =
    single ball
    wite ball
    no ball
*/
#include<stdio.h>
int main()
{
        int manu_Choice, manu_Over_Rate, manu_Ball_Rate;


        printf("1. Per Over Rate\n");
        printf("2. Per Ball Rate\n\n");
        printf("Enter Your Item Number : ");
        scanf("%d",&manu_Choice);

       switch(manu_Choice)
       {
            case 1 :
            {
                float over_Ran,Over_Rate,Over_Budget,total;
                printf("Enter Ran\t:\t");
                scanf("%f",&over_Ran);

                printf("Enter Cost\t:\t");
                scanf("%f",&Over_Rate);

                printf("Enter Budget\t:\t");
                scanf("%f",&Over_Budget);

                printf("Your Ran Is %.2f.\n",over_Ran);

                total = Over_Rate*Over_Budget;
                printf("My Budget is : %.2f.\n",Over_Budget);
                printf("My Earning is : %.2f x %.2f = %.2f.",Over_Rate,Over_Budget,total);

                break;
            }
            case 2 :
            {
                printf("This is Two.\n");
                break;
            }
            default:
            {
                printf("This is wrong key.\n.\n");
            }
       }
}
