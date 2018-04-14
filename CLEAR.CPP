#include "LIBRARIES.h"

void fnClear(const string &s_nazwa) //Funkcja czyszczaca plik Bazy Danych do nastepenego nadpisania
{
    ofstream f_plik;
    f_plik.open(s_nazwa.c_str(), ios::trunc);
    f_plik.close();
    return;
}
