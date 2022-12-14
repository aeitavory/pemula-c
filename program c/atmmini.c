#include <stdlib.h>
#include <stdio.h>

int pw, pilihan, pilih, tarik, saldoA, saldo, rek, nom;
char select, user;

int main (void)
{
  printf ("*========================================*\n");
  printf ("          *program ATM mini*              \n");
  printf ("*========================================*\n");
  printf ("\n");
  printf ("silakan login untuk melanjutkan\n ");
  printf ("username : ");
  scanf ("%s", &user);
  printf ("pasword : ");
  scanf ("%d", &pw);
  system ("cls");

  printf ("---------------------------\n");
  printf ("selamat datang di mini atm\n");
  printf ("---------------------------\n");
  printf ("\n");
  printf ("pilih menu yang ingin anda lakukan ");
  printf ("\n");

  saldo = 10000000;
  saldo = saldo;
  printf ("1. cek saldo\n");
  printf ("2. tarik tunai\n");
  printf ("3. transfer\n");
  printf ("0. eror ^u only can add that number^\n");
  printf ("pilihan anda : ");
  scanf ("%d", &pilihan);
  system ("cls");

switch (pilihan)
{
case 1 : 
  printf ("----------------------------------\n");
  printf ("             cek saldo\n           ");
  printf ("-----------------------------------\n");
  printf ("\n");
  printf (" jumlah saldo anda adalah      : Rp 10000000\n");

  printf ("kembali ke halaman utama ?  ");
  scanf ("%d", &pilih);

    switch (pilih)
    {
     case 1 :
      system ("cls");
      printf ("             terimakasih telah percaya pada kami        \n");
      printf ("                    sisanya anda tertipu                 \n");
    }
  break;

case 2 : 
printf ("---------------------------\n");
printf ("         tarik tunai       \n");
printf ("-----------------------------\n");
printf ("\n");
printf (" masukkan nominal tarik tunai        :");
  scanf ("%d", &tarik);
  system ("cys");
printf ("rekening anda atas nama   :  %s\n", &user);
printf ("nomor rekening anda yaitu : %d\n", &pw);
printf ("jumlah yang akan anda tarik tunai yaitu :%d\n", tarik);

saldo = 10000000;
saldoA = saldo-tarik;
printf ("jumlah saldo %d dikurang dengan jumlah tarik tunai %d adalah %d\n", saldo, tarik, saldoA);
printf ("lanjutkan ? y/n :");
scanf ("%s", &select);
printf ("\n");
system ("cls");

  if (tarik<9999999)
  {
  printf ("tarik tunai sedang di proses\n");
  printf ("silakan ambil bukti transaksi\n");
  }

  else if (tarik>9999999)
  {
  printf ("maaf saldo anda tidak cukup untuk melakukan penarikan\n");
  }
  else 
  {
    printf ("maaf error");
  }
  printf ("kembali ke halaman utama ?  ");
  scanf ("%d", &pilih);

    switch (pilih)
    {
     case 1 :
      system ("cls");
      printf ("             terimakasih telah percaya pada kami        \n");
      printf ("                    sisanya anda tertipu                 \n");
    }
  break;

  case 3 :
  printf ("--------------------");
  printf ("     transfer       ");
  printf ("--------------------");
  printf ("\n");
    printf ("masukkan nomor rekening tujuan : ");
    scanf ("%d", &rek);
  printf ("--------------------");
  printf ("     transfer       ");
  printf ("--------------------");
  printf ("\n");
    printf ("masukkan nominal transfer  :");
    scanf ("%d", &nom);
  printf ("no rekening anda atas nama :%s\n", &user);
  printf ("dengan no rekening :  %d\n", &pw);
  printf ("\n");
  printf ("anda akan mentransfer ke\n");
  printf ("rekening tujuan : %d", &rek);
  printf ("dengan nominal : %d", &nom);

    saldo = 1000000;
    saldoA = saldo - nom;
    printf ("jumlah saldo anda %d dan transfer ke rekening tujuan sejumlah %d saldo anda menjadi %d", saldo, nom, saldoA);
    printf ("lanjutkan ? y/n :");
scanf ("%s", &select);
printf ("\n");
system ("cls");

  if (nom<9999999)
  {
  printf ("tarik tunai sedang di proses\n");
  printf ("silakan ambil bukti transaksi\n");
  }

  else if (nom>9999999)
  {
  printf ("maaf saldo anda tidak cukup untuk melakukan penarikan\n");
  }
  else 
  {
    printf ("maaf error");
  }
  printf ("kembali ke halaman utama ?  ");
  scanf ("%d", &pilih);

    switch (pilih)
    {
     case 1 :
      system ("cls");
      printf ("             terimakasih telah percaya pada kami        \n");
      printf ("                    sisanya anda tertipu                 \n");
    }
  break;
  break;

default:
  break;
}

}


