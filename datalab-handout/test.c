#include <stdio.h>
int
main()
{
  int num = 1;
  num = num << 31;
  printf("%d", num);
  num = num >> 31;
  printf("%d", num);
  return 0;
}
