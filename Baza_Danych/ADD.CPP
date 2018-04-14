#include "LIBRARIES.h"
void fnAdd(st_Baza ar_Baza[], const string &s_nazwa,  int &i)
{
    fstream f_plik;
    cout << "Podaj imie pracownika: ";
    cin >> ar_Baza[i].s_imie;
    cout << "Podaj nazwisko pracownika: ";
    cin >> ar_Baza[i].s_nazwisko;
    cout << "Podaj pesel pracownika: ";
    cin >> ar_Baza[i].s_pesel;
    cout << "Podaj stanowisko pracownika: ";
    cin >> ar_Baza[i].s_stanowisko;
    cout << "Podaj pensje pracownika: ";
    cin >> ar_Baza[i].s_pensja;
    fnClear(s_nazwa);
    f_plik.open(s_nazwa.c_str(), ios::app);
    for(int j = 0; j<=i ;j++)
        f_plik << ar_Baza[j].s_imie << " " << ar_Baza[j].s_nazwisko << " " << ar_Baza[j].s_pesel << " " << ar_Baza[j].s_stanowisko << " " << ar_Baza[j].s_pensja << endl;
    i++;

    system("cls");
    cout << "Dodano"; Sleep(200); system("cls");
    f_plik.close();
}
