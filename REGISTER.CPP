#include "LIBRARIES.h"
#include <iomanip>

void fnRegister() //Funkcja rejestrujaca nowego uzytkownika
{
    ofstream f_plik;
    string s_Nazwa = "", s_Haslo = "";
    f_plik.open("../User/Login.txt", ios::app); //Otwarcie pliku z loginami do nadpisania
    system("cls");
    cout << "\n\n\n\n\n\n\n" << setw(55) << "Podaj nowy login: ";
    cin >> s_Nazwa;
    fnSzyfr(s_Nazwa, 'i'); //Zaszyfrowanie nowego loginu
    cout << setw(55) << "Podaj nowe haslo: ";
    cin >> s_Haslo;
    fnSzyfr(s_Haslo, 'i'); //Zaszyfrowanie nowego hasla
    system("cls");

    f_plik << endl << s_Nazwa << " " << s_Haslo; //Zapis do pliku


    f_plik.close();
    return;
}
