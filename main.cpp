#include <iostream>
#include <string>
using namespace std;

// Araç Muayene İstasyonu
class Araba {
    public: 
    // Default Constructor (Yapıcı Metot) Parametre almaz
        Araba() {
            cout << "Default constructor çağrıldı\n" ;
            marka = "Bilinmiyor";
            model = "Bilinmiyor";
     }
    
    Araba(string markaAdi, string modelAdi, int UretimYili){
        cout << "Parametre alan construcyor çağrıldı."<< endl;
        marka = markaAdi;
        model = modelAdi;
        yil = UretimYili;
    }
    
    void bilgileriGoster() const {
        cout << "Marka: " << marka << ", Model: " << model << ", UretimYili: " << yil << endl;
    }

    void BilgileriGuncelle(string dogruMarka, string dogruModel, int uretimYili){
        marka = dogruMarka;
        model = dogruModel;
        yil = uretimYili;
        cout << "Bilgiliriniz Guncellendi." << endl;
    }
    
    void UretimYiliGuncelle(int yeniYil){
        yil = yeniYil;
        cout << "Üretim Yılı güncellendi" << endl;
    }
    
    void modelGuncelle(string yeniModel){
        model = yeniModel;
        cout << "model güncellendi " << endl;
    }
    
    void markaGuncelle(string yeniMarka){
        marka = yeniMarka;
        cout << "Marka güncellendi " << endl;
    }
    
    private:
        string marka;
        string model;
        int yil;
};

int main() {
    
    int number1 = 5;
    int number2 = 6;
    int number3 = 7;
/*
-----------------------------
   |    |  5 | 6  | ...  | 10  | 11 | 12 |
------------------------------
*/

    int sayilar[] = {5, 6, 7, 8, 9, 10, 11, 12};
    cout << sayilar[1] << endl;
    
    
    
    //Araba araba1;
    Araba araba2("Toyota", "Corolla", 2008);
    araba2.bilgileriGoster();
    araba2.BilgileriGuncelle("Range Rover", "Sport", 2023);
    araba2.bilgileriGoster();
    araba2.UretimYiliGuncelle(2022);
    araba2.bilgileriGoster();
    araba2.modelGuncelle("Evoque");
    araba2.bilgileriGoster();
    
    return 0;
}
