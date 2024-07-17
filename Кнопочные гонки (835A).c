#include <stdio.h>

int main(){
  int s, v1, v2, t1, t2;
  int sum1 = 0;
  int sum2 = 0;

  scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);

  sum1 = (v1 * s) + (t1 * 2);
  sum2 = (v2 * s) + (t2 * 2);

  if(sum1 < sum2){
    printf("First");
  }
  else if(sum1 == sum2){
    printf("Friendship");
  }
  else{
    printf("Second");
  }

    return 0;
}