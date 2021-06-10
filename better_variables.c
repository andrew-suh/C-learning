#include <stdio.h>

void swap(int *a,int *b) {
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int main(void) {
  int a = 21;
  int b = 5;

  printf("BEFORE a: %d, b: %d\n", a, b);
  swap(&a, &b);
  printf("AFTER a: %d, b: %d", a, b);
  return 0;
}
