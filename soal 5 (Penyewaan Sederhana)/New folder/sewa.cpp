#include <iostream.h>
#include <conio.h>

main()
{
int status,ba,bs,sewa;
long int hari, bonus, sementara, total_sewa;
cout<<"\t Input Data\n";
cout<<"JENIS KENDARAAN\t\n";
cout<<" (1.JENIS SEDAN,  2.JENIS MINIBUS) [1/2] : ";
cin>>status;
cout<<" LAMA SEWA (hari)                : ";
cin>>hari;

if ((status==1) && (hari>1))
{
ba=20000;
bs=250000;
bonus=80000;
}
else if ((status==2) && (hari>1))
{
ba=15000;
bs=20000;
bonus=100000;
}
else
{
cout<<" Anda Salah Memasukkan Kode\n";
}
sementara= ba+(bs*hari);
total_sewa = sementara - bonus;

cout<<"\n\t Input Data\n";
cout<<" TOTAL SEWA      : Rp. "<<total_sewa<<endl;
getch();
}