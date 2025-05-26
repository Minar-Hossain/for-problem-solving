#include <stdio.h>
#include <math.h>

int main() {
    double money;
    scanf("%lf", &money);

    int amount = (int)(money * 100 + 0.5); // Convert to poisa then we can use integer division
    // to avoid floating point precision issues we add +0.5 before casting to int
    // This ensures that we are correctly when converting to integer

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", amount / 10000);
    amount %= 10000;

    printf("%d nota(s) de R$ 50.00\n", amount / 5000);
    amount %= 5000;

    printf("%d nota(s) de R$ 20.00\n", amount / 2000);
    amount %= 2000;

    printf("%d nota(s) de R$ 10.00\n", amount / 1000);
    amount %= 1000;

    printf("%d nota(s) de R$ 5.00\n", amount / 500);
    amount %= 500;

    printf("%d nota(s) de R$ 2.00\n", amount / 200);
    amount %= 200;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", amount / 100);
    amount %= 100;

    printf("%d moeda(s) de R$ 0.50\n", amount / 50);
    amount %= 50;

    printf("%d moeda(s) de R$ 0.25\n", amount / 25);
    amount %= 25;

    printf("%d moeda(s) de R$ 0.10\n", amount / 10);
    amount %= 10;

    printf("%d moeda(s) de R$ 0.05\n", amount / 5);
    amount %= 5;

    printf("%d moeda(s) de R$ 0.01\n", amount / 1);

    return 0;
}
