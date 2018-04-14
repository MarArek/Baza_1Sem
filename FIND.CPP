#include "LIBRARIES.h"

void fnFind(st_Baza ar_Baza[], string &s_nazwa, const int &i) //Funkcja szukajaca rekordu
{
    fstream f_plik;
    bool b_found = false;
    string s_szukana, s_line;
    string s_imie, s_nazwisko, s_pesel, s_stanowisko, s_pensja;

    f_plik.open(s_nazwa.c_str(), ios::in);
    system("cls");
    wybor:
    cout << "\t\t\t\tWyszukiwarka osob" << endl;
    cout << "Co szukasz? Wybierz:\n\"i\" dla imienia;\n\"n\" dla nazwiska;\n\"p\" dla PESEL;\n\"s\" dla stanowiska;\n\"w\" dla wynagrodzenia;\n\"d\" dla dowolnego;\nWpisz: ";
    char c_button;
    cin >> c_button;
    switch(c_button)
    {
        case 'i':
            system("cls");
            cout << "Podaj szukane imie: ";
            cin >> s_imie;
            system("cls");
            for(int j = 0; j<=i ; j++)
            {
                getline(f_plik, s_line);
                if(s_imie == ar_Baza[j].s_imie)
                {
                    cout << s_line << endl;
                    Sleep(200);
                    b_found = true;
                }
            }
            break;
        case 'n':
            system("cls");
            cout << "Podaj szukane nazwisko: ";
            cin >> s_nazwisko;
            system("cls");
            for(int j = 0; j<=i ; j++)
            {
                getline(f_plik, s_line);
                if(s_nazwisko == ar_Baza[j].s_nazwisko)
                {
                    cout << s_line << endl;
                    Sleep(200);
                    b_found = true;
                }
            }
            break;
        case 'p':
            system("cls");
            cout << "Podaj szukany pesel: ";
            cin >> s_pesel;
            system("cls");
            for(int j = 0; j<=i ; j++)
            {
                getline(f_plik, s_line);
                if(s_pesel == ar_Baza[j].s_pesel)
                {
                    cout << s_line << endl;
                    Sleep(200);
                    b_found = true;
                }
            }
            break;
        case 's':
            system("cls");
            cout << "Podaj szukane stanowisko: ";
            cin >> s_stanowisko;
            system("cls");
            for(int j = 0; j<=i ; j++)
            {
                getline(f_plik, s_line);
                if(s_stanowisko == ar_Baza[j].s_stanowisko)
                {
                    cout << s_line << endl;
                    Sleep(200);
                    b_found = true;
                }
            }
            break;
        case 'w':
            system("cls");
            cout << "Podaj szukana pensje: ";
            cin >> s_pensja;
            system("cls");
            for(int j = 0; j<=i ; j++)
            {
                getline(f_plik, s_line);
                if(s_pensja == ar_Baza[j].s_pensja)
                {
                    cout << s_line << endl;
                    Sleep(200);
                    b_found = true;
                }
            }
            break;
        case 'd':
            cin.clear();
            cin.sync();
            system("cls");
            cout << "Podaj dowolne szukane oddzielone spacjami:\n ";
            getline(cin, s_szukana);
            system("cls");
            for(int j = 0; j<i ; j++)
            {
                getline(f_plik, s_line);
                if(s_line.find(s_szukana)!=string::npos)
                {
                    cout << s_line << endl;
                    Sleep(300);
                    b_found = true;
                }
            }
            break;
        default: //Gdy uzytkownik wybierze zla litere
            system("cls");
            cout << "Zly przycisk. Sprobuj ponownie!";
            Sleep(1000);
            system("cls");
            goto wybor;
    }

    f_plik.close();
    if(b_found==false) //Gdy nie ma wskazanego rekordu w bazie
    {
        system("cls");
        cout << "Nic nie znaleziono.";
        Sleep(1000);
        system("cls");
        return;
    }
    cout << endl;
    do{
    cout << "Wcisnij q aby wrocic do MENU: ";
    cin >> c_button;
        if(c_button=='q') system("cls");
    }while(c_button != 'q'); //Powrot do menu
}
