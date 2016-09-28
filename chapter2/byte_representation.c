/* 
** Code to print the byte representation of program objects.
** This code uses casting to circumvent the type system.
** Similar functions are easily defined for other data types.
*/

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
  /*
  ** Such a byte pointer references a sequence of bytes where
  ** is considered to be a non-negative integer
  */
  int i;
  for (i = 0; i < len; i++)
    /* It prints the individual bytes in hex with at least two digits. */
    printf(" %.2x", start[i]);	
  printf("\n")x;
}

void show_int(int x) {
  show_bytes( (byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
  show_bytes( (byte_pointer) &x, sizeof(float));
}

void show_pointer( void *x ) {
  show_bytes( (byte_pointer) &x, sizeof(void *));
}

int main( void ) {
  int i = 0x8049464;
  show_int(i);
  return 0;
}
