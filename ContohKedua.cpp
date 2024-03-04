#include <iostream>
using namespace std;

int main(){

 int nBilangan; 
 string status;
 srand (time(0));

 if (nBilangan % 2 == 0){
    status = "Genap";
 }
 else {
    status = "Ganjil";
 }
 cout << "Statusnya adalah : " << status << endl;
 cout << "Bilangannya adalah : " << nBilangan << endl;

 return 0;

}