#include<stdio.h>

int
main( void )
{
  int x = 0x87654321;
  int A = x & 0xff;
  int B = x ^ 0xffffff00;
  int C = x | 0xff;
  printf("%X\n",A);
  printf("%X\n",B);
  printf("%X\n",C);
  return 0;
}

