#include <iostream>

using namespace std;

const int MAX_BUKU = 10; 
string daftarBuku[MAX_BUKU]; 
int jumlahBuku = 0;       


void tambahBuku() {
    if (jumlahBuku >= MAX_BUKU) {
        cout << "Kapasitas penuh! Tidak bisa menambah buku lagi.\n";
        
    }

    cout << "Masukkan judul buku: ";
    cin.ignore(); 
    getline(cin, daftarBuku[jumlahBuku]); 
    jumlahBuku++;
    cout << "Buku berhasil ditambahkan!\n";
}

void tampilkanBuku() {
    if (jumlahBuku == 0) {
        cout << "Tidak ada buku dalam daftar.\n";

    }

    cout << "\nDaftar Buku:\n";
    for (int i = 0; i < jumlahBuku; i++) {
        cout << i + 1 << ". " << daftarBuku[i] << endl;
    }
}


void hapusBuku() {
    if (jumlahBuku == 0) {
        cout << "Tidak ada buku yang dapat dihapus.\n";
        
    }

    int Buku;
    tampilkanBuku();
    cout << "\nPilih nomor buku yang ingin dihapus: ";
    cin >> Buku;

    if (Buku < 1 || Buku > jumlahBuku) {
        cout << "Nomor buku tidak valid.\n";
        
    }


    for (int i = Buku - 1; i < jumlahBuku - 1; i++) {
        daftarBuku[i] = daftarBuku[i + 1];
    }

    jumlahBuku--; 
    cout << "Buku berhasil dihapus!\n";
}


void menu() {
    cout << "\n===== SISTEM PERPUSTAKAAN DIGITAL =====\n";
    cout << "1. Tambah Buku\n";
    cout << "2. Tampilkan Buku\n";
    cout << "3. Hapus Buku\n";
    cout << "4. Keluar\n";
    cout << "Pilih opsi: ";
}

int main() {
    int pilihan;

    do {
        menu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahBuku();
                break;
            case 2:
                tampilkanBuku();
                break;
            case 3:
                hapusBuku();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan sistem ini. Sampai jumpa!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silahkan Coba Lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}