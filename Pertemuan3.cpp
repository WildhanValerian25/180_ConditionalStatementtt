#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput(){
    cout << "masukan nilai alas : ";
    cin >> alas;

    cout << "masukan nilai tinggi : ";
    cin >> tinggi;
}

void procedurHitungLuas(){
    luas = 0,5 * luas * tinggi;
}


void procedurOutput(){
    cout << "Luas Segitiga = " << luas << endl;
}

int main(){
    procedurInput();
    procedurOutput();
}