#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;

void riwayatNLP(){
    system("cls");
    cout << "=====================================\n";
    cout << "             Riwayat NLP             \n";
    cout << "=====================================\n";
    cout << "1. Trigonometri\n\n\n\n";
    cout << "Tekan tombol apapun untuk kembali ke menu utama...";
    getch();
}

int main(){
    int pilihan;

    do{
        system("cls");
        cout << "=====================================\n";
        cout << "        Konfirmasi Pembelian         \n";
        cout << "=====================================\n";

        cout << "Anda akan membeli kursus NLP \n\"Trigonometri\" dengan harga Rp5.000.\n\n";
        cout << "Ketik 1 untuk konfirmasi\n";
        cout << "Ketik 2 untuk ke halaman awal\n";
        cout << "Pilih Menu (1-2): ";

        if (!(cin >> pilihan)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            pilihan = 0; // Default jika input salah
        }
        
        switch(pilihan){
            case 1 :
                riwayatNLP();
                break;
            case 2 : 
                cout << "\nKembali ke halaman siswa.....\n";
                getch();
                return 0;
            default: 
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                getch();   
        }
    } while (true);


}
