#include<iostream>
#include <fstream>
using namespace std;
int main () 
{
ofstream mhsFile;
	mhsFile.open ("datamhs.txt", ios::app);
	mhsFile <<"Nama : Andi Maulana Amier ";
	mhsFile <<"\n Stambuk : 13020190257";
	mhsFile <<"\n kelas : A5";
	mhsFile.close();
	
return 0;

}
