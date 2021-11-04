#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    //Task 1
    char *str1 = (char *) malloc(1024);
    char *str2 = (char *) malloc(1024);
    scanf("%s", str1);
    scanf("%s", str2);
    strcat(str1, str2);
    printf("%s\n", str1);
    free(str1);
    free(str2);

    //Task 3
    printf("\n");
    char *str3 = (char *) malloc(1024);
    char *str4 = (char *) malloc(1024);
    scanf("%s", str3);
    scanf("%s", str4);
    if (strcmp(str3, str4) == 0)
        puts("Строки идентичны");
    else
        puts("Строки отличаются");
    free(str3);
    free(str4);

    //Task 5
    printf("\n");
    char *src = (char *) malloc(1024);
    char *dst = (char *) malloc(1024);
    scanf("%s", src);
    strcpy(dst, src);
    printf("%s\n", dst);
    free(src);
    free(dst);

    //Task 10
    printf("\n");
    char *p;
    char *fst = (char *) malloc(1024);
    char *scd = (char *) malloc(1024);
    scanf("%s", fst);
    scanf("%s", scd);
    for (p = fst; *p; ++p){
        if (strchr(scd, *p)){
            printf("Найден: %c\n", *p);
        }
    }
    free(fst);
    free(scd);

    //Task 12
    printf("\n");
    char *cin = (char *) malloc(1024);
    char *cout = (char *) malloc(1024);
    scanf("%s", cin);
    scanf("%s", cout);
    printf("%s \n",strcspn(cin, cout));
    free(cin);
    free(cout);
}
