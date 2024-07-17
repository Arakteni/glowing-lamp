#include <stdio.h>

int main(){
  int n, m;
  int sum, sum1, ost;

  scanf("%d %d", &n, &m);

  sum = n * m;
  
  if(sum % 2 == 0){
    sum1 = sum / 2;
    printf("%d", sum1);
  }
  else{
    ost = sum % 2;
    sum1 = sum / 2 + ost;
    printf("%d", sum1);
  }



    return 0;
}