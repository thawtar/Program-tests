#include <stdio.h>

#define eof -1

int main()
{
  int c; 
  c=getchar();
  while(c!=eof)
  {
    putchar(c);
    c=getchar();
  }
  printf("EOF: %d",eof);

  return 0;
}
