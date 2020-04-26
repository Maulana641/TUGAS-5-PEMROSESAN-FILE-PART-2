#include <fstream>
#include <iostream>
using namespace std;
int main() {
char NamaDepan[30], NamaBelakang[30];
int umur; char NamaFile[20];
cout << "Nama Depan: "; cin >> NamaDepan;
cout << "Nama Belakang: "; cin >> NamaBelakang;
cout << "Umur: "; cin >> umur;
cout << "\nNama File: ";
cin >> NamaFile;
ofstream Students(NamaFile, ios::out);
Students << NamaDepan << "\n" << NamaBelakang<< "\n" << umur;
cout << "\n\n";
return 0;
}
