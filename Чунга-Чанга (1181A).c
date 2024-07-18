#include <stdio.h>

int main() {
    long long x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);

    // Вычисляем максимальное количество кокосов, которое можно купить
    long long max_coconuts = (x + y) / z;

    // Вычисляем минимальное количество чижиков для передачи
    long long min_chizhiks = 0;
    if (x % z + y % z >= z) {
        min_chizhiks = z - (x % z + y % z - z);
    }

    printf("%lld %lld\n", max_coconuts, min_chizhiks);

    return 0;
}
