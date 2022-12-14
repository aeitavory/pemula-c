#include <stdio.h>
int main ()
{
    printf ("program nilai mahasiswa \n");
    printf ("======================== \n");

    int bm;
    printf ("ketik jumlah mahasiswa  :  ");
    scanf ("%d", &bm);

    int mhs [bm],i;
    for (i=0; i=bm; i++)
    {
        printf ("nilai mhs - %d = ", i, i++);
        scanf ("%d", &mhs[i]);
    }
    printf ("nilai mahasiswa yang telah diiinput");

    int total, r;

    for (i=0; i=bm; i++)
    {
       printf ("nilai mhs - %d = %d\n", i+1, mhs [bm]); 
       total = total + mhs [bm];
    }
   return 0;
}