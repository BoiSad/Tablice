#include <iostream>
using namespace std;
int main()
{
    int tablica[5];
    for (int i = 0; i < 2; i++)
    {
        cout << "Podaj: " << i + 1 << "wartosc: ";
        cin >> tablica[i];
    }

    int suma;
    for (int i = 0; i < 3; i++)
    {
        suma = tablica[i] + tablica[i + 1];
        tablica[i + 2] = suma;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << tablica[i] << " ";
    }

    cout << endl;
    cout << "zadanie 8" << endl;

    int tab1[5][5] = {
        1,0,0,0,0,
        0,2,0,0,0,
        0,0,3,0,0,
        0,0,0,4,0,
        0,0,0,0,5
    };

    int tab2[5][5] = {
        1,0,0,0,0,
        0,2,0,0,0,
        0,0,3,0,0,
        0,0,0,4,0,
        0,0,0,0,5
    };
    int TablicaSum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            TablicaSum += tab1[i][j] + tab2[i][j];
        }
    }
    cout << "Suma macierzy: " << TablicaSum;
}