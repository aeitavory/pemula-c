#include <stdio.h>

int main()
{
    int n, max, min;
    printf("Program Array Dimensi 1 \n");
    printf("Ketik Jumlah Bilangan : ");
    scanf("%d", &n);
    
    int bil [n], i;
    for(i=0;i<n;i++)
    {
        printf("Bil - %d : ", i+1);
        scanf("%d" ,&bil[i]);
    }
    
    //Menentukan Nilai Maks dan Nilai Min
    max = bil[1];
    min = bil[1];
    for(i=1; i<n; i++)
    if(bil[i] >= max){
        max = bil[i];
    }
    else if (bil[i] <= min){
        min = bil[i];
    }
    printf("Nilai Maks : %d \n",max); 
    printf("Nilai Min : %d \n",min);
    
    //Menentukan Total, Rataan, Bil Awal, Bil Akhir
    int jumlah, r, l=bil[i-1];
    for (i=0; i<n; i++)
    {
        jumlah = jumlah + bil[i];
    }
    printf("Total : %d \n", jumlah);

    r = jumlah / n;
    printf("Rataan : %d \n", r);

    printf("Bil Awal : %d \n", bil[0]);
    printf("Bil Akhir : %d", l);
    return 0;
}