#include <iostream>

class myClass {
    public:
        int myNum;
        std::string myString;
        void myFunction(){
            std::cout << "hai" << std::endl;
        };
        int sum(int x, int  y);
};

int myClass::sum(int x, int y){
    return x+y;
}

int main(){
    int a,b;
    myClass object;

    object.myNum = 1;
    object.myString = "Halo";
    
    std::cout << object.myNum << "\n" << object.myString << std::endl;
    object.myFunction();
    std::cin >> a >> b;
    std::cout << object.sum(a,b) << std::endl;

    return 0;
}