#include<stdio.h>
#include<string.h>
#include<conio.h>

main()
{
	long int kode, jumlah, sks, semester;
	char nama[100];
	printf("Kode Masukkan [1-3] : "); scanf("%id", &kode);
	printf("Jumlah SKS per semester [20-25] : "); scanf("%id", &sks);
	
	if (kode == 1)
	{
		strcpy(nama, "Teknik Informatika");
		jumlah = 30000*sks;
		semester = jumlah*2;
	}
	else if (kode == 2)
	{
		strcpy(nama, "Akutansi");
		jumlah = 20000*sks;
		semester = jumlah*2;
	}
	else if (kode == 3)
	{
		strcpy(nama, "Manajemen");
		jumlah = 15000*sks;
		semester = jumlah*2;
	}
	printf("================================*\n");
	printf("Nama Kursus : %s\n", nama);
	printf("Pembayaran dalam 1 semester : %ld\n", jumlah);
	printf("Pembayaran dalam 1 tahun : %ld\n", semester);
	getch();
}
