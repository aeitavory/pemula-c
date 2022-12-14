#include <stdio.h> 
int main ()
{
    int pilihan;
    printf ("program bilangan \n");
    printf ("menu : \n 1. luas persegi \n 2. deret");
    scanf ("%d", &pilihan);

    switch (pilihan)
    {
        int s, l;
        case 1 :
        printf ("ketik sisi : ");
        scanf ("%d", &s);

        l = s*s;
        printf ("luas = %d", l);
        break;

        int awal,selisih, suku, i, j;
        case 2 : 
        printf ("ketik bilangan awal : ");
        scanf ("%d", &awal);
        printf ("ketik selisih : ");
        scanf ("%d", &selisih);
        printf ("ketik jumlah suku : ");
        scanf ("%d", &suku);

        for (i=1; i<=suku; i++)
        {
            printf ("%d, ", awal);
            awal = awal-selisih;
        }
        break;
        default : printf ("eror");

    }
}