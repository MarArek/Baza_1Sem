#include "LIBRARIES.h"

void fnSzyfr(string &s_Wyraz,const char &c_typ) //Funkcja szyfrująca i deszyfrujaca "Szyfrem Pseudo-Cezara"
{
    if(c_typ == 'i') //"IN" czyli szyfrowanie
    {
        for(int i = 0; i < (int)s_Wyraz.length() ; i++)
        {
            s_Wyraz[i] = 33 + ((int)s_Wyraz[i] - 33 + 3)%94; //Klucz = 3; Istnieja 94 dostepne znaki w kodzie ASCII
        }
    }
    else if(c_typ == 'o') //"OUT" czyli deszyfracja
    {
        for(int i = 0; i < (int)s_Wyraz.length() ; i++)
        {
            s_Wyraz[i] = 33 + ((int)s_Wyraz[i] - 33 - 3)%94; //Klucz = 3; Istnieja 94 dostepne znaki w kodzie ASCII
        }
    }
}
