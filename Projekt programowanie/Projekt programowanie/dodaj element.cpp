#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<Windows.h>
#include "Naglowek.h"

using namespace std;


void dodaj_element()
{
	double ilosc_odcinkow_obliczenia{};
    double ilosc_czasu_obliczenia{};
	fstream listaserial, listafilm, listaanime;
	fstream ilosc_obejrzanych_seriali, ilosc_obejrzanych_anime, ilosc_obejrzanych_filmow;
	fstream ilosc_odcinkow_seriali, ilosc_odcinkow_anime;
	fstream ilosc_czasu_seriali, ilosc_czasu_anime, ilosc_czasu_filmow;
	string tytul, studio, gatunek, postacie, aktorzy_glosowi, aktorzy, rezyser, scenarzysta, premiera, opis, nic, ilosc_odcinkow{}, czas_trwania{};
	char czy_chcesz_dalej;
	do {
		system("cls");
		char wybor_kategoria{};
		cout << "DODAWANIE ELEMENTU DO WATCHLISTY" << endl;
		cout << "KATEGORIE: " << endl;
		cout << "1. Film" << endl;
		cout << "2. Serial" << endl;
		cout << "3. Anime" << endl;
		cout << "4. Powr¢t do menu gˆ¢wnego" << endl;
		cout << "5. Zakoäcz program" << endl;
		cout << "Wybierz opcje: ";
		cin >> wybor_kategoria;

		if (wybor_kategoria == '1' || wybor_kategoria == '2' || wybor_kategoria == '3' || wybor_kategoria == '4' || wybor_kategoria == '5')
		{

			switch (wybor_kategoria)
			{
			case '1':
				system("cls");
				cout << "*****************************" << endl;
				cout << "**Dodajesz film do kolekcji**" << endl;
				cout << "*****************************" << endl;
				//film
				cout << "";
				getline(cin, nic);
				cout << endl;
				cout << "Podaj tytuˆ?: ";
				getline(cin, tytul);
				cout << endl;
				cout << "Podaj studio: ";
				getline(cin, studio);
				cout << endl;
				cout << "Podaj gatunek/i: ";
				getline(cin, gatunek);
				cout << endl;
				cout << "Podaj scenarzyste/t¢w: ";
				getline(cin, scenarzysta);
				cout << endl;
				cout << "Podaj posta†/cie: ";
				getline(cin, postacie);
				cout << endl;
				cout << "Podaj aktor¢w: ";
				getline(cin, aktorzy);
				cout << endl;
				cout << "Podaj re¾ysera: ";
				getline(cin, rezyser);
				cout << endl;
				cout << "Podaj date premiery[xx miesi¥c xxxx]: ";
				getline(cin, premiera);
				cout << endl;
				cout << "Podaj ˜?redni czas trawania filmu w minutach: ";
				getline(cin, czas_trwania);
				cout << endl;



				listafilm.open("listafilm.txt", ios::out | ios::app);

				listafilm << "Tytu??: " << tytul << endl;
				listafilm << "Studio: " << studio << endl;
				listafilm << "Re–yser: " << rezyser << endl;
				listafilm << "?redni czas trwania filmu w minutach: " << czas_trwania << endl;
				listafilm << "Data premiery: " << premiera << endl;
				listafilm << "Postacie: " << postacie << endl;
				listafilm << "Gatunek: " << gatunek << endl;
				listafilm << "Scenarzy?ci: " << scenarzysta << endl;
				listafilm << "Aktorzy: " << aktorzy << endl;
				listafilm << "*************************************"<<endl;
				listafilm.close();

				ilosc_obejrzanych_filmow.open("ilosc-obejrzanych-filmow.txt", ios::out | ios::app);
				ilosc_obejrzanych_filmow << "1" << endl;
				ilosc_obejrzanych_filmow.close();

				ilosc_czasu_filmow.open("ilosc-czasu-filmow.txt", ios::out | ios::app);
				ilosc_czasu_filmow << czas_trwania << endl;
				ilosc_czasu_filmow.close();
				break;
			case '2':

				system("cls");
				cout << "*****************************" << endl;
				cout << "**Dodajesz serial do kolekcji**" << endl;
				cout << "*****************************" << endl;
				//serial
				cout << "";
				getline(cin, nic);
				//serial
				cout << "Podaj tytuˆ?: ";
				getline(cin, tytul);
				cout << endl;
				cout << "Podaj studio: ";
				getline(cin, studio);
				cout << endl;
				cout << "Podaj gatunek/i: ";
				getline(cin, gatunek);
				cout << endl;
				cout << "Podaj posta†/cie: ";
				getline(cin, postacie);
				cout << endl;
				cout << "Podaj aktora/¢w: ";
				getline(cin, aktorzy);
				cout << endl;
				cout << "Podaj re¾ysera: ";
				getline(cin, rezyser);
				cout << endl;
				cout << "Podaj ilo˜† odcink¢w: ";
				cin >> ilosc_odcinkow;
				cout << endl;
				cout << "Podaj ?˜redni czas trawania jednego odcinka w minutach: ";
				cin >> czas_trwania;
				cout << endl;

				ilosc_odcinkow_obliczenia = atof(ilosc_odcinkow.c_str());
				ilosc_czasu_obliczenia = atof(czas_trwania.c_str());

				listaserial.open("listaserial.txt", ios::out | ios::app);

				listaserial << "Tytu??: " << tytul << endl;
				listaserial << "Studio: " << studio << endl;
				listaserial << "Re–yser: " << rezyser << endl;
				listaserial << "Ilo??? odcinkôw: " << ilosc_odcinkow << endl;
				listaserial << "?redni czas trwania odcinka w minutach: " << czas_trwania << endl;
				listaserial << "Postacie: " << postacie << endl;
				listaserial << "Aktorzy g??osowi: " << aktorzy << endl;
				listaserial << "Gatunek: " << gatunek << endl;
				listaserial << "Czas trwania ca?ego serialu w godzinach: " << (ilosc_odcinkow_obliczenia * ilosc_czasu_obliczenia) / 60 << endl;
				listaserial << "*************************************" << endl;
				listaserial.close();

				ilosc_obejrzanych_seriali.open("ilosc-obejrzanych-seriali.txt", ios::out | ios::app);
				ilosc_obejrzanych_seriali << "1" << endl;
				ilosc_obejrzanych_seriali.close();

				ilosc_odcinkow_seriali.open("ilosc-odcinkow-seriali.txt", ios::out | ios::app);
				ilosc_odcinkow_seriali << ilosc_odcinkow << endl;
				ilosc_odcinkow_seriali.close();

				ilosc_czasu_seriali.open("ilosc-czasu-seriali.txt", ios::out | ios::app);
				ilosc_czasu_seriali << setprecision(2) << (ilosc_odcinkow_obliczenia * ilosc_czasu_obliczenia) << endl;
				ilosc_czasu_seriali.close();

				break;

			case '3':
				system("cls");
				cout << "*****************************" << endl;
				cout << "**Dodajesz anime do kolekcji**" << endl;
				cout << "*****************************" << endl;
				//anime
				cout << "";
				getline(cin, nic);
				cout << "Podaj tytuˆ?: ";
				getline(cin, tytul);
				cout << endl;
				cout << "Podaj studio: ";
				getline(cin, studio);
				cout << endl;
				cout << "Podaj gatunek/i: ";
				getline(cin, gatunek);
				cout << endl;
				cout << "Podaj posta†/cie: ";
				getline(cin, postacie);
				cout << endl;
				cout << "Podaj aktora/¢w gˆosowego/ych: ";
				getline(cin, aktorzy_glosowi);
				cout << endl;
				cout << "Podaj re¾ysera: ";
				getline(cin, rezyser);
				cout << endl;
				cout << "Podaj ilo˜† odcink¢w: ";
				cin >> ilosc_odcinkow;
				cout << endl;
				cout << "Podaj ˜redni czas trawania jednego odcinka w minutach: ";
				cin >> czas_trwania;
				cout << endl;

				ilosc_odcinkow_obliczenia = atof(ilosc_odcinkow.c_str());
				ilosc_czasu_obliczenia = atof(czas_trwania.c_str());

				listaanime.open("listaanime.txt", ios::out | ios::app);

				listaanime << "Tytu??: " << tytul << endl;
				listaanime << "Studio: " << studio << endl;
				listaanime << "Re–yser: " << rezyser << endl;
				listaanime << "Ilo??? odcinkôw: " << ilosc_odcinkow << endl;
				listaanime << "?redni czas trwania odcinka w minutach: " << czas_trwania << endl;
				listaanime << "Postacie: " << postacie << endl;
				listaanime << "Aktorzy g??osowi: " << aktorzy_glosowi << endl;
				listaanime << "Gatunek: " << gatunek << endl;
				listaanime << "Czas trwania ca?ˆego anime w godzinach: " << setprecision(2) << (ilosc_odcinkow_obliczenia * ilosc_czasu_obliczenia) / 60 << endl;
				listaanime << "*************************************" << endl;
				listaanime.close();



				ilosc_obejrzanych_anime.open("ilosc-obejrzanych-anime.txt", ios::out | ios::app);
				ilosc_obejrzanych_anime << "1" << endl;
				ilosc_obejrzanych_anime.close();

				ilosc_odcinkow_anime.open("ilosc-odcinkow-anime.txt", ios::out | ios::app);
				ilosc_odcinkow_anime << czas_trwania << endl;
				ilosc_odcinkow_anime.close();

				ilosc_czasu_anime.open("ilosc-czasu-anime.txt", ios::out | ios::app);
				ilosc_czasu_anime << (ilosc_odcinkow_obliczenia * ilosc_czasu_obliczenia) << endl;
				ilosc_czasu_anime.close();

				break;

			case '4':
				system("cls");
				menu_glowne();

				break;

			case '5':
				exit(0);
				break;
			}
		}
	else
	{
	cout<<"Nie ma takiej opcji, spr¢buj ponownie"<<endl;
	system("pause");
	system("cls");
	dodaj_element();
	}
			system("cls");
			cout << "Czy chcesz zrobi† co˜ innego? Je˜li nie kliknij n, je˜li tak kliknij inny dowlony klawisz: ";
			cin >> czy_chcesz_dalej;
		}while (czy_chcesz_dalej != 'n');

	





}