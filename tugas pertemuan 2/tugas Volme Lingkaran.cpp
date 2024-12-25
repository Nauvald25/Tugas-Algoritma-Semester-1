#include <iostream>

using namespace std;

int main()
{
	cout <<"# Menghitung Program Luas Lingkaran" << endl;
	cout << "==================================" << endl;
	cout << endl;
	
	float r, luas;
	
	cout << "Input Jari Jari Lingkaran: ";
	cin >> r;
	luas = 3.14 * r * r;
	
	cout << "Luas Lingkaran = "<< luas << endl;
	
	return 0;

}
