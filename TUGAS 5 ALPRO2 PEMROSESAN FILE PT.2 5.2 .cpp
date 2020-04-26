#include <fstream>
using namespace std;
int main () 
{
	ofstream myfile;
	myfile.open ("datatugas5.txt", ios::app);
	myfile << "Belum Ada Tugas Alpro";
	myfile.close();
	
return 0;
}
