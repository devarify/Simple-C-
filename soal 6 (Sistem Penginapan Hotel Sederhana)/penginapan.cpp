//PROGRAM BIAYA PENGINAPAN
#include <stdio.h>
#include <conio.h>
main()
{
long hargasewa, totalbayar;
int kode, hari;
char nama[20], *Tkode[30];
printf("   \n");
printf("   ======================================\n");
printf("   ========Arif Yulianto 1123121=========\n");
printf("   ======================================\n\n");
printf("Nama Kostumer : ");scanf("%s", nama);
printf("MASUKAN KODE\n");
printf(" 1. A = SINGLE\n");
printf(" 2. B = DOUBLE\n");
printf(" 3. C = SUITE\n");
printf("Pilih KODE JENIS KAMAR dengan masukkan angka 1,2 atau 3 :");
scanf("%d",&kode);
printf("Lama Inap : "); scanf("%d",&hari);
switch(kode)
{
	case 1: {*Tkode ="SINGLE";
								 hargasewa = 100000; break;}
	case 2: {*Tkode ="DOUBLE";
								 hargasewa = 150000; break;}
	case 3: {*Tkode ="SUITE";
								 hargasewa = 250000; break;}
}
totalbayar = hari * hargasewa;
printf("Nama Customer : %s\n", nama);
printf("Jenis Kamar yang dipilih : %s\n", *Tkode);
printf("Lama Inap (hari): %d\n", hari);
printf("Harga Tiket :Rp. %ld\n", hargasewa);
printf("Total bayar :Rp. %ld", totalbayar);
getch ();
}
