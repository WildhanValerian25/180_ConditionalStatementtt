#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
    cout << "masukkan nilai alas : ";
    cin >> alas;
    
    cout << "masukkan nilai tinggi : ";
    cin >> tinggi;
}

double hitungluas(){
    return 0,5 * alas * tinggi;
}

void procedurOutput(){
    cout << "Luas Segitiga = " << hitungluas() << endl;
}
int main(){
    procedurInput();
    procedurOutput();
}