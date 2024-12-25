#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
	int main (){
		int a,b;
		char ulang;
		pertama:
		cout << "masukan bilangan =";
		cin>>a;
		b=a%2;
		cout << "hasil modulus =";
		cout<<b<< endl;
		cout << "ingin hitung lagi [y/t]";
		cin >> ulang;
		
		if (ulang == 'y' || ulang == 'y'){
		goto pertama;
		}
	if (ulang == 't' || ulang =='t'){
	}
	goto selesai;
	
	selesai:
		cout << "program selesai.";
		return 0;
	}
