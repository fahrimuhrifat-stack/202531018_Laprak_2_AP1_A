#include <iostream>
using namespace std;

int main() {
    // 1. Deklarasi variabel untuk simpan umur
    int umurpenonton;
    
    // 2. Minta input umur dari penonton
    cout << "Masukkan umur penonton: ";
    cin >> umurpenonton ;
    
if (umurpenonton >= 21) {
        // Jika umur 21 atau lebih, diperbolehkan masuk diruangan(Dewasa) D21
        cout << "D21" << endl;
    } 
    else if (umurpenonton >= 17) {
        // Jika tidak >= 21 (artinya umur 20 ke bawah), 
        // Jika umur 17 atau lebih, bisa masuk ruangan remaja (berarti rentang um 17-20)
        cout << "D17" << endl;
    } 
    else if (umurpenonton >= 13) {
        // Jika tidak >= 17 (artinya umur 16 ke bawah),
        // Jika umur 13 atau lebih (berarti rentang 13-16)
        cout << "R13" << endl;
    } 
    else {
        // Jika semua kondisi di atas tidak terpenuhi
        // (artinya umur di bawah 13 dan tidak bisa menonton)
        cout << "SU" << endl;
    }
    // Selesai
    return 0;
}
