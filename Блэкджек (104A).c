#include <stdio.h>

int main(){
  int sum;
  int options = 0;
  scanf("%d", &sum);

  options = sum - 10;

  if(options == 0 || options > 11){
    printf("0");
  }
  else if(options < 10 && options > 0) {
    printf("4");
  }

  
  
  if(options % 10 == 0 && options > 0){
    printf("15");
  }






    return 0;
}