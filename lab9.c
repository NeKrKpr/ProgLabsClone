#include <stdio.h>

int main(void) {
    //Task 2
    int price, tax, len, scam;
    printf("Абонентская плата за минуту разговора: \n");
    scanf("%d", &price);
    printf("Абонентская плата за минуту сверх лимита: \n");
    scanf("%d", &tax);
    printf("Продолжительность разговоров: \n");
    scanf("%d", &len);

    if (len > 499) {
        scam = (price * 499 + tax * (len - 499));
    } else {
        scam = len * price;
    }
    printf("%\n");
    printf("Итоговая стоимость: %d\n", scam);

    //Task 5
    printf("%\n");
    double s, p, m;
    printf("Введите, сколько месяцев будет храниться вклад: \n");
    scanf("%lf", &m);
    printf("Введите годовую процентную ставку: \n");
    scanf("%lf", &p);
    printf("Введите начальную сумму на вашем счёте: \n");
    scanf("%lf", &s);

    for (int i = 1; i < m + 1; i++) {
        s += s * (p / 100);
        printf("После %d месяца у вас будет %f руб.\n", i, s);
    }
}
