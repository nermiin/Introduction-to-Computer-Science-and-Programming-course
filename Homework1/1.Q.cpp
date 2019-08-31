/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI….1..:
**				ÖĞRENCİ ADI....Nermin Kaya...........:
****************************************************************************/
#include<iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "turkish");
	char sau_bilgisayar[14] = { 'S','A','Ü',' ','B','I','L','G','I','S','A','Y','A','R' }; 
	char muhendisligi_bolumu[19] = { 'M','Ü','H','E','N','D','I','S','L','I','G','I',' ','B','Ö','L','Ü','M','Ü' };
	for (int line = 1; line <= 20; line++)	// The first 'for' is to move between 20 line . 
	{
		for (int column = 1; column <= 24; column++)	// The second is to move between 24 column .
		{	// The first condition is used to print the frame .
			if ((column == 1) || (line == 1) || (line == 20) || (column == 24))
			{
				cout << "* ";
				}
			// 2. used to print SAU BILGISAYAR  .
			else if ((line == 2) && (column < 16) && (column >= 2))
			{
				cout << sau_bilgisayar[column - 2] << " ";
			}
			// 3. used to print MUHENDISLIGI BOLUMU
			else if ((line == 11) && (column < 21) && (column >= 2))
			{
				cout <<  muhendisligi_bolumu[column - 2] << " ";
			}
			// 4. used to print two triangle in the top section
			else if ((line >= 4)&&(line <= 9)&&(column >= 2)&&(column<=23))
			{	// a) if used to print a space .
				if ((line + column) <= 10)
					cout << "  ";
				else if (column <= line + 3) // b) used to print triangle of stars .
				{
					cout << "* ";
				}
				else if (line + column <= 21) // c) used to print space between triangle .
				{
					cout << "  ";
				}
				else if (column <= line + 14)  // d) used to print second triangle . 
				{
					cout << "* ";
				}								// e) used to print inverted triangle .
				else if ((line + column >= 25)&&(line+column<=27)&&(column-line>=17)&&(column-line<=19))
					cout << "* ";
				else
				{
					cout << "  ";
				}
			} // 5. used to print two triangle in the bottom section.
			else if ((line >= 13) && (line <= 18) && (column >= 2) && (column <= 23))
			{								// a) if used to print a space .
				if (line + column <= 19)
					cout << "  ";
				else if (column + 6 <= line)  // b) used to print triangle of stars .
					cout << "* ";
											// c) used to print inverted triangle .
				else if ((line + column >= 23) && (line + column <= 25) && (line - column >= 1) && (line - column <= 3))
					cout << "* ";
				else if (line+column<=30)  // d) used to print a space .
					cout << "  ";
				else if (column<=line+5)  // e) used to print triangle of stars .
					cout << "* ";
				else
					cout << "  ";		  // f) used to print a space .
			}
			else {
				cout << "  ";				// 6. used to print space in the program .
			}
		}
		cout << endl;						// to go down a line
	}
	system("pause");
	return EXIT_SUCCESS;
			}
											// The End :)(: