#include <stdio.h>
 
int main()
{
	int i, min;
	printf("Ketik Jumlah Bilangan :");
	scanf("%d", &i);
	
	int bil[i];
	
	for(int j=0;j<i;j++)
	{
		printf("Bil ke- %d : ", j+1);
		scanf("%d", &bil[j]);
	}
	
	min=bil[0];
	for(int j=0;j<i;j++)
	{
		if(bil[j]<min){
		min=bil[j];
		}
	}
	
	printf("Bil min adalah %d", min);
	
	return 0;
}