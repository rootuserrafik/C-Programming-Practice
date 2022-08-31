#include<stdio.h>
int main()
{

    char $lower, $upper;

    printf("Enter lowercase character \t:\t");
    scanf("%c", &$lower);
    $upper = toupper ($lower);
    printf("This is your UPERCASE letter \t:\t%c\n", $upper);

}
