#include "LIBRARIES.h"
#include <iomanip>

void fnRegister()
{
    ofstream f_plik;
    string s_Nazwa = "", s_Haslo = "";
    f_plik.open("../Login.txt", ios::app);
    system("cls");
    cout << "\n\n\n\n\n\n\n" << setw(55) << "Podaj nowy login: ";
    cin >> s_Nazwa;
    fnSzyfr(s_Nazwa, 'i');
    cout << setw(55) << "Podaj nowe haslo: ";
    cin >> s_Haslo;
    fnSzyfr(s_Haslo, 'i');
    system("cls");

    f_plik << endl << s_Nazwa << " " << s_Haslo;


    f_plik.close();
    return;
}
