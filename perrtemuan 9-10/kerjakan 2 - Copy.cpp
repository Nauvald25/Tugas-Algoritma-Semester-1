#include <iostream>
using namespace std;

int main () {
	int bilangan , sisa;
	int *ptrBilangan = &bilangan;
	
	cout << "Masukan Sebuah Bilangan: ";
	cin >> *ptrBilangan;
	sisa = *ptrBilangan % 2;
	if (sisa == 0) {
		cout << *ptrBilangan << " Adalah Bilangan Genap " << endl;
		
	}else {
		cout << *ptrBilangan << " Adalah Bilangan Ganjil	" <<endl;
		
	}
	return 0;
}