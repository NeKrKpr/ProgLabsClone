#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(char *str) {
    int i, neword;
    i = 0;
    neword = 1;
    while (str[i]) {
        if (str[i] == ' ') {
            if ((str[i - 1] == '(') || (str[i - 1] == '"') || (str[i - 1] == ':')) {
                neword = 0;
            } else {
                neword = 1;
            }
        } else {
            if (neword && i) {
                printf(" ");
            }
            printf("%c", str[i]);
            neword = 0;
        }
        i++;
    }
}

double **Distance(double **mass, int size) {
    double **outmass;
    int num;
    double x1, x2, y1, y2;
    outmass = (double **) malloc(size * sizeof(double *));

    for (int i = 0; i < size; i++) {
        *(outmass + i) = (double *) malloc((size - 1) * sizeof(double));
    }
    for (int i = 0; i < size; i++) {
        num = 0;
        for (int j = 0; j < size; j++) {
            if (i != j) {
                x1 = *(*(mass + i) + 0);
                y1 = *(*(mass + i) + 1);
                x2 = *(*(mass + j) + 0);
                y2 = *(*(mass + j) + 1);
                *(*(outmass + i) + num) = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
                num++;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        free(mass[i]);
    }
    free(mass);
    return outmass;
}


void main() {
    printf("Количество точек: ");
    int N;
    scanf("%d", &N);
    double **mass;
    mass = (double **) malloc(N * sizeof(double *));

    for (int i = 0; i < N; i++) {
        *(mass + i) = (double *) malloc(2 * sizeof(double));
    }
    printf("Значения (x;y) точек: \n");
    for (int i = 0; i < N; i++) {
        scanf("%lf %lf", (*(mass + i) + 0), (*(mass + i) + 1));
    }
    double **rez;
    rez = Distance(mass, N);
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("Расстояние от точки %d до остальных точек: ", i + 1);
        for (int j = 0; j < N - 1; j++) {
            printf("%3.3lf ", *(*(rez + i) + j));
        }
        printf("\n");
    }

    //Task 5
    char str[1024];
    printf("Введите строку символов: \n");
    gets(str);
    f(str);

}
