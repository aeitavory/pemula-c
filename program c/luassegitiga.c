#include <stdio.h>
 
int main() 
{
  int a, t;
  float luas;

  printf("nama : Ni Putu Dita Ari Pratiwi\n");
  printf("Nim : 2208561003\n");
  printf("kelas : c\n\n");
  
  printf("-----menghitung luas segitiga-----\n");
  printf("Masukkan alas segitiga : ");
  scanf("%d",&a);
  
  printf("Masukkan tinggi segitiga: ");
  scanf("%d",&t);
  
  luas = 0.5 * a * t;
  printf("Luas segitiga dengan alas %d dan tinggi %d adalah %2.f\n", a,t,luas);
  return 0;
}