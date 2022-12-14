#include <stdio.h>
int main ()
{
    int tinggi;
    printf ("========program bintang========  \n");
    printf (" masukkan tinggi bintang :  ");
    scanf ("%d", &tinggi);


  for (int i = 1; i <= tinggi; i++) 
  {
    for (int j = 1; j <= i; j++) 
    {
      printf("*");
    }
    printf("\n");
  }
  

return 0;
}
