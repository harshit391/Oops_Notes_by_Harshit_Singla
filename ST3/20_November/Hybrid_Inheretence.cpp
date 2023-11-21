#include <bits/stdc++.h>
using namespace std;

class A{
public:
    void showA(){
        cout<<"method in class A"<<endl;
    }
};
class B: public A{  
public:
    void showB(){
        cout<<"method in class B"<<endl;
    }
};
class D{
public:
    void showD(){
        cout<<"method in class D"<<endl;
    }
};
class C: public B,public D{
public:
    void showC(){
        cout<<"method in class C"<<endl;
    }
};
int main()
{
    C c1;
    c1.showA();
    c1.showB();
    c1.showC();
    c1.showD();
    return 0;
}