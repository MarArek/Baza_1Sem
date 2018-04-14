#include "LIBRARIES.h"
bool Check(string s); //Funkcja sprawdzajaca pensje pod wzgledem poprawnosci zapisu gdyz pensja jest stringiem

void fnAdd(st_Baza ar_Baza[], const string &s_nazwa,  int &i) // Funkcja dodajaca nowy rekord do bazy
{
    fstream f_plik;
    Add:
    cout << "Podaj imie pracownika: ";
    cin >> ar_Baza[i].s_imie;
    cout << "Podaj nazwisko pracownika: ";
    cin >> ar_Baza[i].s_nazwisko;
    cout << "Podaj pesel pracownika: ";
    cin >> ar_Baza[i].s_pesel;
        if(ar_Baza[i].s_pesel.length() != 11)      //Kontrola czy pesel sklada sie z 11 pozycji
        {
            cout << "Pesel musi sie skladac z 11 cyfr! Ponow probe wpisania;";
            Sleep(2500);
            system("cls");
            goto Add;
        }
    cout << "Podaj stanowisko pracownika: ";
    cin >> ar_Baza[i].s_stanowisko;
    cout << "Podaj pensje pracownika: ";
    cin >> ar_Baza[i].s_pensja;
    if(Check(ar_Baza[i].s_pensja))      //Kontrola czy pensja sklada sie z cyfr
        goto Add;   //Jesli nie to wroc i wpisz wszystko ponownie
    fnClear(s_nazwa); //Czysci blik bazy danych aby potem go nadpisac
    f_plik.open(s_nazwa.c_str(), ios::app); //Nadpisanie pliku wczesniej wymazanego
    for(int j = 0; j<=i ;j++)
        f_plik << ar_Baza[j].s_imie << " " << ar_Baza[j].s_nazwisko << " " << ar_Baza[j].s_pesel << " " << ar_Baza[j].s_stanowisko << " " << ar_Baza[j].s_pensja << endl;
    i++;    //Zwiekszenie ilosci rekordow w bazie o jeden

    system("cls");
    cout << "Dodano"; Sleep(200); system("cls");
    f_plik.close();
}

bool Check(string s)
{
    bool b = false;
    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] < 48 || s[i] > 57) && s[i] != 44 && s[i] != 46) //(int)'0' == 48; (int)'9' == 57; (int)',' == 44; (int)'.' == 46
        {
            b = true;
            cout << "Pensja moze sie skladac tylko z cyfr, przecinka lub kropki";
            Sleep(2500);
            system("cls");
            return b;
        }
    }
    return b; //Pensja sklada sie z poprawnych znakow
}