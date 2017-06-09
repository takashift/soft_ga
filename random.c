#include <stdlib.h>

int randomize(int max, int min) {
  int rand_res = (int)(rand()%(max + 1) + min);
  return rand_res;
}