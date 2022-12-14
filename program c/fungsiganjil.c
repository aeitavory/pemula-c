//program ganjil genap
//ketik sebuah bilangan : 6, 6 adalah bilangan genap 
#include <stdio.h>

int cekbil (int a);


int main ()
{
    int a, bil;
    printf ("input bilangan : ");
    scanf ("%d", &a);

    bil=cekbil(a);
    if (bil==0)
    {
        printf ("%d adalah bilangan genap", a);
    
    }
    else 
    {
        printf ("%d adalah bilangan ganjil", a);
    }
return 0;

}

int cekbil (int a)
    {
        return a%2;
    }
    
