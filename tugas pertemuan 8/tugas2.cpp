#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, banyak, menu;
    float jumlahbayar = 0, pajak, totalbayar; // Inisialisasi jumlahbayar
    const int z = 3;
    int potong[z];
    int harga[z] = {15000, 10000,  8000 };
    char kode[z] = {'D', 'P', 'S'};
    char jenis[z];
    string arti[z] = {"Dada", "Paha", "Sayap"};
    
    cout << "Dbro Fred Chiken" << endl;
    cout << "-------------------------" << endl;
    cout << "Kode  Jenis     Harga" << endl;
    cout << "-------------------------" << endl;

    for (a = 0; a < z; a++) {
        cout << " " << kode[a] << "\t" << arti[a] << "\tRp." << harga[a] << endl;
    }
    
    cout << "-------------------------" << endl;
    cout << "\n\nBanyak Jenis : ";
    cin >> banyak;
    
    for (a = 0; a < banyak; a++) {
        cout << "\nJenis Ke = " << a + 1 << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> jenis[a];
        cout << "Banyak Potong        : ";
        cin >> potong[a];
    }

    cout << "\n\n\n\t\t\tDbro Fred Chiken " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "No.   Jenis        Harga    Banyak    Jumlah" << endl;
    cout << "       Potong      Satuan    Beli     Harga" << endl;
    cout << "-----------------------------------------------------" << endl;

    for (a = 0; a < banyak; a++) {
        for (b = 0; b < z; b++) {
            if (kode[b] == jenis[a]) {
                menu = b;
                break;
            }
        }
        // Output setiap transaksi
        cout << a + 1 << "\t" << arti[menu] << "\t\tRp " << harga[menu] << "\t\t" << potong[a] << "\t\tRp " << harga[menu] * potong[a] << endl;
        jumlahbayar += harga[menu] * potong[a];
    }

    pajak = jumlahbayar * 10 / 100;
    totalbayar = jumlahbayar + pajak;
    
    cout << "-----------------------------------------------------" << endl;
    cout << "\t\t\t\tJumlah Bayar     Rp " << jumlahbayar << endl;
    cout << "\t\t\t\tPajak 10%        Rp " << pajak << endl;
    cout << "\t\t\t\tTotal Bayar      Rp " << totalbayar << endl;

    return 0;
}
