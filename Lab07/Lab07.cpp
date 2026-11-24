#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int a = 20, b = 10;
void Swap(int& a, int& b);
float Srednia(float* tablica, int rozmiar);

int main()
{
    srand(time(0));
    // Zadanie 2.1
    /*
        const int size = 3;
    int tab[] = {1,2,3};
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "] " << tab[i] << endl;
    }

    int* ptr[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = &tab[i];
        cout << "[" << i << "] " << *ptr[i] << endl;
    }
    */

    // Zadanie 2.2
    /*
    const int size = 3;
    int tab[] = { 1,2,3 };
    int* p = &tab[0];
    for (int i = 0; i < size; i++) {
        cout << p << " | " << *p << endl;
        p++;
    }
    */

    // Zadanie 2.3
    /*
    cout << "A: " << a << " B: " << b << endl;
    Swap(a, b);
    cout << "A: " << a << " B: " << b << endl;
    */

    // Zadanie 1
    /*
    int a;
    int* ptr;
    ptr = &a;

    cout << "podaj liczbe: ", cin >> *ptr;
    cout << "liczba to: " << a;
    */
    
    // Zadanie 2
    /*
    int jakas_tablica[10];
    int* wsk;
    wsk = jakas_tablica;
    for (int i = 0; i < 10; i++) {
        cout << jakas_tablica[i] << endl;
    }
    wsk += 7;
    *wsk = 77;
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << jakas_tablica[i] << endl;
    }
    */

    // Zadnie 2.1
    /*
    int tab[10] = { 0 };
    int* wsk;
    wsk = tab;

    for (int i = 0; i < 10; i++) {
        *wsk = 9;
        wsk++;
    }
    */

    // Zadanie 3
    /*
    int a;
    cout << "Podaj rozmiar tablicy: ", cin >> a;

    float* tab = new float[a];
    for (int i = 0; i < a; i++) {
        tab[i] = static_cast<float>(i);
    }
    float* wsk = &tab[a - 1];

    while (1) {
        cout << "Wartosc tablicy: " << *wsk << endl;
        if (*wsk == 0) {
            break;
        }
        wsk--;
    }
    */

    // Zadanie 4
    /*
    int rozmiar;
    cout << "Podaj rozmiar tablicy: ", cin >> rozmiar;

    float* tab = new float[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        tab[i] = rand() % 100;
    }

    cout << "Srednia: " << Srednia(tab, rozmiar) << endl;
    */
    
    // Zadanie 5
    int rozmiar;
    cout << "Podaj rozmiar tablicy: ", cin >> rozmiar;
    
    int* tab1 = new int[rozmiar];
    int* tab2 = new int[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        tab1[i] = rand() % 100;
        tab2[i] = rand() % 100;
    }

    cout << "Dodawanie:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tab1[i] + tab2[i] << endl;
    }

    cout << "Mnozenie:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tab1[i] * tab2[i] << endl;
    }
    
    int a = tab1[0], b = tab2[0];
    for (int i = 0; i < rozmiar; i++) {
        cout << tab1[i] << " " << tab2[i] << endl << endl;
        if (a < tab1[i]) {
            a = tab1[i];
        }
        if (b > tab1[i]) {
            b = tab1[i];
        }
    }
    cout << "Dla tab1: MAX = " << a << " MIN = " << b << endl;

    for (int i = 0; i < rozmiar; i++) {
        if (a < tab2[i]) {
            a = tab2[i];
        }
        if (b > tab2[i]) {
            b = tab2[i];
        }
    }
    cout << "Dla tab2: MAX = " << a << " MIN = " << b;

    
}

void Swap(int& a, int& b) {
    int temp1 = a, temp2 = b;
    a = temp2;
    b = temp1;
}

float Srednia(float* tablica, int rozmiar) {
    float suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }
    return suma / rozmiar;
}