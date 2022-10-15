//Untuk Include
#include <iostream>
#include <string>

using namespace std;

int main (){
    // Tugas 2
    // Menukar 2 variable dengan bantuan variable sementara
    int a, b, c;
    a = 18;
    b = 21;

    c = a;
    a = b;
    b = c;

    cout << "Menukar 2 variable menggunakan variable sementara" << endl;
    cout << "A : " << a << endl << "B : " << b << endl;

    return 0;
}
