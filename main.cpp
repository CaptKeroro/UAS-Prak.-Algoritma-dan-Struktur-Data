#include <iostream>

using namespace std;

void tampil_array(int nilai[], int masuk){
  int index;
  cout << "Data pada Array : ";
  for (index = 0; index < masuk; index++){
    cout << nilai[index] << " ";
  }
  cout << endl;
}

int main(){
  int masuk;
  cout << "Masukan Banyak Array : ";
  cin >> masuk;
  if (masuk > 15){
    cout << "MAKSIMAL INPUT ARRAY SEBANYAK 15" << endl;
  }
  else{
    int nilai[masuk], input;
    for (int index = 0; index < masuk; index++){
      cout << "Masukan Nilai pada index ke- " << index << " : ";
      cin >> nilai[index];
    }
    char temp_nilai;
    int index, i, j;
    tampil_array(nilai, masuk);
    for (int i = masuk - 1; i > 0; i--){
      index = i;
      for (int j = i - 1; j >= 0; j--){
        if (nilai[index] < nilai[j]){
          index = j;
        }
      }
      temp_nilai = nilai[i];
      nilai[i] = nilai[index];
      nilai[index] = temp_nilai;
      tampil_array(nilai, masuk);
    }
    cout << "Masukkan nilai yang dicari : ";
    cin >> input;
    for (int j = 0; j < masuk; j++){
      if (nilai[j] == input){
        cout << "\n";
        cout << "Nilai yang dicari terdapat dalam index ke- " << j << endl;
        break; // break berfungsi menghentikan bentuk perulangan dalam kondisi apapun
      }
    }
  }
  return 0;
}