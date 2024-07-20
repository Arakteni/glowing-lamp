#include <stdio.h>

int main(){
    long n, m, x;
    long n1 = 0;
    int i, j;
    int z = 0;
    int n2 = 0;
    int n3;
    int l, k;

    scanf("%d %d %d", &n, &m, &x);

    long a[n][m];
    long b[n][m];

    for(j; j < m; j++){
        for(i = 0; i < n; i++){ // запись чисел по столбцам
            a[i][j] = n1 + 1;
            n1++;
        }
    }



    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){ // запись чисел по столбцам
            z = z +1;
            if(a[i][j] == x)
            printf("%d\n", z);
        }
    }


    return 0;
}