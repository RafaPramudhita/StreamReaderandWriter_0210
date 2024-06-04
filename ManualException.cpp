#include <iostream>
using namespace std;

int main(){
	try {
		cout << "selamat belajar di prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuuah integer maka
		cout << "Pertnyataan tidak akan dieksekusi" << endl;
	}
	
}