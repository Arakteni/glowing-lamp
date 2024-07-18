#include <stdio.h>

int main(){
    int mk, bk, mkbk, n;
    int z;

    scanf("%d %d %d %d", &mk, &bk, &mkbk, &n);

    z = n - ((mk - mkbk) + (bk - mkbk) + mkbk);
    
    if(z > 0){
        printf("%d", z);
    }
    else{
        printf("-1");
    }



    return 0;
}