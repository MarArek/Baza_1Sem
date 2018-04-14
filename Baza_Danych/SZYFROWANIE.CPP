#include "LIBRARIES.h"

void fnSzyfr(string &s_Wyraz,const char &c_typ)
{
    if(c_typ == 'i') //Szyfr Cezara "IN" czyli szyfrowanie
    {
        for(int i = 0; i < (int)s_Wyraz.length() ; i++)
        {
            s_Wyraz[i] = (int)s_Wyraz[i] - 3; //Klucz = 3
        }
    }
    else if(c_typ == 'o') //SZyfr Cezara "OUT" czyli deszyfracja
    {
        for(int i = 0; i < (int)s_Wyraz.length() ; i++)
        {
            s_Wyraz[i] = (int)s_Wyraz[i] + 3; //Klucz = 3
        }
    }
}
