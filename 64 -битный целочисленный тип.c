#include <stdio.h>

int main(){
    long n, m, x;
    long n1 = 0;
    int i, j, z;
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

    for(l = 0; l < n; l++){
        for(k = 0; k < m; k++){ // запись чисел по строкам
            b[l][k] = n2 + 1;
            n2++;
        }
    }

    n3 = n1 - x;

    for(k = 0; k < n; k++){
        for(l = 0; l < m; l++){ 
            if(b[l][k] == x){
                z = (l + 1) * n + k + 1;
            }
        }
    }

    printf("%d", z);
     
    return 0;
}