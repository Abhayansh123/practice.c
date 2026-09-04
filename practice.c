#include <stdio.h>

int main() {
    int n, sum, i;

    scanf("%d", &n);

    sum = 0;
    i = 1;

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    int mean = sum / n;

    printf("Sum: %d\n", sum);
    printf("Mean: %d\n", mean);

    return 0;
}     