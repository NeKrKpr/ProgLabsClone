#include <stdio.h>

int main(void)
{
    //Task 1
    int appt;
    printf("Pls, input int number: \n");
    scanf("%i", &appt);
    int avg = ((appt > 87) & (appt < 100)) ? 1 : 0;
    switch (avg)
    {
        case '1':
            printf("Данное число попадает в заданный диапазон значений! \n");
        default:
            printf("Данное число не попадает в заданный диапазон значений! \n");
    }

    //Task 2
    int bias;
    printf("Pls, input int number: \n");
    scanf("%i", &bias);
    bias = (bias >> 10) & 1;
    printf("%i\n", bias);
}
