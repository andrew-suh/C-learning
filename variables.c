#include <stdio.h>

void swap(int a,int b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

int main(void){
  int a = 21;
  int b = 5;

  swap(a, b);
  printf("a: %d, b: %d",a,b);
  return 0;
}
