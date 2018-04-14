#include "LIBRARIES.h"
#include <iomanip>

void fnShow(st_Baza ar_baza[], const int &i) //Funkcja wyswietlajaca rekordy z pliku
{
char c_button;
    do
    {
        cout << setw(10) << "Imie" << " " << setw(15) << "Nazwisko"
            << " " << setw(15) << "Pesel" << " " << setw(15)
            << "Stanowisko" << " " << setw(10) << "Pensja" << endl << endl; //Naglowki
        for(int j = 0; j < i; j++)
        {
            cout << setw(10) << ar_baza[j].s_imie << " " << setw(15) << ar_baza[j].s_nazwisko
            << " " << setw(15) << ar_baza[j].s_pesel << " " << setw(15)
            << ar_baza[j].s_stanowisko << " " << setw(10) << ar_baza[j].s_pensja<< endl;
        }
        cout << endl << "Aby wrocic do menu wybierz \"q\"\n";
        cin >> c_button;
    }while(c_button != 'q');
    system("cls");
return;
}

