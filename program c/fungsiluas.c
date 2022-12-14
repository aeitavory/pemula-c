//fungsi
#include <stdio.h>

int luassegiempat (int p, int l);
int luassegitiga (int a, int t);

int main ()
{
  int p, l, a, t, luas, pilihan;
  printf ("program luas segi empat \n");
  printf ("========================== \n");
  printf ("1. luas segiempat \n 2. luas segitiga \n");
  printf ("masukkan pilihan : ");
  scanf ("%d", &pilihan);
  printf ("\n");
  

  switch (pilihan )
  {
  case 1 :
  printf ("luas segi empat \n");
  printf ("masukkan panjang :");
  scanf ("%d", &p);
  printf ("masukkan lebar :");
  scanf ("%d", &l);

  luas = luassegiempat(p,l);//bisa langsung tampilkan dibawah sehingga tidak membutuhkan variabel luas 
  printf ("luas segiempat dengan panjang %d dan lebar %d adalah %d", p,l,luas);


  break;

  case 2 :
  printf ("luas segi tiga \n");
  printf ("masukkan alas  :");
  scanf ("%d", &a);
  printf ("masukkan tinggi :");
  scanf ("%d", &t);

  luas = luassegitiga (a, t);
  printf ("luas segitiga dengan alas %d dan tinggi %d adalah %d", a,t, luas);

  default:
    break;
  } 
 return 0;
}

//fungsi 
int luassegiempat(int p, int l)
{
  int luas;
  luas = p*l;

  return luas;
}

int luassegitiga (int a, int t)
{
  int luas;
  luas = a*t*0.5;

  return luas;

}