#include <stdio.h>
int main (void)
{
    int tinggi, j, k;
    printf ("========program bintang========\n");
    printf (" masukkan tinggi bintang :  ");
    scanf ("%d", &tinggi);

  for (int i = 1; i <= tinggi; i++) 
  {
    for (int j = tinggi; j >= i; j--) 
    {
       printf (" ");
    }
    for (int k=1; k<=i; k++)
    {
      printf("*");
    }
    printf("\n");
  }

  for (int i = tinggi-1; i >=1; i--) 
  {
    for (int j = tinggi; j >= i; j--) 
    {
       printf (" ");
    }
    for (int k=1; k<=i; k++)
    {
      printf("*");
    }
    printf("\n");
  }
return 0;
  }


