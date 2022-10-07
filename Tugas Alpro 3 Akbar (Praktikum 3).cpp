//Untuk Include
#include <iostream>
#include <string>

using namespace std;

int main (){
    //Tugas 3
    //Menukar 2 variable tanpa menggunakan variable sementara
    int e, u;
    e = 12;
    u = 13;

    e = e+u;
    u = e-u;
    e = e-u;

    cout <<"Menukarkan 2 variable tanpa variable sementara"<<endl;
    cout <<"E : " << e << endl << "U : " << u << endl;

    return 0;


}
