#include <stdio.h>

int main() {
    int a, b, day_c = 0, day = 0;
    scanf("%d ", &a);
    scanf("%d", &b);

    while((a > 1) && (b > 1)) {
        if(a > b) {
            b++;
            a -= 2;
        } else {
            a++;
            b -= 2;
        }
        day_c++;
    }

    while(a > 1) {
        a--;
        day++;
    }

    while(b > 1) {
        b--;
        day++;
    }

    printf("%d ", day_c);
    printf("%d", day);


    return 0;
}
