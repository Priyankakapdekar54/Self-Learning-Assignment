#include <iostream>
using namespace std;
 void add(int *a,int*b)
 {
    int sum=*a+*b;
    cout<<"sum="<<sum;
 }

 int main()
 {
    int x= 10, y=20;
    add(&x,&y);
    return 0;
 }