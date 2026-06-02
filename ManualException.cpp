#include <iostream>
using namespace std;

int main()
{
    //membuat isi dari try untuk pengujian error
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        //throw 0.5; //melemparkan sebuah integrer maka
        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }
    //kondisi jika throw yang bertipe data interger
    catch (int a)
    {
        cout << "Pengucualian akan di eksekusi" << endl;
    }
    //kondisi jika throw bertipe data selain interger
    catch (...)
    {
        cout << "default pengucualian dieksekusi" << endl;
    }
    return 0;
}