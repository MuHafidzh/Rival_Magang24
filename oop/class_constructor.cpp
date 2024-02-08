#include <iostream>

class myClass {
    public:
    myClass (){
        std::cout << "Halo" << std::endl;
    }
};
class Car {
    public:
    std::string merek, tipe;
    int tahun; 
    Car(std::string x, std::string y, int z){
        merek = x;
        tipe = y;
        tahun = z;
    } 
};


int main(){
    myClass objek; // membuat sebuah objek dari class
    Car mobilSaya("Alphard", "YZ", 2025);
    std::cout <<  mobilSaya.merek << " " << mobilSaya.tipe << " " << mobilSaya.tahun << std::endl;
    return 0;
}