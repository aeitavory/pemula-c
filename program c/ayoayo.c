#include <stdio.h>
int main ()
{
    int a, b;
    printf ("input bil : ");
    scanf ("%d", b);
    printf ("ketik bil mulai : ");
    scanf ("%d", &a);

     if (b>0)
     {
        for (int i=a; i<=b; i=i+5)
        {
            printf ("%d", i);
            
        }
     }
}