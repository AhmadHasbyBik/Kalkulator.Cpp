#include <iostream>
using namespace std;
int main(){
int x, y, jumlah;
float a, b;
for (y=1; y>=5; y++){
cout<<"Masukkkan bilangan: ";
cin>>a;
cout<<"Masukkkan bilangan: ";
cin>>b;
cout<<"\n";
cout<<"=========KALKULATOR========= \n";
cout<<"1. Penjumlahan \n";
cout<<"2. Pengurangan \n";
cout<<"3. Perkalian \n";
cout<<"4. Pembagian \n";
cout<<"Pilih apa yang anda butuhkan ";
cin>>x;

if (x==1){
	jumlah = a+b;
	cout<<"= "<<jumlah;
	}
	else
if (x==2){
	jumlah = a-b;
	cout<<"= "<<jumlah;
	}
	else
if (x==3){
	jumlah = a*b;
	cout<<"= "<<jumlah;
	}
	else	 
if (x==4){
	jumlah = a/b;
	cout<<"= "<<jumlah;
	}
	else
return 0;
}

