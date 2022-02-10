#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<Windows.h>
#include "Naglowek.h"
using namespace std;

void Kolorowanie(string tekst, int kolor)
{

	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (kolor == 1) {

		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);  // seledynowy
	}
	else if (kolor == 2)
	{

		SetConsoleTextAttribute(hOut, FOREGROUND_RED);  // czerwony
	}
	else if (kolor == 3)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);  //zloty
	}
	else if (kolor == 4)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN); //zielony
	}
	else if (kolor == 5)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY); //srebrny
	}


	cout << tekst;
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);



}

void menu_glowne()
{
	char wybor_poczatkowy{};
	Kolorowanie("OTO WATCHLISTA\n", 1);
	Kolorowanie("MENU:\n", 2); 
	Kolorowanie("1. Wy�wietl watch liste\n", 3);
	Kolorowanie("2. Dodaj elementy do listy\n", 4);
	Kolorowanie("3. Statystyki\n", 3);
	Kolorowanie("4. Sprawd� swoj� wiedze\n", 4);
	Kolorowanie("5. Wyczy�� kolekcje oraz quizy\n", 3);
	Kolorowanie("6. Zako�cz program\n", 4);
	Kolorowanie("Wybierz opcje: ", 5);
	cin >> wybor_poczatkowy;
	if (wybor_poczatkowy == '1' || wybor_poczatkowy == '2' || wybor_poczatkowy == '3' || wybor_poczatkowy == '4' || wybor_poczatkowy == '5' || wybor_poczatkowy == '6')
	{
		switch (wybor_poczatkowy)
		{
		case '1':
			wyswietl_liste();
			break;
		case '2':
			dodaj_element();
			break;
		case '3':
			statystyki();
			break;
		case '4':
			wybor_w_quiz();
			break;
		case '5':
			wyczysc();
			break;
		case '6':
			exit(0);

			break;
		}
	}
	else
	{
		Kolorowanie("Nie ma takiej opcji, wybierz ponownie!!!!\n", 2);
		system("pause");
		system("cls");
		menu_glowne();
	}
}