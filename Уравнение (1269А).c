#include <stdio.h>

int isComposite(int num) {
    if (num < 4) {
        return 0; // 1, 2, 3 не являются составными
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1; // число является составным
        }
    }
    return 0; // число не является составным
}

int main() {
    int n;
    scanf("%d", &n);

    int a = n + 4; // Начнем с числа n + 4
    while (1) {
        if (isComposite(a) && isComposite(a - n)) {
            printf("%d %d", a, a - n);
            break;
        }
        a++;
    }

    return 0;
}
