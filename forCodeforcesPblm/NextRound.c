#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int threshold = a[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= threshold && a[i] > 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
