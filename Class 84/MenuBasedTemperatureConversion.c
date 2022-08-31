#include<stdio.h>
int main()
{
    int choice;
    float tamp, convaartedTamp;

    printf("Temperathuer Convarsion Menu\n");
    printf("1. Fahranheit To Celseius\n");
    printf("2. Celseius To Fahranheit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        {
            printf("Enter Fahranheit Digit \t:\t");
            scanf("%f",&tamp);

            convaartedTamp = (tamp-32)*1.8;
            printf("Your Tamperature Celseius is = %f",convaartedTamp);
            break;

        }
    case 2:
        {
            printf("Enter Celseius Digit \t:\t");
            scanf("%f",&tamp);

            convaartedTamp = (1.8*tamp)+32;
            printf("Your Tamperature Fahranheit is = %f",convaartedTamp);
            break;

        }
    default:
        {
            printf("Not correct menu");
        }

    }
}
