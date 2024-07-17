#include <stdio.h>

int main(){
  int lectures, practice, lecPen, pracPen, capacity;
  int countPen = 0;
  int countPencil = 0;

  scanf("%d %d %d %d %d", &lectures, &practice, &lecPen, &pracPen, &capacity);

  while(lectures >= 0){
    lectures = lectures - lecPen;
    countPen++;
  }
  while(practice > 0){
    practice = practice - pracPen;
    countPencil++;
  }

  if(countPen + countPencil > capacity){
       printf("-1");
  }
  else{
    printf("%d %d", countPen, countPencil);
  }





    return 0;
}