//PROGRAM TUNJANGAN GAJI
#include <iostream.h>
#include <conio.h>

main()
{
char nama [30];
char jenis[10];
int berat, tinggi;
cout<<"   \n";
cout<<"   ======================================\n";
cout<<"   ========Arif Yulianto 1123121=========\n";
cout<<"   ======================================\n\n";
cout<<"\t Input Data\n";
cout<<"NAMA			: ";
cin>>nama;
cout<<"JENIS KELAMIN		: ";
cin>>jenis;
cout<<"BERAT BADAN		: ";
cin>>berat;
cout<<"TINGGI BADAN		: ";
cin>>tinggi;

if (berat>60 && tinggi>170)
{
cout<<"SELAMAT ANDA LULUS AKABRI !!!\n";
}
else
{
cout<<"MOHON MAAF, ANDA BELUM LULUS :( COBA LAGI TAHUN DEPAN...\n";
}


cout<<"\n\t Output Data\n";
cout<<" NAMA CALON    : "<<nama<<endl;
cout<<" JENIS KELAMIN : "<<jenis<<endl;
cout<<" BERAT BADAN   :	"<<berat<<endl;
cout<<" TINGGI BADAN  : "<<tinggi<<endl;
getch();
}