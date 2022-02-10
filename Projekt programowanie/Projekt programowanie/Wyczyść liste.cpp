#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include "Naglowek.h"
using namespace std;



void wyczysc()
{

	fstream listaanime, listafilm, listaserial;
	fstream pytaniaserial, pytaniafilm, pytaniaanime;
	fstream ilosc_obejrzanych_filmow, ilosc_czasu_filmow, ilosc_obejrzanych_seriali, ilosc_czasu_seriali, ilosc_odcinkow_seriali, ilosc_obejrzanych_anime, ilosc_odcinkow_anime, ilosc_czasu_anime;


	char czy_chcesz_dalej;
	do {
		system("cls");
		char wybor_kategoria{};
		string linia;
		cout << "Usuwanie WATCHLISTY oraz QUIZàW" << endl;
		cout << "KATEGORIE: " << endl;
		cout << "1. Film" << endl;
		cout << "2. Serial" << endl;
		cout << "3. Anime" << endl;
		cout << "4. Caˆ¥ kolekcje" << endl;
		cout << "5. Pytania"<<endl;
		cout << "6. Powr¢t do menu gˆ¢wnego" << endl;
		cout << "7. Zakoäcz program" << endl;
		cout << "Wybierz opcje: ";
		cin >> wybor_kategoria;
		if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4' || wybor_kategoria == '5' || wybor_kategoria == '6'|| wybor_kategoria == '7')
		{

			switch (wybor_kategoria)
			{
			case '1':
				system("cls");
				listafilm.open("listafilm.txt", ios::out | ios::trunc);
				listafilm.close(); cout << "Usuni©to zawarto˜† kolekcji film¢w" << endl;
				pytaniafilm.open("pytaniafilm.txt", ios::out | ios::trunc);
				pytaniafilm << "Pytania film" << endl;
				pytaniafilm << "  " << endl;
				pytaniafilm.close();
				ilosc_obejrzanych_filmow.open("ilosc-obejrzanych-filmow.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_filmow.close();
				ilosc_czasu_filmow.open("ilosc-czasu-filmow.txt", ios::out | ios::trunc);
				ilosc_czasu_filmow.close();
			
				system("pause");
				break;
			case '2':

				system("cls");
				listaserial.open("listaserial.txt", ios::out | ios::trunc);
				listaserial.close(); cout << "Usuni©to caˆ¥ zawrto˜† kolekcji seriali" << endl;
				pytaniaserial.open("pytaniaserial.txt", ios::out | ios::trunc);
				pytaniaserial << "Pytania serial" << endl;
				pytaniaserial << "  " << endl;
				pytaniaserial.close();
				ilosc_obejrzanych_seriali.open("ilosc-obejrzanych-seriali.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_seriali.close();
				ilosc_odcinkow_seriali.open("ilosc-odcinkow-seriali.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_seriali.close();
				ilosc_czasu_seriali.open("ilosc-czasu-seriali.txt", ios::out | ios::trunc);
				ilosc_czasu_seriali.close();
				system("pause");
				break;

			case '3':
				system("cls");
				listaanime.open("listaanime.txt", ios::out | ios::trunc);
				listaanime.close(); cout << "Usuni©to caˆ¥ kolekcji anime" << endl;
				pytaniaanime.open("pytaniaanime.txt", ios::out | ios::trunc);
				pytaniaanime << "Pytania anime" << endl;
				pytaniaanime << "  " << endl;
				pytaniaanime.close();
				ilosc_obejrzanych_anime.open("ilosc-obejrzanych-anime.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_anime.close();
				ilosc_odcinkow_anime.open("ilosc-odcinkow-anime.txt", ios::out | ios::trunc);
				ilosc_odcinkow_anime.close();
				ilosc_czasu_anime.open("ilosc-czasu-anime.txt", ios::out | ios::trunc);
				ilosc_czasu_anime.close();
				system("pause");
				break;
			case '4':
				system("cls");
				listafilm.open("listafilm.txt", ios::out | ios::trunc);
				listafilm.close(); cout << "Usuni©to zawarto˜† kolekcji film¢w" << endl;
				listaserial.open("listaserial.txt", ios::out | ios::trunc);
				listaserial.close(); cout << "Usuni©to zawarto˜† kolekcji seriali" << endl;
				listaanime.open("listaanime.txt", ios::out | ios::trunc);
				listaanime.close(); cout << "Usuni©to zawarto˜† kolekcji anime" << endl;
				pytaniafilm.open("pytaniafilm.txt", ios::out | ios::trunc);
				pytaniafilm << "Pytania film" << endl;
				pytaniafilm << "  " << endl;
				pytaniafilm.close();
				pytaniaserial.open("pytaniaserial.txt", ios::out | ios::trunc);
				pytaniaserial << "Pytania serial" << endl;
				pytaniaserial << "  " << endl;
				pytaniaserial.close();
				pytaniaanime.open("pytaniaanime.txt", ios::out | ios::trunc);
				pytaniaanime << "Pytania anime" << endl;
				pytaniaanime << "  " << endl;
				pytaniaanime.close();
				ilosc_obejrzanych_filmow.open("ilosc-obejrzanych-filmow.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_filmow.close();
				ilosc_czasu_filmow.open("ilosc-czasu-filmow.txt", ios::out | ios::trunc);
				ilosc_czasu_filmow.close();
				ilosc_obejrzanych_seriali.open("ilosc-obejrzanych-seriali.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_seriali.close();
				ilosc_odcinkow_seriali.open("ilosc-odcinkow-seriali.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_seriali.close();
				ilosc_czasu_seriali.open("ilosc-czasu-seriali.txt", ios::out | ios::trunc);
				ilosc_czasu_seriali.close();
				ilosc_obejrzanych_anime.open("ilosc-obejrzanych-anime.txt", ios::out | ios::trunc);
				ilosc_obejrzanych_anime.close();
				ilosc_odcinkow_anime.open("ilosc-odcinkow-anime.txt", ios::out | ios::trunc);
				ilosc_odcinkow_anime.close();
				ilosc_czasu_anime.open("ilosc-czasu-anime.txt", ios::out | ios::trunc);
				ilosc_czasu_anime.close();
				cout << "Usuni©to zawarto˜† kolekcji quiz¢w!!!!" << endl;
				system("pause");
				break;
			case '5':
				system("cls");
				pytaniafilm.open("pytaniafilm.txt", ios::out | ios::trunc);
				pytaniafilm << "Pytania film" << endl;
				pytaniafilm << "  " << endl;
				pytaniafilm.close();
				pytaniaserial.open("pytaniaserial.txt", ios::out | ios::trunc);
				pytaniaserial << "Pytania serial" << endl;
				pytaniaserial << "  " << endl;
				pytaniaserial.close();
				pytaniaanime.open("pytaniaanime.txt", ios::out | ios::trunc);
				pytaniaanime << "Pytania anime" << endl;
				pytaniaanime << "  " << endl;
				pytaniaanime.close(); cout << "Usuni©to zawarto?˜† pytaä" << endl;
				system("pause");
				break;
			case '6':
				system("cls");
				menu_glowne();

				break;

			case '7':
				exit(0);
				break;
			}

		}
		else
		{
			cout << "Nie ma takiej opcji, spr¢buj ponownie" << endl;
			system("pause");
			system("cls");
			wyczysc();
		}
		system("cls");
		cout << "Czy chcesz zrobi† co?˜ innego? Je˜li nie kliknij n, je˜li tak kliknij inny dowolny klawisz: : ";
		cin >> czy_chcesz_dalej;
	} while (czy_chcesz_dalej != 'n');


















	
}