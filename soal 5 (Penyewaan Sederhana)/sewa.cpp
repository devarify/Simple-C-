#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
#define BA_1 20000
#define BS_1 200000
#define B_1 80000
#define BA_2 15000
#define BS_2 250000
#define B_2 80000
int jenis_kendaraan;
int lama_sewa;
long total_sewa;
printf("   \n");
printf("   ======================================\n");
printf("   ========Arif Yulianto 1123121=========\n");
printf("   ======================================\n\n");
printf("Jenis kendaraan : 1.Sedan 2.bis : "); scanf("%d",&jenis_kendaraan);
printf("Lama sewa : "); scanf("%d",&lama_sewa);
if(jenis_kendaraan == 1)
{if (lama_sewa==1)
total_sewa = BA_1+BS_1;
else
total_sewa = BA_1+(BS_1*lama_sewa)-B_1;}
else if (jenis_kendaraan == 2)
{if (lama_sewa==1)
total_sewa = BA_2+BS_2;
else
total_sewa = BA_2+(BS_2*lama_sewa)-B_2;}
//else
//	printf("Maaf kode salah!");
printf("Total sewa= Rp. %ld", total_sewa);
getch ();
}
