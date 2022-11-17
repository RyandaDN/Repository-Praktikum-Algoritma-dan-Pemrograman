#include<stdio.h>
main()
{
	int kdhari;
		printf("Masukkan kode hari[1-7]:"); scanf("%d",&kdhari);
		switch(kdhari)
		{
		case 1:
			printf("Senin Hari Kerja"); break;
		case 2:
			printf("Selasa Hari Kerja"); break;
		case 3:
			printf("Rabu Hari Kerja"); break;
		case 4:
			printf("Kamis Hari Kerja"); break;
		case 5:
			printf("Jum'at Hari Kerja"); break;
		case 6:
			printf("Sabtu Hari Kerja"); break;
		case 7:
			printf("Minggu Hari Libur"); break;
		default:
			printf("Kode tidak ada");
		}
}
