/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			 BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				      PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...:  4
**				ÖĞRENCİ ADI......: Nermin Kaya
****************************************************************************/
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
const int en  = 10;
const int boy = 10;
using namespace std;
bool elemankontrol(int matris[en][boy],int elemanNum ,int rasgeleSayi);	//fonksiyon bildirmi
int** olustur();	//fonksiyon bildirmi
void matrisYaz(int **matris);	//	fonksiyon bildirmi
int** sirala(int **matris);		//	fonksiyon bildirmi

int main()
{
    int **matris = olustur();	
	cout << "rasgele olusan ve birbirinden farkli matris" << endl<<endl;
	matrisYaz(matris);	//fonksiyon cagrilmasi
	sirala(matris);		//fonksiyon cagrilmasi
	cout << endl;
	cout << "buyukten kucuge siralanmis matris" << endl << endl;
	matrisYaz(matris);	//fonksiyon cagrilmasi
	system("PAUSE");
	return 0;
}

bool elemankontrol(int matris[en][boy],int elemanNum,int rasgeleSayi)	//fonksiyon tanitimi
{
	bool check; 
	check = true;
	// Yeni üretilen rasgele sayı tüm matrisin elemanlaryla for döngüsü kullanarak karşılatırılır 
	for (int j = 0; j < elemanNum; j++)	
	{		//eger esit ise 0 dondurur aksi halinde 1 dondurur
		if (rasgeleSayi == matris[j / 10][j % 10])
		{
			check = false;
			break;
		}
	}
	return check;
}

int** olustur()	//fonksiyon tanitimi
{
	int sayac = 0;
	int matriS[10][10];
	srand(time(0));
	// 0'dan 100'e kadar sayilir ve tüm matrisin elemanlrına Rand fonksiyonu kullanarak rasgele değer atanacak.
	for (int rasgeleSayi = 0; rasgeleSayi < 100; rasgeleSayi++)
	{
		matriS[rasgeleSayi / 10][rasgeleSayi % 10] = (rand() % 100 + 1);
	}
	// 0'dan 100'e kadar sayilir ve tüm matrisin elemanların değerlerinin tekrarlamaması için for dongusu ile while kullandim.
	for (int elemanNum = 0; elemanNum < 100; elemanNum++)
	{
		int rasgeleSayi = rand() % 100 + 1;
		while (!elemankontrol(matriS, elemanNum, rasgeleSayi))	
		{
			rasgeleSayi = rand() % 100 + 1;
			sayac++;
		}
		matriS[elemanNum / 10][elemanNum % 10] = rasgeleSayi;
	}
	cout << "Toplam rasgele cagrim adedi : " << sayac << endl ;
	// fonksiyonumuz iki  boyutlu matris donduregegi icin pointer seklinde olmali
	int** matris = 0;
	matris = new int*[10];
	// 0'dan 10'e kadar sayilir
	for (int x = 0; x < 10; x++)
	{
		matris[x] = new int[10];
		for (int y = 0; y < 10; y++)	//0'den 10'kadar sayilir
		{
			matris[x][y] = matriS[x][y]; //yeni matrise deger atamak icin
		}
	}
	return matris;
}

void matrisYaz(int **matris)	//fonksiyon tanitimi
{	// 0'den 10'e kadar sayilir
	for (int i = 0; i < 10; i++)
	{	// 0'den 10'e kadar sayilir
		for (int j = 0; j < 10; j++)
		{	//ekrana yazdirmak icin
			cout << setw(4)<<matris[i][j]  ;
		}
		cout << endl;
	}
}

int** sirala(int**matris)	//fonksiyon tanitimi
{	// 0'den 100'e kadar sayilir
	for (int i = 0; i < 100; i++)
	{	//tum degerleri okumak icin
		for (int j = i+1; j < 100; j++)
		{	//tum degerleri karsilastirmak icin
			if (matris[i / 10][i % 10] < matris[j / 10][j % 10])
			{	//sarti saglarsa en boyuk eleman one al
				swap(matris[i / 10][i % 10], matris[j / 10][j % 10]);
			}
		}
	}
	return matris;
}