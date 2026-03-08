#include <iostream>
using namespace std;

void swap(int &a, int &b);   
int main() {
    int x = 10, y = 20;

    swap(x, y); 

    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

void swap(int &a, int &b) {  
    int temp;
    temp = a;
    a = b;
    b = temp;
}