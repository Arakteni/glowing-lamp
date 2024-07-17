#include <stdio.h>
#include <math.h>

int main(){
  int sum = 0;
  int n;

  scanf("%d", &n);

  for(int i = 0; i < n; i++ ){
  sum = sum + pow((-1), n) * n;
  }

  printf("%d", sum);


    return 0;
}