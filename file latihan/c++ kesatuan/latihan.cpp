#include <iostream>

using namespace std;

int main() {
    double tot_beli, potongan = 0, jum_bayar = 0;

    cout << "Total Pembelian Rp. ";
    cin >> tot_beli;

    if (tot_beli >= 50000) {
        potongan = 0.2 * tot_beli; 
    }

    cout << "Besarnya Potongan RP. " << potongan << endl;

    jum_bayar = tot_beli - potongan;
    cout << "Jumlah Yang Harus Di Bayarkan Rp. " << jum_bayar << endl;

    return 0;
}

