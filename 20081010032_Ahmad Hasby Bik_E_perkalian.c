#include <stdio.h>
int perkalian(int,int);
int perkalian(int x, int y)
{
	if (x < y)
    {
        return perkalian(y, x);
    }
    else if (y != 0)
    {
        return (x + perkalian(x, y - 1));
    }
    else
    {
        return 0;
    }
}

int main()
{
	int x, y, hasilperkalian;
	printf("Masukkan Angka : ");
	scanf("%d",&x);
	printf("Masukkan Angka : ");
	scanf("%d",&y);
	hasilperkalian = perkalian(x,y);
	printf("Hasil dari %d x %d adalah %d\n",x,y,hasilperkalian);
	return 0;
}
