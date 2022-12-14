#include <stdio.h>
int main()
{
int awal = 5, akhir = 10, x = 0;
x = awal;
while(x<=akhir)
{
    printf ("%d hai\n", x);
    x++;
}
printf ("\n\n");
x = awal;

do 
{
    printf ("%d halo\n", x);
    x++;
}
while (x <= akhir);

printf ("\n\n");

for (x=awal; x <= akhir; x++)
{
    printf ("%d anyong\n", x);
}
return 0;
}


