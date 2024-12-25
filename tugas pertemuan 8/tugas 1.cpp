#include <iostream>
using namespace std;

int main()
{
    int baris;
    int kolom;
    char jenisOperasi;
    
    cout << "Program Operasi Matriks\n";
    cout << "Masukan Jumlah Baris: ";
    cin >> baris;
    cout << "Masukan Jumlah Kolom: ";
    cin >> kolom;
    
    do {
        cout << "Pilih Jenis Operasi (Input Angka):\n(1)Perkalian\n(2) Penjumlahan\n(3)Pengurangan\n";
        cin >> jenisOperasi;
    } while (jenisOperasi != '1' && jenisOperasi != '2' && jenisOperasi != '3');
    
    int matrixA[baris][kolom];
    int matrixB[baris][kolom];
    int data;

    cout << "Matrix A:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Matrix A[" << i << "][" << j << "] : ";
            cin >> data;
            matrixA[i][j] = data;
        }
    }

    cout << "Matrix B:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Matrix B[" << i << "][" << j << "] : ";
            cin >> data;
            matrixB[i][j] = data;
        }
    }

    cout << "\nTampilkan Matrix A:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matrixA[i][j] << '\t';
        }
        cout << endl;
    }

    cout << "\nTampilkan Matrix B:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matrixB[i][j] << '\t';
        }
        cout << endl;
    }

    if (jenisOperasi == '1')
    {
        if (kolom == baris)
        {
            cout << "\nHasil Matrix A * Matrix B:\n";
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    int hasil = 0;
                    for (int k = 0; k < kolom; k++)
                    {
                        hasil += matrixA[i][k] * matrixB[k][j];
                    }
                    cout << hasil << '\t';
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Perkalian Matriks tidak dapat dilakukan. Jumlah kolom A harus sama dengan jumlah baris B.\n";
        }
    }
    else if (jenisOperasi == '2')
    {
        cout << "\nHasil Matrix A + Matrix B:\n";
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << matrixA[i][j] + matrixB[i][j] << '\t';
            }
            cout << endl;
        }
    }
    else
    {
        cout << "\nHasil Matrix A - Matrix B:\n";
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << matrixA[i][j] - matrixB[i][j] << '\t';
            }
            cout << endl;
        }
    }
    
    return 0;
}
