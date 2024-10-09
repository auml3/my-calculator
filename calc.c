#include <stdio.h>

int main(void)
{
    printf("     Hello welcome to my simple calculator :)!\n");
    printf("✩-----------------------------------------------✩\n");
    printf("\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\n");

    int menuop;
    printf("What option would you like to choose?: ");
    scanf("%d", &menuop);

    float value1, value2;
    printf("What two values would you like to use?: ");
    scanf("%f", &value1);
    scanf("%f", &value2);

    switch(menuop)
    {
        case 1:
            printf("Your result is %f\n", value1+value2);
            break;
        case 2:
            printf("Your result is %f\n", value1-value2);
            break;
        case 3:
            printf("Your result is %f\n", value1*value2);
            break;
        case 4:
            printf("Your result is %f\n", value1/value2);
            break;            
    }
printf("✩-----------------------------------------------✩\n");


    return 0;

}