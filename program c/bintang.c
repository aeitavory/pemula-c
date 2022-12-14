#include <stdio.h>
int main (void)
{
    int t, l;
    printf ("Program bintang\n");
    printf ("input tinggi : ");
    scanf ("%d", &t);
    printf ("input lebar : ");
    scanf ("%d", &l);
    printf ("output : \n");

    for (int a=1; a<=t; a++)
    {
        for (int b=l; b>a; b--)
        {
            printf (" ");
        }
        for (int b=1; b<=a; b++)
        {
             if (b<=l)
            {
                printf ("*");
            }
        }
        printf ("\n");
    }
return 0;
}