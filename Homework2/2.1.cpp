/******************************************************************
**			SAKARYA ÜNiVERSiTESi
**          BiLGiSAYAR VE BiLisiM BiLiMLER FAKÜLTESi
**          BiLGiSAYAR MÜHENDiSLigi BÖLÜMÜ
**          PROGRAMLAMAYA GiRis ÖDEVi
**          Ödev Numarasi        :....2-1....
**          Ögrenci Adi          :Nermin Kaya
********************************************************************/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	double vize_notu;
	cout << "Vize notunu giriniz ......................................................... : ";
	cin >> vize_notu;
	double birinci_odev_notu;
	cout << "1.odev notunu giriniz ....................................................... : ";
	cin >> birinci_odev_notu;
	double ikinci_odev_notu;
	cout << "2.odev notunu giriniz  ...................................................... : ";
	cin >> ikinci_odev_notu;
	double birinci_kisa_sinav_notu;
	cout << "1.kisa sinav notunu giriniz ................................................. : ";
	cin >> birinci_kisa_sinav_notu;
	double ikinci_kisa_sinav_notu;
	cout << "2.kisa sinav notunu giriniz  ................................................ : ";
	cin >> ikinci_kisa_sinav_notu;
	double vizenin_etkisi;
	double final_notu;
	cout << "Final sinavi notunu giriniz ................................................. : ";
	cin >> final_notu;
	cout << "vizenin yil icine etkisi yuzde kac olacaktir ................................ ? ";
	cin >> vizenin_etkisi;
	double odevlerin_etkisi;
	cout << "Odevlerin yil icine etkisi yuzde kac olacaktir .............................. ? ";
	cin >> odevlerin_etkisi;
	double kisa_sinavlarin_etkisi;
	cout << "Kisa sinavlarin yil icine etkisi yuzde kac olacaktir ........................ ? ";
	cin >> kisa_sinavlarin_etkisi;
	double yil_ici_puan;
	cout << "yil ici puanin etkisi yuzde kac olacaktir ................................... ? ";
	cin >> yil_ici_puan;
	// tum istenen puanlari girdikten sonra toplam notu hesaplayip 
	//(if-elseif-else)yapilari kullanarak harflendirme yapilacaktir
	double yil_ici = 0.01 * vizenin_etkisi * vize_notu + 0.005 * odevlerin_etkisi * (birinci_odev_notu + ikinci_odev_notu) + 0.005 * kisa_sinavlarin_etkisi * (birinci_kisa_sinav_notu + ikinci_kisa_sinav_notu);
	double yil_sonu = ((yil_ici * 0.01 * yil_ici_puan) + (final_notu * 0.01 * (100 - yil_ici_puan)));
	cout << "Yil sonu puani  " << yil_sonu;
	cout << "    ";
	if (yil_sonu < 50)
		cout << "FF";
	if ((yil_sonu >= 50) && (yil_sonu < 58))
		cout << "DD";
	if ((yil_sonu >= 58) && (yil_sonu < 65))
		cout << "DC";
	if ((yil_sonu >= 65) && (yil_sonu < 75))
		cout << "CC";
	if ((yil_sonu >= 75) && (yil_sonu < 80))
		cout << "CB";
	if ((yil_sonu >= 80) && (yil_sonu < 85))
		cout << "BB";
	if ((yil_sonu >= 85) && (yil_sonu < 90))
		cout << "BA";
	if ((yil_sonu >= 90) && (yil_sonu < 100))
		cout << "AA";
	cout << endl;
	system("PAUSE");
	return 0;
}
