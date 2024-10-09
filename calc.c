#include <stdio.h>

int main(void)
{
    printf("Hello wlecome to my simple calculator :)!");
    printf("-----------------------------------------------");

    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Division");
    printf("\n");

    int menuop;
    printf("What option would you like to choose?: ");
    scanf("%d", &menuop);

    float value1, value2;
    printf("What two values would you like to use?: ");
    scanf("%f", &value1);
    scanf("%f", &value2);



    return 0;

}