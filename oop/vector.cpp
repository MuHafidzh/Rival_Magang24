#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << v.size() << endl;
    /*v.assign(100,2);
    cout << v.size() << endl;
    cout << v[2] << endl;
    for(int i = 0; i < 10; i++ ){
        cout << v[i] << endl;
        v[i] += v[i-1];
    }*/
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    cout << v.size() << endl;
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    return 0;
}