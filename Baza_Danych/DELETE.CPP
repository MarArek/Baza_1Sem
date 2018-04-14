#include "LIBRARIES.h"

void fnDelete(st_Baza ar_Baza[], string &s_nazwa, int &i)
{
    fstream f_plik;
    string s_Imie, s_Nazwisko, s_Pesel;
    int j = i-1 ; //ROZMIAR TABLICY PO USUNIECIU
    int y = j;
    bool b_istnieje = false;
    cout << "Usuwanie pracownika z bazy. Podaj wszystkie wymagane dane.\n\n";
    cout << "Podaj imie pracownika: ";
    cin >> s_Imie;
    cout << "Podaj nazwisko pracownika: ";
    cin >> s_Nazwisko;
    cout << "Podaj PESEL pracownika: ";
    cin >> s_Pesel;

    do
    {
        if(s_Imie == ar_Baza[y].s_imie && s_Nazwisko == ar_Baza[y].s_nazwisko && s_Pesel == ar_Baza[y].s_pesel)
        {
            for(int x = y; x < j; x++)
            {
                ar_Baza[x].s_imie = ar_Baza[x+1].s_imie;      //PRZESUN DO USUNIETEJ JEDEN W DOL
                ar_Baza[x].s_nazwisko = ar_Baza[x+1].s_nazwisko;
                ar_Baza[x].s_pesel = ar_Baza[x+1].s_pesel;
            }
                ar_Baza[i].s_imie.clear();     //USUN OSTATNIA WARTOSC W TABLICY REKORDOW
                ar_Baza[i].s_nazwisko.clear();
                ar_Baza[i].s_pesel.clear();
            i--;
            b_istnieje = true;
            break;
        }
        else
            y--;
    }while(b_istnieje == true || y>=0);
    if(b_istnieje == false)
    {
        cout << "Nie ma takiej osoby!"; Sleep(500); system("cls");
        return;
    }
    fnClear(s_nazwa);
    f_plik.open(s_nazwa.c_str(), ios::out);

    for(y = 0; y < j; y++)
    {
        f_plik << ar_Baza[y].s_imie << " " << ar_Baza[y].s_nazwisko << " "<< ar_Baza[y].s_pesel << " " << ar_Baza[y].s_stanowisko << " " << ar_Baza[y].s_pensja << endl;
    }
    system("cls");
    f_plik.close();
}

