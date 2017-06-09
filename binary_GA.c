#include <stdio.h>
#include <stdlib.h>

#include "binary_GA.h"

void initialize(int);

int i,j;

int u_uv[ GA_SIZE ][ MAX_FRAME ];

int frame_size = 20;  //test
int seed = 1;

int main() {

  puts("----- GA is initializing -----");
  
  initialize(seed);  

  for (i=0; i < GA_SIZE; i++) {
    puts("\n----------\n");
    printf("gene = %d\n\n",i);
    
    // want output 
    printf("%d\n",frame_size);
    for (j=0; j < frame_size; j++) {
      printf("%d\n", u_uv[i][j]);
    }
  }
  
  return 0;
}
