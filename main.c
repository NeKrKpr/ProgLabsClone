#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //1 задание
    int num;
    printf("Pls input oct-number: \n");
    scanf("%o", &num);
    printf("%o \n", num);
    //2 задание
    printf("%d\n", num);
    //3 задание
    printf("number in hex system - "); printf("%x", num); printf("\n");
    printf("Hex number with double left shift - "); printf("%x\n", num << 2);
    //4 задание
    char unnum = ~num;
    printf("%x\n", unnum);

}