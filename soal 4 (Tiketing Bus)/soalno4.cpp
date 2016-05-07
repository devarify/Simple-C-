#include <stdio.h>
#include <conio.h>
main()
{
long hargatiket, totalbayar;
int tujuan, jumlahtiket;
char nama[20], *Tperjalanan[30];
printf("   \n");
printf("   ======================================\n");
printf("   ========Arif Yulianto 1123121=========\n");
printf("   ======================================\n\n");
printf("Input Data\n");
printf("Nama : ");scanf("%s", nama);
printf("TUJUAN PERJALANAN\n");
printf("1. Bandung - Semarang\n");
printf("2. Bandung - Yogyakarta\n");
printf("3. Bandung - Surabaya\n");
printf("Pilih tujuan perjalanan Anda dengan masukkan angka 1,2 atau 3 :");
scanf("%d",&tujuan);
printf("Jumlah tiket yang dibeli : "); scanf("%d",&jumlahtiket);
switch(tujuan)
{
	case 1: {*Tperjalanan ="Bandung - Semarang";
								 hargatiket = 50000; break;}
	case 2: {*Tperjalanan ="Bandung - Yogyakarta";
								 hargatiket = 74000; break;}
	case 3: {*Tperjalanan ="Bandung - Surabaya";
								 hargatiket = 100000; break;}
}
totalbayar = jumlahtiket * hargatiket;
printf("Nama Customer : %s\n", nama);
printf("Tujuan perjalanan : %s\n", *Tperjalanan);
printf("Jumlah tiket yang dibeli : %d\n", jumlahtiket);
printf("Harga Tiket : Rp. %ld\n", hargatiket);
printf("Total bayar : Rp. %ld", totalbayar);

getch ();
}

