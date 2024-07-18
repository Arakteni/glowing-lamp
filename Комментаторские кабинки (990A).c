#include <stdio.h>

int main(){
    int n, m, a, b;
    int count, money;
    
    scanf("%d %d %d %d", &n, &m, &a, &b);

    if(n > m){
        count = n - m;
        money = count * b;
        printf("%d", money);
    }
    else if(m > n){
        count = m - n;
        money = count * a;
        printf("%d", money);
    }
    else{
        printf("0");
    }



    return 0;
}