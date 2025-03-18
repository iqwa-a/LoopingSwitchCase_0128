#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y){
    return x * y;
}

float luaslingkaran (float x){
    return 3.14 * x * x;
}

int main () {
    int pilihan;
    float panjang,lebar,jarijari;
    do{
        cout <<"===Men==="<<endl;
        cout << " 1. Menghitung Luas Persegi Panjang " << endl;
        cout << " 2. Menghitung Luas Lingkaran " << endl;
        cout << " 3. Exit " << endl;
        cout << "Pilih Menu (1/2/3) ";
        cin >> pilihan;

        switch (pilihan){
        case 1 :
            cout << "menghitung Luas Persegi Panjang " << endl;
            cout << "Masukan Panjang "  ;
            cin >> panjang;
            cout << "menghitung Lebar "  ;
            cin >> lebar;
            cout << "Luas PErsegi Panjang = " 
            << luasPersegiPanjang(panjang,lebar) << endl;
            break;
        case 2 : 
        cout << "menghitung Luas Lingkaran " << endl;
        cout << "masukan jari jari = " ;
        cin >> jarijari;
        cout << "Luas Lingkaran = "
        << luaslingkaran(jarijari) << endl;
        break;
        case 3 : 
        break;
        default :
        cout << "Pilihan tidak ada" << endl;
            break;
        }
    }while(pilihan != 3);
}