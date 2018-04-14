#include "LIBRARIES.h"

void fnUpdate(st_Baza ar_Baza[], string &s_nazwa, const int &i)
{
    fstream f_plik;
    string s_line, s_imie, s_nazwisko, s_pesel, s_szukana;
    int j;
    bool b_found = false;
    cin.sync();

    cout << "Co szukasz?\n\n";
    cout << "Podaj Imie: "; cin >> s_imie;
    cout << "Podaj Nazwisko: "; cin >> s_nazwisko;
    cout << "Podaj Pesel: "; cin >> s_pesel;
    system("cls");
    f_plik.open(s_nazwa.c_str(), ios::in | ios::app);
    s_szukana = s_imie + " " + s_nazwisko + " " + s_pesel;

    for(j = 0; j<i ; j++)
    {
        getline(f_plik, s_line);
        if(s_line.find(s_szukana)!=string::npos)
        {
            b_found = true;
            break;
        }
    }
    f_plik.close();
    if(b_found==true)
    {
        system("cls");
        cout << "Podaj nowe Imie: ";
        cin >> ar_Baza[j].s_imie;
        cout << "Podaj nowe Nazwisko: ";
        cin >> ar_Baza[j].s_nazwisko;
        cout << "Podaj nowy PESEL: ";
        cin >> ar_Baza[j].s_pesel;
        cout << "Podaj nowe Stanowisko: ";
        cin >> ar_Baza[j].s_stanowisko;
        cout << "Podaj nowe wynagrodzenie: ";
        cin >> ar_Baza[j].s_pensja;
        fnClear(s_nazwa);
        f_plik.open(s_nazwa.c_str(), ios::out);

        for(int y = 0; y <= i; y++)
        {
            f_plik << ar_Baza[y].s_imie << " " << ar_Baza[y].s_nazwisko << " " << ar_Baza[y].s_pesel << " " << ar_Baza[y].s_stanowisko << " " << ar_Baza[y].s_pensja << endl;
        }
        system("cls");
        f_plik.close();
    }
    else
    {
        system("cls");
        cout << "Nie znaleziono.";
        Sleep(1500);
        system("cls");
    }

}
