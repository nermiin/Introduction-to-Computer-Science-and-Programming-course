/******************************************************************
**			SAKARYA ÜNiVERSiTESi
**          BiLGiSAYAR VE BiLisiM BiLiMLER FAKÜLTESi
**          BiLGiSAYAR MÜHENDiSLigi BÖLÜMÜ
**          PROGRAMLAMAYA GiRis ÖDEVi
**         Ödev Numarasi        :....2-2....
**         Ögrenci Adi          : Nermin Kaya
********************************************************************/
#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	char pas = 'l';		// on deger olarak 
	int disardan_sayi;	// dizinin boyutu
	cout << "kac rastgele sayi atilmak isterseniz : " << endl;
	cin >> disardan_sayi;
	char cursor[6] = "---> ";
	char bosluk[6] = "     ";
	srand(time(NULL));		// rasgele sayilari yazdirma fonksiyonu .
	int matris[1000];		// matrisin boyutu kullanci tarafindan secilmez . 
	for (int satir = 0; satir < disardan_sayi; satir++)	// satirlar arasinda hareket etmek icin.
	{
		matris[satir] = rand() % 10;	//rastegele uretilen sayiral matirse atilacak 0-10 arasinda sayilar uretilecek icin %10 kullanildi
		if (satir == 0)	//ilk durumda kursor ilk satirda olacak 
		{
			cout << cursor << matris[satir] << endl;//
		}
		else //aksi hailnde bosluk yazdirilacaktir
		{
			cout << bosluk << matris[satir] << endl;
		}
	}
	cout << "(a veya A tusu asagi  goturur     )"<<endl;
	cout << "(d veya D tusu yukari goturur     )"<<endl;
	cout << "(c veya C secek programdan cikarir)"<<endl;
	cout << "(okun yonunu secin ... :  " << endl;
	int cursor_yeri = 0;//daha sonra a,d tusulari icin gerekli bir parametre
	while (pas != 'c')// kullanici taradindan gerilecek harf c degilse devam,yoksa programdan cik!
	{
		cin >> pas;
		switch (pas)
		{
		case 'a'://eger pas=a ise asagdaki kodlar uygulanak
		{
			system("cls");//eski output silinecek
			cursor_yeri++;// a secildi icin kursor asagiya  bir satira inecek
			for (int satir = 0; satir < disardan_sayi; satir++)
			{
				if (cursor_yeri == disardan_sayi)//eger kursor son satra gelirse  
				{
					cursor_yeri = 0;//eger kursor son satra gelirse ilk satra donsun

				}
				if (satir == cursor_yeri)//eger satir sayisi = kursorun bulundigi satira esitse
				{
					cout << cursor << matris[satir] << endl;//kusor isareti yazilsin sonra matrisin(dizinin) degeri
				}
				else //aksi halinde
				{
					cout << bosluk << matris[satir] << endl;//bosulk yazilsin sonra matrisin(dizinin) degeri
				}
			}
			cout << "(a veya A tusu asagi  goturur     )" << endl;
			cout << "(d veya D tusu yukari goturur     )" << endl;
			cout << "(c veya C secek programdan cikarir)" << endl;
			cout << "(okun yonunu secin ... :  " << endl;
			break;
		}
		case 'd'://eger pas=d ise asagdaki kodlar uygulanak
		{
			system("cls");//eski output silinecek
			cursor_yeri--;// d secildi icin kursor yukariya  bir satira donecek
			for (int satir = 0; satir < disardan_sayi; satir++)
			{
				if (cursor_yeri == -1)//eger kursor ilk satirden gecti ise  
				{
					cursor_yeri = disardan_sayi-1;// son satra gitsin
				}
				if (satir == cursor_yeri)//eger satir sayisi  kursorun bulundigi satira esitse
				{
					cout << cursor << matris[satir] << endl;//kursor isareri yazilsin sonra matrisin(dizinin) degeri
				}
				else//aksi halinde
				{
					cout << bosluk << matris[satir] << endl;//bosluk yazilsin sonra matrisin(dizinin) degeri
				}
				
			}
			cout << "(a veya A tusu asagi  goturur     )" << endl;
			cout << "(d veya D tusu yukari goturur     )" << endl;
			cout << "(c veya C secek programdan cikarir)" << endl;
			cout << "(okun yonunu secin ... :  " << endl;
			break;
		}
		}
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}