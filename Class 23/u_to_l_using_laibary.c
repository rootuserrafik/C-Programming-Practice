#include<stdio.h>
int main()
{

    char $lower, $upper;

    printf("Enter lowercase character \t:\t");
    scanf("%c", &$upper);
    $lower = tolower ($upper);
    printf("This is your LOWERCASE letter \t:\t%c\n", $lower);

}

