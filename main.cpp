#include <iostream>
using namespace std;

// Fungsi untuk menginput jumlah kucing
int inputJumlahKucing() {
    int jumlah_kucing;
    cout << "Masukkan jumlah kucing: ";
    cin >> jumlah_kucing;
    return jumlah_kucing;
}

// Fungsi untuk menginput panjang masing-masing kucing
void inputPanjangKucing(int jumlah_kucing, int panjang[]) {
    for (int i = 0; i < jumlah_kucing; ++i) {
        cout << "Panjang ke-" << i + 1 << ": ";
        cin >> panjang[i];
    }
}

// Fungsi untuk menghitung total panjang kucing
int hitungTotalPanjang(int jumlah_kucing, int panjang[]) {
    int total_panjang = 0;
    for (int i = 0; i < jumlah_kucing; ++i) {
        total_panjang += panjang[i];
    }
    return total_panjang;
}

// Fungsi untuk menghitung rata-rata panjang kucing
float hitungRataRata(int total_panjang, int jumlah_kucing) {
    return static_cast<float>(total_panjang) / jumlah_kucing;
}

int main() {
    // Memanggil fungsi untuk menginput jumlah kucing
    int jumlah_kucing = inputJumlahKucing();
    
    // Mendeklarasikan array untuk menyimpan panjang kucing
    int panjang[jumlah_kucing];
    
    // Memanggil fungsi untuk menginput panjang masing-masing kucing
    inputPanjangKucing(jumlah_kucing, panjang);
    
    // Memanggil fungsi untuk menghitung total panjang kucing
    int total_panjang = hitungTotalPanjang(jumlah_kucing, panjang);
    
    // Memanggil fungsi untuk menghitung rata-rata panjang kucing
    float rata_rata = hitungRataRata(total_panjang, jumlah_kucing);
    
    // Menampilkan hasil rata-rata panjang kucing
    cout << "Panjang rata-rata kucing adalah: " << rata_rata << endl;
    
    return 0;
}
