#include <iostream>
using namespace std;

double luas,alas, tinggi;

void procedureInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai tinggi : ";
    cin >> tinggi;
}


double hitungluas2(double a, double t){
    return 0.5 * a * t;
}


string ukuranSegitiga(double l){
    //jika luas > 60
    if(l > 60){
        return "besar";
    }
    else{
        return "kecil";
    }
}


void procedureOutput2(){
    cout << "luas segitigas =" << ukuranSegitiga(hitungluas2(alas, tinggi)) << endl;
}



int main(){
    procedureInput();
    procedureOutput2();
}