# include <iostream>
using namespace std;
int main(){

    int a=10, b=5;
    bool x=true,y=false;

    //Assignment Operater:-
    cout<< "Assignment operators:" << endl;
    int c=a; //=
    c+=b;    //+=
    cout<<"c +=b :" << c << endl;
    c-=b;    //-=
    cout<<"c -=b :" << c << endl;
    c*=b;   //*=
    cout<< "c*=b:" << c << endl;
    c/=b;  // /=
    cout<< "c/=b:" << c << endl;
    c%=b;  //%=
    cout<<"c%=b:" << c << endl;
//==================================
//========Logical Operater==========
//==================================

cout<< "\n Logical Opeators:" << endl;
cout<<"x && y :" <<(x && y) << endl; //AND
cout<<"x || y :" <<(x || y)<< endl;  //OR
cout<<"!x :" << (!x) << endl;       //NOT
//=============================
//--------unary operators------
//============================

cout<<"\n unary operators :"<< endl; 
int d =5;
cout<<"Initial d :" <<d<< endl;
cout<< "++d (Pre Increment):" << ++d<< endl;
cout<< "d++ (Post Increment):" << d++ << endl;
cout<< "After d++ :"<<d << endl;

cout<< "--d(pre Decrement):"<< --d << endl;
cout<< "d--(post Decrement):" << d-- << endl;
cout<< "After d-- :"<<d << endl;
//=============================
//--------ternary operators------
//============================

cout << "\n Ternary Operator :" <<endl;
int result=(a>b)?a:b;
cout << "Greater number is :" <<result << endl;
return 0;
}