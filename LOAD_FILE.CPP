#include "LIBRARIES.h"

void fnLoad(st_Baza ar_baza[], string &s_nazwa, int &i) //Funkcja wczytujaca plik Bazy Danych
{
    ifstream f_plik;
    i=0;
    do
    {
        system("cls");
        cout << "Podaj nazwe pliku (z rozszerzeniem .txt) - aby wrocic do menu wpisz q: " << endl;
        cin >> s_nazwa;
        if(s_nazwa == "q") //Powrot do menu
        {
            system("cls");
            s_nazwa = "";
            return;
        }

        s_nazwa = "../DoWczytania/" + s_nazwa;
        f_plik.open(s_nazwa.c_str(), ios::in);
        system("cls");
        if(!f_plik.is_open())
        {
            cout << "Nie ma takiego pliku!";
            Sleep(700);
            system("cls");
        }
    }while(!f_plik.is_open());
    if(f_plik.is_open())
    {
        cout << "Poprawnie wczytano plik o nazwie: \"" << s_nazwa << "\"";
        Sleep(1500);
        system("cls");
    }

    for(int k = 0; k < i_MAX; k++)
    {
        ar_baza[k].s_imie.clear();
        ar_baza[k].s_nazwisko.clear();
        ar_baza[k].s_pesel.clear();
        ar_baza[k].s_stanowisko.clear();
        ar_baza[k].s_pensja.clear();
    }
    if(!f_plik.eof())
    {
        while(!f_plik.eof()) //Wczytanie pliku do Bazy w konsoli
        {
            f_plik >> ar_baza[i].s_imie >> ar_baza[i].s_nazwisko >> ar_baza[i].s_pesel >> ar_baza[i].s_stanowisko >> ar_baza[i].s_pensja;
            //if(!f_plik.eof())
                i++;

        }
    }
    f_plik.close();
    return;
}

