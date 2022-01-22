#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int dizi[4][4];
	int i,j;
	printf("4 4 luk bir matris olusturunuz\n");
	for(i = 0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d satirin %d elemanini giriniz ",i,j);
			scanf("%d",&dizi[i][j]);
		}
	}
	sparse(dizi);
	return 0;
}

sparse(int dizi[4][4])
{
	int i,j,sifirlar=0;
	printf("\nMatris kontrol ediliyor...\n\n");
	for(i = 0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(dizi[i][j] == 0)
			{
				sifirlar +=1;
			}
		}
	}
	if(sifirlar> (i*j) - sifirlar)
		printf("Matris Sparsedir");
	else
		printf("Matris Sparse Degildir");
}
