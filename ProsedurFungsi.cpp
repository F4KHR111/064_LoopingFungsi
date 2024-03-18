#include <iostream>
using namespace std;

string nama;
int nXpander, nPorche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

void input()
{

    cout << "Nama Pembeli : ";
    cin >> nama;
    cout << "Jumlah Xpander :";
    cin >> nXpander;

    cout << "Jumlah Porche : ";
    cin >> nPorche;

    cout << "Jumlah Avanza : ";
    cin >> nAvanza;

    cout << "Jumlah Brio : ";
    cin >> nBrio;

    cout << "Jumlah Lamborghini : ";
    cin >> nLamborghini;
}

int TotalHarga()
{
    return (nXpander * hXpander) + (nPorche * hPorche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
}

void Display()
{
    cout << "Total Harganya : " << TotalHarga() << endl;
}

int main()
{
    char pilihan;
    do{
    input();
    Display();
    cout << "Apakah ingin membeli kembali ? ";
    cin >> pilihan;    
    }while(pilihan == 'y'||pilihan == 'Y');
    
}