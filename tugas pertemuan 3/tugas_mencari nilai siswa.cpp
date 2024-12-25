#include <iostream>

using namespace std;

int main(){
	string nama;
	int nilai1, nilai2, nilai3;
	float rataRata;
	
	cout << "Masukan Nama Siswa: ";
	getline(cin, nama);
	
	cout <<"Masukan Nilai Pertama: ";
	cin >> nilai1;
	
	cout <<"Masukan Nilai KeDua: ";
	cin >> nilai2;
	
	cout <<"Masukan Nilai KeTiga: ";
	cin >> nilai3;
	
	rataRata = (nilai1+ nilai2 + nilai3) /3.0;
	
	cout << "\nRata-rata nilai " << nama << "adalah: " << rataRata << endl;
	
	if (rataRata >= 90 ) {
		cout << "selamat," << nama << "Anda Mendapatkan Hadiah Sebesar 200.000 Rb" <<endl;
		
	}  else if (rataRata >= 75) {
		cout << "baik," << nama << "Anda Mendapatkan Cukup Baik nilai" <<endl;
	
		} else{
			cout << "maaf," << nama <<"Anda Perlu Belajar Lagi" << endl;
		} 
		return 0;
	}
