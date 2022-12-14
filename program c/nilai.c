#include <stdio.h>
int main ()
{
    float uas, uts, tugas, kuis, r, total;
    printf ("program nilai mutu mahasiswa\n ketik nilai :\n\n ");
    printf ("uas = ");
    scanf ("%f", &uas);
    printf ("uts = ");
    scanf ("%f", &uts);
    printf ("tugas : ");
    scanf ("%f", &tugas);
    printf ("kuis = ");
    scanf ("%f", &kuis);
    printf ("\n");

    total = uas + uts + tugas + kuis;
    r = total/4;
    printf ("total %.2f\n rata rata %.2f ", total, r);
    if (80<=r<=100)
    {
        printf ("nilai mutu mahasiswa dengan total %.2f dan rataan %.2f adalah A", total, r);
    }
    else if (70<=r<80)
    {
        printf ("nilai mutu mahasiswa dengan total %.2f dan rataan %.2f adalah B", total, r);
    
    }
    else if (50<=r<70)
    {
        printf ("nilai mutu mahasiswa dengan total %.2f dan rataan %.2f adalah C", total, r);
    
    }
    else if (30<=r<50)
    {
        printf ("nilai mutu mahasiswa dengan total %.2f dan rataan %.2f adalah D", total, r);
    
    }
    else if (0<=r<30)
    {
        printf ("nilai mutu mahasiswa dengan total %.2f dan rataan %.2f adalah E", total, r);
    
    }
    else 
    {
        printf ("eror");
    }
    return 0;


    




}
