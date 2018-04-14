#ifndef LIBRARIES_H_INCLUDED
#define LIBRARIES_H_INCLUDED

#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

const int i_MAX = 100;

struct st_Baza
{
    string s_imie;
    string s_nazwisko;
    string s_pesel;
    string s_stanowisko;
    string s_pensja;
};

void fnAdd(st_Baza ar_Baza[], const string &s_nazwa, int &i);
void fnClear(const string &s_nazwa);
void fnCreate();
void fnDelete(st_Baza ar_Baza[], string &s_nazwa, int &i);
void fnFind(st_Baza ar_Baza[], string &s_nazwa, const int &i);
void fnLoad(st_Baza st_baza[], string &s_nazwa, int &i);
bool fnLogowanie(string &s_Login, string &s_Password);
void fnMainMenu(const string &s_Login, const string &s_nazwa);
void fnRegister();
void fnShow(st_Baza ar_baza[], const int &i);
void fnSzyfr(string &s_Wyraz,const char &c_typ);
void fnUpdate(st_Baza ar_Baza[], string &s_nazwa, const int &i);


#endif // LIBRARIES_H_INCLUDED
