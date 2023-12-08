#include <bits/stdc++.h>
using namespace std;

class A{
public:
    static void showA(){
        cout<<"method in class A"<<endl;
    }
    static void show(){
        cout<<"method in class A"<<endl;
    }
};
class B: public A{  
public:
    static void showB(){
        cout<<"method in class B"<<endl;
    }
    static void show(){
        cout<<"method in class B"<<endl;
    }
};
class C: public A{  
public:
    static void showC(){
        cout<<"method in class C"<<endl;
    }
    static void show(){
        cout<<"method in class C"<<endl;
    }
};

int main(){
    C c1;
    c1.showA();
    c1.showC();

    B b1;

    b1.showA();

    /* Now B is the one who is declaring object so its show functions has the highest priority*/
    b1.show();

    /* Now C is the one who is declaring object so its show functions has the highest priority*/
    c1.show();
}

