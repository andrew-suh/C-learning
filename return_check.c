#include <stdio.h>

int main(void){
 if (puts("Hello") == EOF) {
        return 1;
        //should not run
 }
  return 0; 
}
