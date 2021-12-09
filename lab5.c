#include <stdio.h>

int main(void) {
    int i, j;
    //TASK1
    int mass1 = {0, 3, 5, 7, 11, 13};
    for (i = 0; i < 7; i++){
        printf("%d ", mass1[i]);
    }
    printf("\n\n");

    //TASK2
    int arr1[2][2] = {1, 0, 1, 4};
    int arr2[2][2] = {1, 2, 0, 1};
    int arr3[2][2] = {0};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    //Дополнительное задание - вывести транспонированную матрицу
    printf("\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            printf("%d ", arr3[j][i]);
        }
        printf("\n");
    }
}





