#include <iostream>

using namespace std;

int a = 20, b = 10;
void Swap(int& a, int& b);

int main()
{
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
}

void Swap(int& a, int& b) {
    int temp1 = a, temp2 = b;
    a = temp2;
    b = temp1;
}