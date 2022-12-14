#include <stdio.h>
int main ()
{
  int awal,akhir,selisih,kesamping, j, i;
  
      printf ("----program Deret----- \n");
      printf ("awal : ");
      scanf ("%d", &awal);
      printf ("akhir :  ");
      scanf ("%d", &akhir);
      printf ("selisih : ");
      scanf ("%d", &selisih);
      printf ("kesamping : ");
      scanf ("%d", &kesamping);
      
        for (i=awal; i>akhir; i=i-selisih)
        {
            for (j= 1; j<=kesamping; j++)
            {
              printf ("%d\t", i);
            }
            printf ("\n");
        }
    
return 0;
}
