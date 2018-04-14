#include "LIBRARIES.h"
#include <iomanip>


bool fnLogowanie(string &s_Login, string &s_Password) //Funkcja bior¹ca podany login i haslo
{
    ifstream f_plik;
    string s_Nazwa = "", s_Haslo = "", s_linia;
    bool b_correct = false;
    f_plik.open("../Login.txt");  //Otworz plik z zaszyfrowanymi haslami

        while(!f_plik.eof())    //Wykonuj dopóki w pliku s¹ dane
        {
            f_plik >> s_Nazwa >> s_Haslo;
            fnSzyfr(s_Nazwa, 'o');
            fnSzyfr(s_Haslo, 'o');              //Odszyfrowanie loginu i hasla z pliku

            if((s_Nazwa == s_Login) && (s_Haslo == s_Password))
            {
                b_correct = true; //Znaleziono pasujace haslo i login
                cout << "\n\n\n\n\n\n\n" << setw(55) << "Poprawne logowanie.";
                Sleep(2000);
                system("cls");
                break;
            }
        }


        if(b_correct==false)              //Jesli funkcja nie znajdzie loginu i hasla w pliku
        {
            cout << "\n\n\n\n\n\n\n" << setw(55) << "Zly login lub haslo. Sprobuj ponownie.";
            Sleep(1200);
            system("cls");
        }


    f_plik.close();
    return b_correct;
}
