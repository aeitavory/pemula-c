#include <stdio.h>
int main ()
{
    int suku;
    printf ("Program bilangan fibonaci \n");
    printf ("Input jumlah suku : ");
    scanf ("%d", &suku);
    
    if (suku<2 && suku>=1)
    {
        printf ("%d", suku);
    }
   else if (suku<=0)
   {
    printf (" ");
   }
    else 
    {
    int a,b,c,i;
    a=0;
    b=1;
    printf ("Deret bilangan fibonaci : ");
    for (i=0; i<=suku-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf ("%d, ", a);
    }
    printf ("%d", c);
    }
return 0;
}