#include <iostream>

using namespace std;

int main()
{
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
}