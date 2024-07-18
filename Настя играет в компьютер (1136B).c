#include <stdio.h>

int main(){
    int quantiti, place;
    int count = 0;
    int place1;
    

    scanf("%d %d", &quantiti, &place);
    
    place1 = place;
    
    if(place > 1)
        for(int i = 0; i < place - 1; i++){
            place1 = place1 - 1;
            count++;
        }

    count = count + 4;

    quantiti = quantiti - 2;

    for(int i = 0;  i < quantiti; i++){
        count = count + 2;
    }

    printf("%d", count);

    return 0;
}