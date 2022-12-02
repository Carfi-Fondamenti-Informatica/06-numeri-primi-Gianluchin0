#include<iostream>
#include "lib.h"
using namespace std;

int main() {
    int h;
    cin >> h;
    if (numeroprimo(h) == 0) {
        cout << "numero primo" << endl;
    }
    else {
        cout << "numero non primo" << endl;
    }
    return 0;
}
