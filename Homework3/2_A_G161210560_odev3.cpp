/******************************************************************
**			SAKARYA ÜNiVERSiTESi
**          BiLGiSAYAR VE BiLisiM BiLiMLER FAKÜLTESi
**          BiLGiSAYAR MÜHENDiSLigi BÖLÜMÜ
**          PROGRAMLAMAYA GiRis ÖDEVi
**         Ödev Numarasi        :....3....
**         Ögrenci Adi          : Nermin Kaya
********************************************************************/
#include<iostream>
#include<string>
#include<locale.h>
using namespace std;
struct kelime // yapi tanimlama
{
	char harf;	// yapi uye degiskenleri
	string kelime1;	// yapi uye degiskenleri
	char  sesli_harf, noktalama_isaret;	// yapi uye degiskenleri
};
struct cumle	// yapi tanimlama
{
	string cumle1;	// yapi uye degiskenleri
	kelime kelime;	// yapi uye degiskenleri
};
//  main fonksiyonundan önce tanımlanmış fonksiyonlar
void cum_harf_sayisi(struct cumle cum,int harf_sayaci);	//Cümledeki harf sayısı hesaplamak için
int  kelime_sayisi(struct cumle cum,int kelime_sayaci);	//Cümledeki kelime sayısı hesaplamak için
void noktalama_isaretler(struct cumle cum); //Cümledeki noktalama işaretleri belirletmek için
void palindrom(struct cumle cum);	// Cümle palindrom mu?
void kelime_harf_sayisi(struct cumle cum,int kelime_harf_sayaci);	//Cümledeki kelimelerin harf sayıları hesaplamak için
void kelime_sesli_harf_sayisi(struct cumle cum ,int kelime_sesli_harf_sayaci);	//Cümledeki kelimelerin sesli harf sayıları belirletmek için
void kelime_palindrom(struct cumle cum);	//Cümlede palindrom kelime var mı ?
int main()
{
	setlocale(LC_ALL, "Turkish");
	struct cumle cum;
	int sayac = 0;
	cout << "Bir cumle giriniz" << endl;
	getline(cin, cum.cumle1);	// string okumak icin
	cum_harf_sayisi(cum,sayac);	//fonksiyonunun çağrılması
	kelime_sayisi(cum,sayac);	//fonksiyonunun çağrılması
	noktalama_isaretler(cum);	//fonksiyonunun çağrılması
	palindrom(cum);	//fonksiyonunun çağrılması
	kelime_harf_sayisi(cum,sayac);	//fonksiyonunun çağrılması
	kelime_sesli_harf_sayisi(cum,sayac);	//fonksiyonunun çağrılması
	kelime_palindrom(cum);	//fonksiyonunun çağrılması
	system("PAUSE");
	return 0;
}
void cum_harf_sayisi(struct cumle cum,int harf_sayaci) //fonksiyonun tanitimi
{	// for dongusu	0 dan cumleyi bitine kadar sayiyor
	for (int i = 0; i < ((cum.cumle1).length()); i++)
	{	// isalpha string fonksiyonudur A-Z ye kadar okuyor.
		if (isalpha(cum.cumle1[i])  || (cum.cumle1[i]) == 103 || (cum.cumle1[i]) == 71 || (cum.cumle1[i]) == 115 || (cum.cumle1[i]) == 83|| (cum.cumle1[i]) == 105 || (cum.cumle1[i]) == 73 )
			harf_sayaci ++;
	}
	cout << "cumledeki harflar sayisi   = " << harf_sayaci <<endl;
}
int kelime_sayisi(struct cumle cum , int kelime_sayaci)	//fonksiyonun tanitimi
{	// for dongusu	0 dan cumleyi bitine kadar sayiyor
	for (int i = 0; i < (cum.cumle1).length(); i++)
	{	// isspace stirng fonksiyonudur onun yerine  if(cum.cumle1[i] != ' ' ) yazabilir.
		if (isspace(cum.cumle1[i]))
			 kelime_sayaci ++ ;
	}
	cout << "cumledeki kelime sayisi    = " << kelime_sayaci +1  << endl;
	return kelime_sayaci+1;
}
void noktalama_isaretler(struct cumle cum)	//fonksiyonun tanitimi
{
	// for dongusu	0 dan cumleyi bitine kadar sayiyor
	for (int i = 0; i < (cum.cumle1).length(); i++)
	{	//ispunct string fonksiyonudur , ve noktalama isaretleri okuyor.
		if(ispunct(cum.cumle1[i]))
			cout << "noktalama isaretleri       : " << cum.cumle1[i]  << endl;
	}
}
void palindrom(struct cumle cum)	//fonksiyonun tanitimi
{
	int x;
	int y = 0;
	// for dongusu	0 dan cumleyi bitine kadar sayiyor
	for (int i = 0; i < (cum.cumle1).length() / 2; i++)
	{
		int sayac = 0;
		if (cum.cumle1[i] == cum.cumle1[((cum.cumle1).length() - i - 1)])
			y++;
		if (y == ((cum.cumle1).length() / 2))
			cout << "****** cumle palindromdur ******" << endl;
	}
}
void kelime_harf_sayisi(struct cumle cum,int kelime_harf_sayaci)	//fonksiyonun tanitimi
{
	int j = 0;
	// for dongusu	0 dan cumleyi bitine kadar sayiyor
	for (int i = 0; i < (cum.cumle1.length()); i++)
	{
		if (isspace(cum.cumle1[i]))
		{
			cout << ++j << ". kelime harf sayisi      = " << kelime_harf_sayaci << endl;
			kelime_harf_sayaci = -1;
		}
		if(!ispunct(cum.cumle1[i]))
		kelime_harf_sayaci++;
	}
	cout << ++j << ". kelime harf sayisi      = " << kelime_harf_sayaci << endl;
}
void kelime_sesli_harf_sayisi(struct cumle cum,int kelime_sesli_harf_sayaci)	//fonksiyonun tanitimi
{  
	int j = 0;
	// for dongusu	0 dan cumleyi bitine kadar sayiyor
	for (int i = 0; i < (cum.cumle1.length()); i++)
	{
		if(!isspace(cum.cumle1[i]))
		{
			if ((cum.cumle1[i] == 'a')|| (cum.cumle1[i] == 'e') || (cum.cumle1[i] == 'o') || (cum.cumle1[i] == 'i') || (cum.cumle1[i] == 'u') )
				kelime_sesli_harf_sayaci++;
		}
		else
		{
				cout << ++j << ".kelime sesli harf sayisi = " << kelime_sesli_harf_sayaci << endl;
				kelime_sesli_harf_sayaci = 0;
		}
	}
		cout << ++j << ".kelime sesli harf sayisi = " << kelime_sesli_harf_sayaci << endl;
}
void kelime_palindrom(struct cumle cum)	//fonksiyonun tanitimi
{
	int ks = kelime_sayisi(cum, 0);
	int harfsayisi[10];
	for (int x = 0; x <= 9; x++)
	{
		harfsayisi[x] = 0;
	}
	int j = 0;
	int i = 0;
	int n = 0;
	int sayac = 0;
	for (int i = 1; i < ks; i++)
	{
		while (!isspace(cum.cumle1[(harfsayisi[i])]))
		{
			harfsayisi[i]++;
		}
	}
		for (int i=0; i <= ks; i++)
		{
			for (int j = harfsayisi[i]+n; j < (harfsayisi[i]+harfsayisi[i + 1]+n)/2; j++)
			{
				if ((cum.cumle1[sayac] == cum.cumle1[(harfsayisi[i + 1]) - 1 - sayac]) && (sayac <= (harfsayisi[i + 1] / 2)))
					sayac++;
			}
			if (sayac == (harfsayisi[i + 1] / 2)&&(i==0))
			{
				cout << "cumlede kelime palindrom var " << endl;
				n = 1;
				sayac = 0;
			}
		}
}