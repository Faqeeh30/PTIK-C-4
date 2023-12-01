#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct laptop {
  string brand;
  string seri;
  string pros;
  string ram;
  string rom;
  string batterai;
  string ukuranlayar;
  string resolusi;
  string kamera;
  string konektifitas;
  string harga;
};

void tampilkanMenu() {
  cout << "Pilih operasi yang ingin Anda lakukan:\n";
  cout << "1. Create (Menambahkan data laptop)\n";
  cout << "2. Read (Menampilkan data laptop)\n";
  cout << "3. Update (Mengubah data laptop)\n";
  cout << "4. Delete (Menghapus data laptop)\n";
  cout << "5. Exit (Keluar dari program)\n";
}


void tambahData(vector<laptop>& data) {
  laptop m;
  cout << "Masukkan brand laptop: ";
  cin >> m.brand;
  cout << "Masukkan seri laptop: ";
  cin >> m.seri;
  cout << "Masukkan processor laptop: ";
  cin >> m.pros;
  cout << "Masukkan ram laptop: ";
  cin >> m.ram;
  cout << "Masukkan rom laptop: ";
  cin >> m.rom;
  cout << "Masukkan batterai laptop: ";
  cin >> m.batterai;
  cout << "Masukkan ukuranlayar laptop: ";
  cin >> m.ukuranlayar;
  cout << "Masukkan resolusi laptop: ";
  cin >> m.resolusi;
  cout << "Masukkan kamera laptop: ";
  cin >> m.kamera;
  cout << "Masukkan konektifitas laptop: ";
  cin >> m.konektifitas;
  cout << "Masukkan harga laptop: ";
  cin >> m.harga;
  data.push_back(m);
  cout << "Data laptop berhasil ditambahkan.\n";
}


void tampilkanData(const vector<laptop>& data) {
  if (data.empty()) {
    cout << "Tidak ada data laptop.\n";
    return;
  }
  cout << "Data laptop yang tersimpan:\n";
  cout << "No.\tbrend\tseri\tProssesor\tRAM\tROM\tbetterai\tukuran_layar\tresolusi\tkamera\tkonektifitas\tharga\n";
  for (int i = 0; i < data.size(); i++) {
    cout << i + 1 << "\t" << data[i].brand << "\t" << data[i].seri << "\t" << data[i].pros << "\t" << data[i].ram << "\t" << data[i].rom << "\t" << data[i].batterai << "\t" << data[i].ukuranlayar << "\t" << data[i].resolusi << "\t" << data[i].kamera << "\t" << data[i].konektifitas << "\t" << data[i].harga << "\t" << "\n";
  }
}


void ubahData(vector<laptop>& data) {
  if (data.empty()) {
    cout << "Tidak ada data laptop yang dapat diubah.\n";
    return;
  }
  int indeks;
  cout << "Masukkan nomor data laptop yang ingin diubah: ";
  cin >> indeks;
  if (indeks < 1 || indeks > data.size()) { 
    cout << "Nomor data laptop tidak valid.\n";
    return;
  }
  indeks--;
  laptop m;
  cout << "Masukkan nama laptop baru: ";
  cin >> m.brand;
  cout << "Masukkan NIM laptop baru: ";
  cin >> m.seri;
  cout << "Masukkan IPK laptop baru: ";
  cin >> m.pros;
  cout << "Masukkan RAM laptop baru: ";
  cin >> m.ram;
  cout << "Masukkan ROM laptop baru: ";
  cin >> m.rom;
   cout << "Masukkan baterrai laptop baru: ";
  cin >> m.batterai;
   cout << "Masukkan ukuranlayar laptop baru: ";
  cin >> m.ukuranlayar;
   cout << "Masukkan resolusi laptop baru: ";
  cin >> m.resolusi;
   cout << "Masukkan kamera laptop baru: ";
  cin >> m.kamera;
   cout << "Masukkan konektifitas laptop baru: ";
  cin >> m.konektifitas;
   cout << "Masukkan harga laptop baru: ";
  cin >> m.harga;
  data[indeks] = m;
  cout << "Data laptop berhasil diubah.\n";
}

void hapusData(vector<laptop>& data) {
  if (data.empty()) {
    cout << "Tidak ada data laptop yang dapat dihapus.\n";
    return;
  }
  int indeks;
  cout << "Masukkan nomor data laptop yang ingin dihapus: ";
  cin >> indeks;
  if (indeks < 1 || indeks > data.size()) {
    cout << "Nomor data laptop tidak valid.\n";
    return;
  }
  indeks--;
  data.erase(data.begin() + indeks);
  cout << "Data laptop berhasil dihapus.\n";
}


int main() {
  vector<laptop> data;
  int pilihan;
  bool selesai = false;
  while (!selesai) { 
    tampilkanMenu();
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    switch (pilihan) {
      case 1:
        tambahData(data);
        break;
      case 2:
        tampilkanData(data);
        break;
      case 3:
        ubahData(data);
        break;
      case 4:
        hapusData(data);
        break;
      case 5:
        selesai = true; 
        cout << "Terima kasih telah menggunakan program aplikasi CRUD ini.\n";
        break;
      default: 
        cout << "Pilihan Anda tidak valid. Silakan coba lagi.\n";
        break;
    }
  }
  return 0;
}