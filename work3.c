#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int a[10];
  for(int x = 0; x < 9; x++){
    a[x] = rand();
    }
  a[9] = 0;
  for (int y = 0; y < 10; y++){
    printf("a[%d] = %d\n",y,a[y]);
  }
  int b[10];
  int *pointb = &a[9];
  for (int w = 9; w >= 0; w --){
    b[w]=*(pointb - w);
  }
  for (int y = 0; y < 10; y++){
    printf("b[%d] = %d\n",y,b[y]);
  }
}
