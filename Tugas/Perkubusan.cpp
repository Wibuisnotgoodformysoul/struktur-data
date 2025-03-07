// Judul : Menghitung Luas dan Volume Kubus
// Tanggal : 07 Maret 2025
// Programmer : Rafly Ramadhani
#include <iostream>
using namespace std;

class kubus{
    private:
    float sisi; // Atribut untuk menyimpan panjang sisi kubus

    public: 
    // konstruktor : digunakan untuk menginisialisasi objek dengsn panjang sisi tertentu  
    kubus(float s){
        sisi = s;
    }

    // method untuk menghitung volume kubus : sisi^3
    float hitungVolume(){
        return sisi*sisi*sisi;
    }

    // method untuk menghitung luas kubbus: 6* sisi^2
    float hitungLuas(){
        return 6 * (sisi*sisi);
    }

    // method untuk menampilkan informasi tentang kubus
    void tampilkanInfo(){
        cout << "Sisi: " << sisi << endl;
        cout << "Volume: " << hitungVolume() << endl;
        cout << "Luas: " << hitungLuas() << endl;
    }
};

int main (){
    float s;
    cout << "Masukan sisi kubus: "; cin >> s;

    // Membuat objek kubus dengan panjang sisi yang di input pengguna
    kubus kubus(s);

    // Memanggil method untuk meneampilkan informasi kubus
    kubus.tampilkanInfo();

    return 0;

}
