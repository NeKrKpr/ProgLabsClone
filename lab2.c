#include <stdio.h>
#include <math.h>
#define PI 3.1415926
//Пи на Си - M_PI

int main(void)
{

    float z1, z2, alpha, a, topz1, bottomz1, sinz2, cosz2;
    scanf("%f",&a);
    alpha = (a*(PI / 180));
    topz1 = sin(PI/2 + 3*alpha);
    bottomz1 = 1 - sin(3*alpha- PI);
    z1 = topz1 / bottomz1;
    sinz2 = sin((5*PI)/4 + (3*alpha)/2);
    cosz2 = cos((5*PI)/4 + (3*alpha)/2);
    z2 = cosz2/sinz2;
    printf("z1 is %f, z2 if %f\n", z1, z2);
}