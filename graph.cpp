
#include <stdio.h>
#include <iostream>
using namespace std;
int ordo[5][5]; //membuat array 2 dimensi yang berordo 2x2

void masukkan(int a, int b, int c){
 for (int i = 1; i <= 4; i++){
  for (int j = 1; j <= 4; j++)
  if (i == a && j == b){
   ordo[a][b] = ordo[i][j];
   ordo[a][b] = c;
  }
 }
}
void tampilkan(int a, int b, int c){
 for (int i = 1; i <= 4; i++){
  for (int j = 1; j <= 4; j++)
   cout << ordo[i][j] << " ";
  cout << endl;
 }
}
void inisialisasi(){
 for (int i = 1; i <= 4; i++){
  for (int j = 1; j <= 4; j++)
   ordo[i][j] = 0;
 }
}
void menu(){
 cout << "-----------------MENU-----------------\n";
 cout << "1. Masukkan Data\n";
 cout << "2. Tampilkan\n";
 cout << "0. Keluar\n";
 cout << "Masukkan Pilihan Anda: ";
}
int main(){
 inisialisasi();
 int a, b, c;
 int m;
 do{
  system("cls");
  menu();
  cin >> m;
  switch (m){
  case 1:
   system("cls");
   cout << "\nMasukkan Koordinat x : ";
   cin >> a;
   cout << "Masukkan Koordinat y : ";
   cin >> b;
   cout << "Masukkan Isi : ";
   cin >> c;
   if (a <= 4 && b <= 4){
    masukkan(a, b, c); 
   }
   else{
    cout << "\nIndeks harus kurang dari 4\n";
   }break;
   system("pause");
  case 2:system("cls");
     tampilkan(a, b, c); break;
     system("pause");
  }system("pause");
 } while (m != 0); 
}
