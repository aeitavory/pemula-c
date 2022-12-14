#include <stdio.h>
int main ()

{
    int pilihan;
    int a, b, c, d, e;
    printf ("###   daftar menu kopi   ###\n");
    printf ("==============================\n");
    printf (" 1. expreso\n 2. cappucino\n 3. moccacino\n 4. vanila latte\n 5. huzelnut latte\n");

    printf ("mau pilih yang mana : ");
    scanf ("%d", &pilihan);

    printf ("\f");

    switch(pilihan)
    {
        case 1 :
        printf ("anda memilih expreso");
        break;

        case 2 :
        printf ("anda memilih cappucino ");
        break;

        case 3 : 
        printf ("anda memilih moccacino");

        case 4 :
        printf ("anda memilih vanila latte");
        break;

        case 5 : 
        printf ("anda memilih huzelnut latte");
        break;
    }
   
    

}