#include<stdio.h>
#include<conio.h>
#include<iostream.h>
 struct mahasiswa
{
char nama[15];
char jenis[30];
int berat,tinggi;
 };
void main()

{
clrscr();
mahasiswa mhs;
cout<<"NAMA				  : "; cin.getline(mhs.nama,15);
cout<<"JENIS KELAMIN   : "; cin.getline(mhs.jenis,30);
cout<<"BERAT BADAN 	  : "; cin>>mhs.berat;
cout<<"TINGGI BADAN    : "; cin>>mhs.tinggi;

cout<<endl<<endl;

cout<<"Nama Anda    			 : "<<mhs.nim<<endl;
cout<<"Jenis Kelamin Anda   : "<<mhs.nama<<endl;
cout<<"Berat Badan Anda		 : "<<mhs.berat<<endl;
cout<<"Tinggi Badan Anda    : "<<mhs.tinggi<<endl;
getch();
}
