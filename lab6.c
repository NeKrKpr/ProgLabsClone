#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;

    //TASK 1
    int arr[4];
    int *p = arr;
    for (i = 0; i < 4; i++){
        scanf("%d", (p + i));
    }
    printf("\n");
    for (i = 0; i < 4; i++){
        printf("%d ", *(p + i));
    }
    printf("\n\n");

    //TASK 2
    int *mass;
    mass = (void *) malloc(4 * sizeof(int));
    for (i = 0; i < 4; i++){
        scanf("%d", &mass[i]);
    }
    for (i = 0; i < 4; i++){
        printf("%d ", mass[i]);
    }
    free(mass);
}


















