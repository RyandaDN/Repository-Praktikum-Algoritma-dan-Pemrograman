#include<iostream>
using namespace std;
int main(){
	char kode;
	int luas, keliling;
	float alas, tinggi, sisiA, sisiB, sisiC, panjang_luas, panjang_keliling, lebar_luas, lebar_keliling, pi=3.14, r_luas, r_keliling;
	
		cout<<"Program Menghitung\n";
		cout<<"Luas dan Keliling Segitiga, Persegi Panjang dan Lingkaran\n\n";
		cout<<"Pilihan Kode [S,P,L]\n";
		cout<<"S = Segitiga\n";
		cout<<"P = Persegi Panjang\n";
		cout<<"L = Lingkaran\n\n";
		cout<<"Masukkan kode : "; cin>>kode;
		
		kode=toupper(kode);
		switch(kode){
			case 'S':
				cout<<"Menghitung luas dan keliling segitiga : \n";
				cout<<"Masukkan alas : "; cin>>alas;
				cout<<"Masukkan tinggi : "; cin>>tinggi;
				cout<<"Masukkan Sisi A : "; cin>>sisiA;
				cout<<"Masukkan Sisi B : "; cin>>sisiB;
				cout<<"Masukkan Sisi C : "; cin>>sisiC;
				cout<<"\n";
					
				cout<<"Menghitung luas segitiga : \n";
				luas=0.5*alas*tinggi;
				cout<<"Luas segitiga=0.5*"<<alas<<"*"<<tinggi<<"="<<luas<<"\n\n";
				
				cout<<"Menghitung keliling segitiga : \n";
				keliling=sisiA+sisiB+sisiC;
				cout<<"Keliling segitiga="<<sisiA<<"+"<<sisiB<<"+"<<sisiC<<"="<<keliling<<"\n";
				break;
				
			case 'P':
				cout<<"Menghitung luas dan keliling persegi panjang : \n";
				cout<<"Masukkan panjang luas : "; cin>>panjang_luas;
				cout<<"Masukkan lebar luas : "; cin>>lebar_luas;
				cout<<"Masukkan panjang keliling : "; cin>>panjang_keliling;
				cout<<"Masukkan lebar keliling  : "; cin>>lebar_keliling;
				cout<<"\n";
					
				cout<<"Menghitung luas persegi panjang : \n";
				luas=panjang_luas*lebar_luas;
				cout<<"Luas persegi panjang="<<panjang_luas<<"*"<<lebar_luas<<"="<<luas<<"\n\n";
		
				cout<<"Menghitung keliling persegi panjang : \n";
				keliling=2*(panjang_keliling+lebar_keliling);
				cout<<"Keliling persegi panjang=2*("<<panjang_keliling<<"+"<<lebar_keliling<<")="<<keliling<<"\n";
				break;
				
			case 'L':
				cout<<"Menghitung luas dan keliling lingkaran : \n";
				cout<<"Masukkan r (jari-jari) Luas : "; cin>>r_luas;
				cout<<"Masukkan r (jari-jari) Keliling : "; cin>>r_keliling;
				cout<<"\n";
					
				cout<<"Menghitung luas lingkaran : \n";
				luas=pi*r_luas*r_luas;
				cout<<"Luas lingkaran="<<pi<<"*"<<r_luas<<"*"<<r_luas<<"="<<luas<<"\n\n";
		
				cout<<"Menghitung keliling lingkaran : \n";
				keliling=2*pi*r_keliling;
				cout<<"Keliling lingkaran=2*"<<pi<<"*"<<r_keliling<<"="<<keliling<<"\n";
				break;
				
			default:
				printf("Kode Tidak ada");
		}
}
