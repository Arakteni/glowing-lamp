#include <stdio.h>

int main(){
    int h1, m1, h2, m2;
    int middle, minutes1, minutes2;
    int hm, mm;

    scanf("%d:%d\n%d:%d", &h1, &m1, &h2, &m2);

    minutes1 = (h1 * 60) + m1;
    minutes2 = (h2 * 60) + m2;
    middle = (minutes2 - minutes1) / 2;
    minutes1 = minutes1 + middle;
    mm = minutes1 % 60;
    hm = (minutes1 - mm) / 60;

    if(hm < 10 && mm < 10){
        printf("0%d:0%d", hm, mm);
    }
    else if(hm < 10){
    printf("0%d:%d", hm, mm);
    }
    else if(mm < 10){
        printf("%d:0%d", hm, mm);
    }
    


    return 0;
}