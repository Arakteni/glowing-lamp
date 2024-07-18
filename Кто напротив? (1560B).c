#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, c, z, n;

    scanf("%d %d %d", &a, &b, &c);

    n = abs((b - a) * 2);
    
    if(a > n){
        printf("-1 ");
    goto A;
    }
    
    else if(b > n){
        printf("-1 ");
    goto A;
    }

    else if(c > n){
        printf("-1 ");
        goto A;
    }

    else{
        if(c >= (n / 2) + 1){
            z = c - (n / 2);
            printf("%d", z);
        }
        else{
            z = c + (n / 2);
            printf("%d", z);
        }
    }
    A:
    

    return 0;
}