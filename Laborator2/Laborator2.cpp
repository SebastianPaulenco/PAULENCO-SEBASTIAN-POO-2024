
#include <pch.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct ICarte
{
    unsigned an_aparitie;
    unsigned vechime; 
    char autor[20];
    char editura[20];
    
};


class Carte
{
private:
    unsigned an_aparitie;
    unsigned vechime; 
    char autor[20];
    char editura[20];
    


public:
    Carte(unsigned an_aparitie1, unsigned vechime1, char* autor1, char* editura1)
    {
        strcpy_s(autor, 20, autor1);
        strcpy_s(editura, 20, editura1);
        an_aparitie = an_aparitie1;
        vechime = vechime1;
    }


    Carte() {}
};

int main()
{
    int nr_carti;

    cout << "Introdu numarul de carti: ";
    cin >> nr_carti;

    ICarte* carti = new ICarte[nr_carti];

    for (size_t i = 0; i < nr_carti; i++)
    {
        cout << "Introdu autorul " << i + 1 << endl;
        char autor[20];

        cin >> autor;

        strcpy_s(carti[i].autor, 20, autor);

        cout << "Introdu editura " << i + 1 << endl;
        char editura[20];

        cin >> editura;

        strcpy_s(carti[i].editura, 20, editura);

        cout << "Introdu anul aparitiei " << i + 1 << endl;
        unsigned an_aparitie;

        cin >> an_aparitie;

        carti[i].an_aparitie = an_aparitie;

        cout << "Introdu vechimea " << i + 1 << endl;
        unsigned vechime;

        cin >> vechime;

        carti[i].vechime = vechime;
    }

    cout << "Afisam detalii carti: " << endl;

    for (size_t i = 0; i < nr_carti; i++)
    {
        cout << carti[i].autor << "\t" << carti[i].editura << "\t" << carti[i].an_aparitie << "\t" << carti[i].vechime << endl;
    }

    cin.ignore();
    cin.get();

    return 0;
}