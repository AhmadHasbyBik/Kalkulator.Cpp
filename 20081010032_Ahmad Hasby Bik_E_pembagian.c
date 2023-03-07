#include <stdio.h>
int pembagian(int,int);
int pembagian(int x, int y)
	{
	if (y==0)
	{
	  return 0;
	}
	else if (x-y==0)
	{
    	return 1;
	}
	else if (x<y)
	{
		return 0;
	}
	else{
	    return (1+pembagian(x-y,y));
	}
}

int main()
{
	int x, y, hasilpembagian;
	printf("Masukkan Angka : ");
	scanf("%d",&x);
	printf("Masukkan Angka : ");
	scanf("%d",&y);
	hasilpembagian = pembagian(x,y);
	printf("Hasil dari %d : %d adalah %d",x,y,hasilpembagian);
	return 0;
}
