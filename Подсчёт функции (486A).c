#include <stdio.h>
#include <math.h>

int main(){
  int sum = 0;
  int n;
  int count = 1;

  scanf("%d", &n);

  for(int i = 0; i < n; i++ ){
    sum = sum + pow((-1), count) * count;
    count++;
  }

  printf("%d", sum);


    return 0;
}