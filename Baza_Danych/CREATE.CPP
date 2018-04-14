#include "LIBRARIES.h"

void fnCreate()
{
    ofstream f_plik;
    string s_nazwa;
    st_Baza ar_baza[i_MAX];

    do
    {
        stworz:
    system("cls");
    cout << "Podaj nazwe nowego pliku (z rozszerzeniem .txt): " << endl;
    cin >> s_nazwa;
    if(s_nazwa.find(".txt") == string::npos && s_nazwa.find(".TXT") == string::npos)
    {
        system("cls");
        cout << "Potrzebne jest rozszerzenie .txt";
        Sleep(2000);
        system("cls");
        goto stworz;
    }
    s_nazwa = "../DoWczytania/" + s_nazwa;
    f_plik.open(s_nazwa.c_str());
    system("cls");
        if(f_plik.is_open())
        {
            system("cls");
            cout << "Pomyslnie stworzono \"baze danych\" - " << s_nazwa;
            Sleep(2000);
            system("cls");
        }
        if(!f_plik.is_open())
        {
            system("cls");
            cout << "Zla nazwa.";
            Sleep(1000);
            system("cls");
        }

    }while(!f_plik.is_open());

    f_plik.close();

}
