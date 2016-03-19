/* Code to generate a K-Map for a 4-variable Boolean function */
// Author Shubhankar Agarwal 
#include <stdio.h>

void kmap_c_d (int a , int b , int c , int d)
{   int z1 =1;
  printf("ab=%d%d|",a,b);

  for (c = 0; c < 2; c++)
  {
      if( z1 == 1)
      {
      for (d = 0; d < 2; d++)
      {      int output = (  ((~a) & b & c )| (c & d));
           printf("  %d" ,output );
      }
      z1 = 0;
      }
      else
      {
      for (d = 1; d >= 0; d--)
      {      int output = ( ((~a) & b & c )| (c & d));
           printf("  %d" ,output );
      }
      }
  }
  printf("\n");
}

int main()
{
    int a,b,c = 0,d = 0;
    int x1 = 1;

    printf("          cd      \n");
    printf("      00 01 11 10 \n");
    printf("  ________________\n");
for(a = 0 ; a < 2 ; a++)
{
    if(x1 == 1)
  {
    for (b = 0; b < 2; b++)
    {
      kmap_c_d(a,b,c,d);
      }
  x1 = 0;}
  else
  {
    for (b = 1; b >= 0; b--)
    {
        kmap_c_d(a,b,c,d);
      }
  }
}
    return 0;
}







/* Code to generate a K-Map for a 4-variable Boolean function */
// Author Shubhankar Agarwal 
#include <stdio.h>

void kmap_c_d (int a , int b , int c , int d)
{   int z1 =1;
  printf("ab=%d%d|",a,b);

  for (c = 0; c < 2; c++)
  {
      if( z1 == 1)
      {
      for (d = 0; d < 2; d++)
      {      int output = (  (a & d) | (~b & ~c & d));
           printf("  %d" ,output );
      }
      z1 = 0;
      }
      else
      {
      for (d = 1; d >= 0; d--)
      {      int output = ( (a & d) | (~b & ~c & d));
           printf("  %d" ,output );
      }
      }
  }
  printf("\n");
}

int main()
{
    int a,b,c = 0,d = 0;
    int x1 = 1;

    printf("          cd      \n");
    printf("      00 01 11 10 \n");
    printf("  ________________\n");
for(a = 0 ; a < 2 ; a++)
{
    if(x1 == 1)
  {
    for (b = 0; b < 2; b++)
    {
      kmap_c_d(a,b,c,d);
      }
  x1 = 0;}
  else
  {
    for (b = 1; b >= 0; b--)
    {
        kmap_c_d(a,b,c,d);
      }
  }
}
    return 0;
}
