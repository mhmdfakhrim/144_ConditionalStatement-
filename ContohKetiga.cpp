#include <iostream>

using namespace std;

int main(){
  int nBilanganA, nBilanganB;
  string status;

  srand(time(0));

  nBilanganA = rand() % 10;
  nBilanganB = rand() % 10;

  cout << "Bilangan A = " << nBilanganA << endl;  
  cout << "Bilangan B = " << nBilanganB << endl;

  if(nBilanganA == nBilanganB){
    status = "Nilai A sama dengan Nilai B";

  }

  else if(nBilanganA > nBilanganB){
    status = "NIlai A lebih besar dari nilai B";
  }

  else{
    status = "Nilai A lebih kecil dari Nilai B";
  }

  cout << "Tampilkan Status : " << status << endl;

  return 0; 
}