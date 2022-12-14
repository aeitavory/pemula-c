#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int b,k,i,j;
    printf ("program pengurangan matriks\n");
    printf ("ketik baris : ");
    scanf ("%d", &b);
    printf ("ketik kolom : ");
    scanf ("%d", &k);

    int A[b][k], B[b][k], C[b][k];
    for (i=0; i<b; i++)
        for (j=0; j<k; j++)
        {
            printf ("A[%d][%d] = ", i,j);
            scanf ("%d", &A[i][j]);
        }
    for (i=0; i<b; i++)
        for (j=0; j<k; j++)
        {
            printf ("B[%d][%d] = ", i,j);
            scanf ("%d", &B[i][j]);
        }
    for (i=0; i<b; i++)
        for (j=0; j<k; j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    for (i=0; i<b; i++)
        for (j=0; j<k; j++)
        {
            printf ("C[%d][%d] = %d \n", i,j, C[i][j]);
        }

int maks_A=A[0][0], min_A=A[0][0];
for (i=0; i<b; i++)
    for (j=0; j<k; j++)
    {
        if (maks_A<=A[i][j])
        {
            maks_A=A[i][j];
        }
        else (maks_A=maks_A);
    }
for (i=0; i<b; i++)
    for (j=0; j<k; j++)
    {
        if (min_A>=A[i][j])
        {
            min_A=A[i][j];
        }
        else (min_A=min_A);
    }


    printf ("nilai maksimum matriks A = %d \n", maks_A);
    printf ("nilai minimum matriks A = %d \n", min_A);



int maks_B=B[0][0], min_B=B[0][0];
for (i=0; i<b; i++)
    for (j=0; j<k; j++)
    {
        if (maks_B<=B[i][j])
        {
            maks_B=B[i][j];
        }
        else (maks_B=maks_B);
    }
for (i=0; i<b; i++)
    for (j=0; j<k; j++)
    {
        if (min_B>=B[i][j])
        {
            min_B=B[i][j];
        }
        else (min_B=min_B);
    }
 printf ("nilai maksimum matriks B = %d \n", maks_B);
    printf ("nilai minimum matriks B = %d", min_B);
return 0;

}