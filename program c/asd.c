#include <stdio.h>

int main()
{
	int i, j, k;
	printf("Program Bintang \n");
	printf("Ketik Tinggi Bintang :\n");
	scanf("%d",&i);

	for (j=1;j<=i;j++)
    {
	 for (k=i;k>=j;k--)
	  {
		  printf(" ");
	  }
	  for (k=1;k<=j;k++)
      {
	  printf("*");
	  }
	  printf("\n");
	}
	for (j=i-1;j>=1;j--){
	 for (k=i;k>=j;k--)
	  {
		  printf(" ");
	  }
	  for (k=1;k<=j;k++){
	  printf("*");
	  }
	  printf("\n");
	}

	return 0;
}