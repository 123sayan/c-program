#include <stdio.h>
int main()
{
    char input;
    float kmsTomile = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundsTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input charactar.q to quit\n 1.kms to miles\n 2.inches to foot\n 3.cms to inches\n 4.pounds to kgs\n 5.inches to meter\n ");
        scanf(" %c", &input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program.....");
            goto end;
            break;

        case '1':
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * kmsTomile;
            printf("%f kms is equal to %f miles\n ", first, second);
            break;

        case '2':
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot\n ", first, second);
            break;

        case '3':
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%f cms is equal to %f inches\n, first , second");
            break;

        case '4':
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * poundsTokgs;
            printf("%f pounds is equal to %f kgs\n , first , second ");
            break;

        case '5':
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchesTometers;
            printf("%f inches is equal to %f meters\n , first , second ");
            break;

        default:
            break;
        }
    end:
        return 0;
    }
}