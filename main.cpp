//Program BAZA DANYCH Cyberbezpieczeñstwo A. Maruszczak 2017
//Imie Nazwisko PESEL Stanowisko Pensja
#include "LIBRARIES.h"
#include <iomanip>


int main()
{
    st_Baza ar_baza[i_MAX];
    string s_login, s_haslo, s_nazwa;
    int i;
    bool b_K = false;

    do{     //Logowanie
        login:
        cout << "\n\n\n\n\n\n\n" << setw(55) << "Podaj login: ";
        cin >> s_login;
        cout << setw(55) << "Podaj haslo: ";
        cin >> s_haslo;
        system("cls");
        b_K = fnLogowanie(s_login, s_haslo);
    }while(!b_K);

    do
    {
        menu:
        fnMainMenu(s_login, s_nazwa);        //WYWOLANIE MENU
        char c_button;
        cin >> c_button;
        system("cls");

        switch(c_button)        //WYBOR W MENU
        {
            case '1':           //STWORZ PLIK TXT "baza danych"
                fnCreate();
                break;
            case '2':           //CZYTAJ PLIK
                fnLoad(ar_baza, s_nazwa, i);
                break;
            case '3':           //WYSWIETL ZAWARTOSC PLIKU
                if(s_nazwa == "")
                {
                    system("cls");
                    cout << "Nie wczytano bazy do edycji!";
                    Sleep(1000);
                    system("cls");
                    goto menu;
                }
                fnShow(ar_baza, i);
                break;
            case '4':           //DODAJ OSOBE DO LISTY
                if(s_nazwa == "")
                {
                    system("cls");
                    cout << "Nie wczytano bazy do edycji!";
                    Sleep(1000);
                    system("cls");
                    goto menu;
                }
                fnAdd(ar_baza, s_nazwa, i);
                break;
            case '5':           //USUN OSOBE Z LISTY
                if(s_nazwa == "")
                {
                    system("cls");
                    cout << "Nie wczytano bazy do edycji!";
                    Sleep(1000);
                    system("cls");
                    goto menu;
                }
                fnDelete(ar_baza, s_nazwa, i);
                break;
            case '6':           //AKTUALIZUJ OSOBE
                if(s_nazwa == "")
                {
                    system("cls");
                    cout << "Nie wczytano bazy do edycji!";
                    Sleep(1000);
                    system("cls");
                    goto menu;
                }
                fnUpdate(ar_baza, s_nazwa, i);
                break;
            case '7':           //WYSZUKAJ OSOBE
                if(s_nazwa == "")
                {
                    system("cls");
                    cout << "Nie wczytano bazy do edycji!";
                    Sleep(1000);
                    system("cls");
                    goto menu;
                }
                fnFind(ar_baza, s_nazwa, i);
                break;
            case '8':           //REJESTRACJA UZYTKOWNIKA
                fnRegister();
                break;
            case '9':
                s_nazwa.clear();
                goto login;     //WYLOGOWANIE
                break;
            case 'q':           //WYJSCIE Z PROGRAMU
                cout << "Wyjscie";
                Sleep(1000);
                exit(4884);
            default: //WYBRANO ZLA OPCJE
                system("cls");
                cout << "Zly przycisk. Sprobuj jeszcze raz.";
                Sleep(1500);
                system("cls");
                break;

        }
    }while(1);


    return 0;
}


