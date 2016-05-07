#include <iostream.h>
#include <conio.h>
void main()
{
                int score,a,x1,x2,x3,x4,y1,y2,z1;
cout<<"   \n";
cout<<"   ======================================\n";
cout<<"   ========Arif Yulianto 1123121=========\n";
cout<<"   ======================================\n\n";
					cout<<"selamat datang di program game berhadiah kupon\n";

                cout<<"masukkan score yang di dapat\n";
                cin>>score;
                a=score;

                if             (a>=8)
                {
                      a=score;
                      x1=a%5;
                      x2=(a-x1)/5;

                                if (x1>=3)
                                {
                                x1=a%5;
                                x2=(a-x1)/5;
                                x3=x1%3;
                                x4=(x1-x3)/3;

                                cout<<"selamat anda mendapatkan : \n";
                                cout<<"kupon 5 poin = "<<x2<<" lembar\n";
                                cout<<"kupon 3 poin = "<<x4<<" lembar\n";
                                cout<<"kupon 1 poin = "<<x3<<" lembar\n";
                                }
                                else
                                {
                                cout<<"selamat anda mendapatkan : \n";
                                cout<<"kupon 5 poin = "<<x2<<" lembar\n";
                                cout<<"kupon 1 poin = "<<x1<<" lembar\n";
                                }
        }

                else if ( a<5 && a>=3 && a>=8 )
                {
                                y1=a%3;
                                y2=(a-y1)/3;
                                cout<<"selamat anda mendapatkan : \n";
                                cout<<"kupon 3 poin = "<<y2<<" lembar\n";
                                cout<<"kupon 1 poin = "<<y1<<" lembar\n";
                }
                else if (a>0 && a<3 && a>=8)
                {
                                z1=a/1;
                                cout<<"selamat anda mendapatkan : \n";
                                cout<<"kupon 1 poin = "<<z1<<" lembar\n";
                }
                else
                                cout<<"maaf anda belum beruntung!!\n";
getch();
}