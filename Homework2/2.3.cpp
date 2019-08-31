/******************************************************************
**			 SAKARYA ÜNiVERSiTESi
**          BiLGiSAYAR VE BiLisiM BiLiMLER FAKÜLTESi
**          BiLGiSAYAR MÜHENDiSLigi BÖLÜMÜ
**          PROGRAMLAMAYA GİRİŞ ÖDEVİ
**          Ödev Numarasi        :....2-3....
**          Ögrenci Adi          : Nermin Kaya
********************************************************************/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double A , B , C ;
	cout << "AX^2+BX+C de A'yi ve B'yi ve C'yi sirali giriniz=  "<<endl;
	cin >> A >> B >> C;//kullanici katsayilarini girecek
	cout << A << "X^2+(" << B << ")X +(" << C <<")"<< endl;//denklem seklidir
	double delta , x1 , x2 ;
	delta = pow(B, 2) - 4 * A*C;//delta hesaplanacaktir
	if (delta > 0)
	{
		x1 = ((-B - sqrt(delta)) / 2 * A);//1.kok
		x2 = ((-B + sqrt(delta)) / 2 * A);//2.kok
		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	else if (delta == 0)
	{
		x1 = (-B /2 * A);
		x2 = x1;
		cout << "x1 = x2 = " << x1 <<endl;
	}
	else
		cout << "Denklemin reel koku yoktur"<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}