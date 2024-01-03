#include <fstream>
#include <iostream>
#include <string>
#include <clocale>
#include <list>

using namespace std;

/*

    Bu proje, veriler.txt adlı metin belgesinden çektiği her bir satırı saklar ve ters çevirerek tekrar yazdırır. 

*/


list<string> lines;

int main()
{
    setlocale(LC_ALL, "tr_TR.UTF-8");

    ifstream dosya("veriler.txt");

    if (!dosya.is_open()) {
        cout << "Dosya açılamadı." << endl;
        return 1;
    }

    // Dosyadan veri okuma
    string veri;
    while (getline(dosya, veri)) {
        // Okunan veriyi işleme (burada ekrana yazdırıyoruz)
        //cout << veri << endl;
        lines.push_back(veri);
    }

    lines.reverse();
    for(auto& object : lines)
    {
        cout << object << endl;
    }
    // Dosyayı kapatma
    dosya.close();

    return 0;

}

