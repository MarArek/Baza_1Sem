#include "LIBRARIES.h"
#include <iomanip>

void fnMainMenu(const string &s_Login, const string &s_nazwa) //Funkcja wyswietlajaca menu glowne
{
    cout << setw(70) << "Baza danych (widok dla uztykownika " << s_Login << " )" << endl; //Dla kazdego uzytkownika zalogowanego wyswielti co innego
    cout << setw(57) << "Wczytano plik o nazwie: "; //Dla kazdego wczytanego pliku wyswietli:
    if(s_nazwa == "")
        cout << "\"nie wczytano pliku\"\n\n"; //gdy brak wczytanego pliku
    else
        cout << "\"" << s_nazwa << "\"\n\n"; //nazwę ze sciezka gdy wczytano plik

    cout <<setw(56)<< "Wybierz 1: Stworz nowa baze danych.\n\n";
    cout <<setw(51)<< "Wybierz 2: Wczytaj dane z pliku." << endl;
    cout <<setw(55)<< "Wybierz 3: Wyswietl zawartosc pliku." << endl;
    cout <<setw(43)<< "Wybierz 4: Dodaj rekord." << endl;
    cout <<setw(42)<< "Wybierz 5: Usun rekord." << endl;
    cout <<setw(48)<< "Wybierz 6: Aktualizuj rekord." << endl;
    cout <<setw(39)<< "Wybierz 7: Wyszukaj." << endl << endl;
    cout <<setw(61)<< "Wybierz 8: Rejestracja nowego uzytkownika." << endl;
    cout <<setw(39)<< "Wybierz 9: Wyloguj. " << endl;
    cout <<setw(37)<< "Wybierz q: Wyjdz. " << endl;
    cout <<setw(57)<< "Co wybierasz: ";
    return;
}
