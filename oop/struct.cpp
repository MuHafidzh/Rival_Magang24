#include <iostream>
//deklarasi struktur yang bernama mobil
struct mobil {
    std::string merek;
    std::string tipe;
    int tahun;
};
int main (){
    mobil mobilSaya;
    mobilSaya.merek = "Avanza";
    mobilSaya.tipe = "XX";
    mobilSaya.tahun = 2010;

    mobil mobilKamu;
    mobilKamu.merek = "Ayla";
    mobilKamu.tipe = "YY";
    mobilKamu.tahun = 2015;

    std::cout <<  mobilSaya.merek << " " << mobilSaya.tipe << " " << mobilSaya.tahun << std::endl;
    std::cout <<  mobilKamu.merek << " " << mobilKamu.tipe << " " << mobilKamu.tahun << std::endl;
    return 0;
}