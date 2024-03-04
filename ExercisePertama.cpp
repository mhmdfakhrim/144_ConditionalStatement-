#include <iostream>
using namespace std;

int main(){
  int nMatematika, nFisika, nRerata;
  string status;

  cout << "Masukkan Nilai Matematika : ";
  cin >> nMatematika;
  cout << "Masukkan Nilai Fisika : ";
  cin >> nFisika;

  nRerata = nMatematika + nFisika / 2;

  if (nRerata > 60 || nMatematika > 70) {
        status = "Lulus";
    }
    else{
        status = "tidak lulus";
    }

  cout << "Status Pelajar : " << status << endl;

  return 0;  
}