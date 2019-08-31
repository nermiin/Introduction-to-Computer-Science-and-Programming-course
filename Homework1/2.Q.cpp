/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI….Ödev(1)2.soru.:
**				ÖĞRENCİ ADI...Nermin Kaya..........:

****************************************************************************/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	// Users a and b numbers have to enter
	int  first_number, second_number;
	cout << "Please enter two numbers between (1 & 20) and the first number have to be bigger than second number  "<<endl;
	cin >> first_number >> second_number ;
	cout << "The first number is : " << first_number <<" The second number is:   " <<second_number;
	cout << endl;
	// The condition a>b  and a,b have to be between(20) 
	while ((first_number>20) || (second_number>20) || (first_number<second_number)) {
		cout << "The numbers you have entered bigger then 20  or the second number is bigger than first number , please try again:";
		cin >> first_number>>second_number;
	}
	cout << endl;
	for (int line = 1; line >= -1; line--) //I've put the firt 'for' to move between the lines.  
	{
		for (int variable = 1; variable <= 20; variable++) // second 'for' to give values to X .
		{
			if ((variable > first_number) && (line == 1)) // if x>a print star to the first line .
			{
				cout << "*";
			}
			else									// else print space .
				cout << " ";
			if ((variable <= first_number) && (variable>second_number) && (line == 0)) // if a>=x>b print star to the second line.
			{
				cout << "*";
			}
			else									//else print space .
				cout << " ";
			if ((variable <= second_number) && (line == -1)) // if x<=b print star to the third line .
			{
				cout << "*";
			}
			else									//else print space .
				cout << " ";
		}
		cout << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}											// The End :)