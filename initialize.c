#include <stdio.h>
#include <stdlib.h>
#include "binary_GA.h"

extern int frame_size;
extern int u_uv[ GA_SIZE ][ MAX_FRAME ];

int randomize(int, int);

void initialize(int seed ) {

  //printf("tau_range = %d",tau_range);

  for (int i=0; i < GA_SIZE; i++) {
    srand( (unsigned int)(seed + i) );
    for (int j=0; j < frame_size; j++) {
      u_uv[i][j] = randomize(1, 0);
    }
  }
}