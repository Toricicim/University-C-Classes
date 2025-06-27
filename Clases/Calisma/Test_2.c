#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i,j,t=0;
  for (i = 1; i < 7; i+=2)
  {
    for (j = 4; j > 0; i-=2)
    {
      if(i>j)
      {
        t=t+i;
      }
    }
  }
  printf("%d",t);

  return 0;
}
