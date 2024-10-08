#include <stdio.h>

int main() {
  int i;
//we can use both ++i or i++ for this code
  for (i = 0; i < 5; ++i) {
    printf("%d\n", i);
  }
  
  return 0;
}