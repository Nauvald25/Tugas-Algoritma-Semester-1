#include <iostream>
using namespace std;

int main() {
	int num, i;
	bool isPrime = true;
	
	cout << "Masukan Bilangan:";
	cin >> num;
	
	if (num < 2) {
		isPrime = false;
		
	} else {
		
		for (i = 2; i <= num /2; i++) {
			if (num % i == 0) {
				isPrime =false;
				break;
			}
		}
	}


	if (isPrime)
	cout << num << "Termasuk Bilangan Prima" << endl;
	else
	cout << num << "Bukan Termasuk Bilangan Prima" << endl;
	
	return 0;
}
