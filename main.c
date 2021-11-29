#include <stdio.h>

void main()
{
  int num = 9000, sum = 0;
  for(int j=1; j<=num; j++)
  {
    for(int i=1; i<=(j/2); i++)
    {
      if(j%i==0)
      {
        sum += i;
      }
    }
    if(j==sum)
    {
      printf("%d\n", j);
    }
    sum = 0;
  }
}
