#include <iostream>
#define phi 3.14
using namespace std;

void luas_persegi(float s)
{
    float luas_persegi;
    luas_persegi = s * s;
    cout << "Luas Persegi = " << s << " x " << s << " = " << luas_persegi << " cm^2" << endl;
}

void luas_persegipanjang(float p, float l) 
{
    float luas_persegipanjang;
    luas_persegipanjang = p * l;
    cout << "Luas Persegi Panjang = " << p << " x " << l << " = " << luas_persegipanjang << " cm^2" << endl;
}

void luas_tabung(float r, float t)
{
    float luas_tabung;
    luas_tabung = 2 * phi * r * (r + t);
    cout << "Luas Tabung = 2 x " << phi << " x " << r << " x (" << r << " + " << t << ") = " << luas_tabung << " cm^2" << endl;
}

void volume_tabung(float r, float t)
{
    float volume_tabung;
    volume_tabung = phi * r * r * t;
    cout << "Volume Tabung = " << phi << " x " << r << " x " << r << " x " << t << " = " << volume_tabung << " cm^3" << endl;
}

int main()
{
    int i;
    float s, p, l, r, t;

    
    cout << "Menghitung Luas Persegi" << endl;
    for (i = 0; i < 2; i++)
    {
        cout << "\nSisi Persegi = ";
        cin >> s;
        cout << "Luas Persegi = Sisi x Sisi" << endl;
        luas_persegi(s);
    }

    
    cout << "\n\nMenghitung Luas Persegi Panjang" << endl;
    for (i = 0; i < 2; i++) 
    {
        cout << "\nPanjang Persegi Panjang = ";
        cin >> p;
        cout << "Lebar Persegi Panjang = ";
        cin >> l; 
        
        cout << "Luas Persegi Panjang = Panjang x Lebar" << endl;
        luas_persegipanjang(p, l);
    }

    
    cout << "\n\nMenghitung Luas Tabung" << endl;
    for (i = 0; i < 2; i++)
    {
        cout << "\nJari-jari Lingkaran Tabung = ";
        cin >> r;
        cout << "Tinggi Tabung = ";
        cin >> t;
        cout << "Luas Tabung = 2 x phi x r (r + t)" << endl;
        luas_tabung(r, t);
    }


    cout << "\n\nMenghitung Volume Tabung" << endl;
    for (i = 0; i < 2; i++)
    {
        cout << "\nJari-jari Lingkaran Tabung = ";
        cin >> r;
        cout << "Tinggi Tabung = ";
        cin >> t;
        
        cout << "Volume Tabung = phi x r x r x t" << endl;
        volume_tabung(r, t);
    }

    return 0;
}
