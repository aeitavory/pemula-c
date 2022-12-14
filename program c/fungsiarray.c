//program penjumlahan matriks
//ketika jumlah baris =2
//ketik jumlah kolom =2
//input matriks A 
//a[0][0]=1 semuanya 1
//input matriks b, semuanya 1

#include <stdio.h>

int main ()
{
   int b,k;
   printf ("ketik baris : ");
   scanf ("%d", &b);
   printf ("ketik kolom : ");
   scanf ("%d", &k);

 
   int X[b][k], Y[b][k];
   printf ("input matriks X \n");
   for (int i=0; i<=b; i++)
       for (int j=0; j<=k; j++)
       {
           printf ("X[%d][%d] : ", i,j);
           scanf ("%d", &X[i][j]);
       }
 
   printf ("input matriks Y \n");
   for (int i=0; i<=b; i++)
       for (int j=0; j<=k; j++)
       {
           printf ("Y[%d][%d] : ", i,j);
           scanf ("%d", &Y[i][j]);
       }




return 0;
}
