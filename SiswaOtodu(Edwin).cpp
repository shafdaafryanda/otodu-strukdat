#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;

void beliNLP(){
    system("cls");
    cout << "=====================================\n";
    cout << "              NLP OTODU              \n";
    cout << "=====================================\n";
    cout << "1. MATEMATIKA\n";
    cout << "2. BAHASA INGGRIS\n";
    cout << "Tekan tombol apapun untuk kembali ke menu utama...";
    getch();    
}

void pesanMentor(){
    system("cls");
    cout << "=====================================\n";
    cout << "          List Mentor OTODU          \n";
    cout << "=====================================\n";
    cout << "1. Adam, S.Kom. (123m)\n";
    cout << "2. Budi, S.Si.  (205m)\n";
    cout << "3. ...........\n";
    cout << "4. ...........\n";
    cout << "Tekan tombol apapun untuk kembali ke menu utama...";
    getch();    
}

void riwayatNLP(){
    system("cls");
    cout << "=====================================\n";
    cout << "             Riwayat NLP             \n";
    cout << "=====================================\n";
    cout << "1. Trigonometri\n";
    cout << "2. Simple Past Tense\n";
    cout << "3. ...........\n";
    cout << "4. ...........\n";
    cout << "Tekan tombol apapun untuk kembali ke menu utama...";
    getch();    
}


int main(){
    int pilihan;

    do {
        system("cls"); // Membersihkan layar
        cout << "=====================================\n";
        cout << "            SISWA OTODU              \n";
        cout << "=====================================\n";
        cout << "1. Beli Kursus NLP\n";
        cout << "2. Pesan Mentor   \n";
        cout << "3. Riwayat NLP    \n";
        cout << "4. Logout         \n";
        cout << "=====================================\n";
        cout << "Pilih Menu (1-4): ";
        // cin  >> pilihan;

        if (!(cin >> pilihan)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            pilihan = 0; // Default jika input salah
        }

        switch(pilihan){
            case 1:
                beliNLP();
                break;
            case 2:
                pesanMentor();
                break;
            case 3: 
                riwayatNLP();
                break;
            case 4:
                cout << "\nKembali ke halaman login.....";
                getch();
                return 0;
            default: 
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                getch();
        }

    } while (true);
        
}
