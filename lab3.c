#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //1 задание
    printf("Task 1: \n");
    int num;
    printf("//input oct-number\n");
    scanf("%o", &num);
    printf("%o \n", num);
    printf("\n");
    //2 задание
    printf("Task 2: \n");
    printf("//dec-syst for %o\n", num);
    printf("%d\n", num);
    printf("\n");
    //3 задание
    printf("Task 3: \n");
    printf("//hex-syst for %x\n", num);
    printf("//hex number with double left shift - "); printf("%x\n", num << 2);
    printf("\n");
    //4 задание
    printf("Task 4: \n");
    printf("//bitwise negation for %x", num);
    char unnum = ~num;
    printf("%x\n", unnum);
    printf("\n");
    //5 задание
    printf("Task 5: \n");
    printf("//exclusive or for new hex-number and %x\n", num);
    int xnum;
    printf("Pls input hex-number: \n");
    scanf("%x", &xnum);
    int l = xnum ^ num;
    printf("Exclusive or - %x ^ %x:\n", num, xnum);
    printf("%x\n", l);
}