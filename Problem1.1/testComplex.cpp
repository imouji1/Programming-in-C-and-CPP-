#include "Complex.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int arr [10] = {1,2,3,4,5,6,8,9,10};
    char arrc [10] = {'a','b','c','d','e','f'};
    float arrf [10] = {1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};
    double arrb [10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    Complex arrcom [10];
    Complex c(1,8);

    int posit = array_search(arr, 10, 4);

    cout << "position of elem in int arr: " << posit << endl;

     posit = array_search(arrc, 10, 'b');

    cout << "position of elem in char arr: " << posit << endl;

     posit = array_search(arrf, 10, (float)1.30);

    cout << "position of elem in float arr: " << posit << endl;

     posit = array_search(arrb, 10, 2.23);

    cout << "position of elem in double arr: " << posit << endl;

     posit = array_search(arrcom, 10,  c);

    cout << "position of elem in Complex arr: " << posit << endl;
}