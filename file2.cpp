#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main() {
    //perulangan while
    int x;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    x = rand() % 10;
    cout << "perulangan while " << endl;
    cout << "Nilai x awal " << x << endl;
    
    while (x < 7)
    {
        cout << "Nilai x = " << x << "lari Keliling " << endl;
        x = rand() % 10;
        perulanganWhile++;
    }
    cout << "Nilai x telahir = " <<x << endl;
    cout << "Perulangan while = " << perulanganWhile << endl;
    

}


