#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    cout << "Hello world" <<endl;
    /* druga
    czesc
    programu */
    cout <<"Podaj imie: " <<endl;
    string imie;
    cin >>imie; //wprowadzam imie z klawiatury
    cout << "Hello " << imie << endl;

    /*trzecia czesc 
    programu */
    int a;
    float b;
    char c;
    a = 10.567;
    c = '$';
    cout << "Wprowadz liczbe rzeczywista: " << endl;
    cin >> b;
    cout << "a = " << a << " rozmiar zmiennej: " << sizeof(a) << endl;
    cout << "b = " << fixed << setprecision (2) <<b << endl;
    printf("b = %.2f\n", b);
    cout << "c = " << c << " rozmiar zmiennej: " << sizeof(c) << endl;
return 0;
}
