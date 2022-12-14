#include <stdio.h>
int main ()
{
    int pilihan;
    float a, t, s,  L;
    printf ("program luas\n");
    printf ("ketik pilihan\n 1. persegi\n 2. segitiga\n\n");
    printf ("mau pilih apa : ");
    scanf ("%d", &pilihan);
    
     switch (pilihan)
     {
     case 1 : 
        printf ("masukkan alas segitiga : ");
        scanf ("%f", &a);
        printf ("masukkan tinggi : ");
        scanf ("%f", &t);

        L = a * t * 0.5;
        printf ("luas segitiga dengan alas %.2f dan tinggi %.2f adalah %.2f", a,t,L);
        break;
    
    case 2 :
         printf ("masukkan sisi persegi : ");
         scanf ("%f", &s);

         L = s * s;
         printf ("luas persegi dengan sisi %.2f adalah %.2f", s, L);
        break;
        default:  printf("inputan salah");
     }
     return 0;
}
