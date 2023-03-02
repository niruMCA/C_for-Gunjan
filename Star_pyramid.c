#include <stdio.h>

int main() 
{
  int i,n=3,j,s;
  printf("piramid print \n");
  for(i=0;i<3;i++)
  {
      for(s=0;s<n-(i+1);s++)
      {
          printf(" ");
      }
      for(j=0;j<(i*2)+1;j++)
      {
          printf("*");
      }
      printf("\n");
  }

    return 0;
}
