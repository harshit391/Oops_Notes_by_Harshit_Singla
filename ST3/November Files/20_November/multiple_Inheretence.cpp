#include <bits/stdc++.h>
using namespace std;

class A{
public:
    void showA(){
        cout<<"method in class A"<<endl;
    }
};
class B{
public:
    void showB(){
        cout<<"method in class B"<<endl;
    }
};
class C{
public:
    void showC(){
        cout<<"method in class C"<<endl;
    }
};

class D: public A,public B,public C{
    /* if protected accessed here only not in main */
public:
    void showD(){
        cout<<"method in class D"<<endl;
    }
};

int main(){
    D d1;
    d1.showA();
    d1.showB();
    d1.showC();
    d1.showD();
}