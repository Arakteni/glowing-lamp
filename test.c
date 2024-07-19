#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, m, x;
        scanf("%lld %lld %lld", &n, &m, &x);

        long long row = (x + n - 1) / n; // Находим номер строки
        long long col = (x - 1) % n;     // Находим номер столбца

        if (col == 0) {
            col = n;
        }

        long long result = m * (col - 1) + row;
        printf("%lld\n", result);
    }

    return 0;
}
