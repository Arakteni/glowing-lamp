#include <stdio.h>

int main(){
    int even, odd;

    scanf("%d %d", &even, &odd);

    if((even + odd) % 2 != 0){
        if(even == odd -1){
        printf("YES");
        }
        else if(odd == even - 1){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else if((even + odd) % 2 == 0){
        if(even == odd){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }



    return 0;
}