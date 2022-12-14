#include <stdio.h>
int main(void)
{
    int a;
    printf("ketik jumlah bilangan : ");
    scanf("%d", &a);

    int bil[a], i;
    for (i = 0; i < a; i++)
    {
        printf("bil - %d : ", i + 1);
        scanf("%d", &bil[i]);
    }

    // mencari nilai maks dan min
    int k = bil[0];
    for (i = 0; i < a; i++)
    {
        if (k <= bil[i])
        {
            k = bil[i];
        }
        else
            k = k;
    }

    printf("Nilai Maks : %d \n", k);
    for (i = 0; i < a; i++)
    {
        if (k >= bil[0])
        {
            k = bil[i];
        }
        else
            (k = k);
    }
    printf("Nilai Min : %d \n", k);

    // mencari nilai total, rataan, bil awal dan bil akhir
    int jumlah, r, l = bil[i - 1];
    for (i = 0; i < a; i++)
    {
        jumlah = jumlah + bil[i];
    }
    printf("Total : %d \n", jumlah);

    r = jumlah / a;
    printf("rataan : %d \n", r);

    printf("Bil Awal : %d \n", bil[0]);
    printf("Bil Akhir : %d \n", l);

    return 0;
}