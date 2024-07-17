#include <stdio.h>

int main() {
    int k, n, w;
    int diff;

    scanf("%d %d %d", &k, &n, &w);

    int totalCost = (k + w*k) * w / 2;
    

    if (totalCost > n) {
        diff = totalCost - n;
        printf("%d", diff);
    } else {
        printf("0");
    }

    return 0;
}
